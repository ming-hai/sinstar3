#include "stdafx.h"
#include "sinstar3_tsf.h"
#include "../sinstar3_proxy/SinstarProxy.h"

CTsfModule	*theModule = NULL;

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID pvReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
#ifdef _DEBUG
		_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
#endif
		SLOG_INFO(L"DLL_PROCESS_ATTACH");

		//check for black list
		if(CSinstarProxy::isInBlackList())
			return FALSE;

		{

			TCHAR szPath[MAX_PATH] = { 0 };
			CRegKey reg;
			LONG ret = reg.Open(HKEY_LOCAL_MACHINE,_T("SOFTWARE\\SetoutSoft\\sinstar3"),KEY_READ|KEY_WOW64_64KEY);
			if(ret == ERROR_SUCCESS)
			{
				ULONG len = MAX_PATH;
				reg.QueryStringValue(_T("path_svr"),szPath,&len);
				reg.Close();
			}
			theModule = new CTsfModule(hInstance,szPath);
		}
		break;

	case DLL_PROCESS_DETACH:
		{
			SLOG_INFO(L"DLL_PROCESS_DETACH");
			delete theModule;
			theModule = NULL;
		}
		break;

	case DLL_THREAD_ATTACH:
		{
			SLOG_INFO(L"DLL_THREAD_ATTACH");
		}
		break;

	case DLL_THREAD_DETACH:
		{
			SLOG_INFO(L"DLL_THREAD_DETACH");
		}
		break;
	}

    return TRUE;
}
