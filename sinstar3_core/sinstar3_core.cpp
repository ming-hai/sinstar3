// sinstar3_core.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Sinstar3Impl.h"
#include "../include/autolock.h"
#include "SouiEnv.h"
#include "Minidump.h"
#include "dataCenter/DataCenter.h"


EXTERN_C SINSTAR3_API  ISinstar* Sinstar3_Create(ITextService* pTxtSvr)
{
	CSinstar3Impl*  pRet= new CUnknownImpl<CSinstar3Impl>(pTxtSvr);
	return pRet;
}

EXTERN_C SINSTAR3_API  void Sinstar3_Delete(ISinstar* pSinstar3)
{
	pSinstar3->Release();
}

EXTERN_C SINSTAR3_API HRESULT Sinstar3_CanUnloadNow()
{
	return theModule->GetRefCount()==0;
}

EXTERN_C SINSTAR3_API BOOL Sinstar3_Config(HWND hWnd)
{
	return FALSE;
}


EXTERN_C SINSTAR3_API void Sinstar3_SetHostInfo(HostInfo *pHostInfo)
{
	theModule->SetLogStateListener(pHostInfo->pLogStateListener);
	theModule->SetDataPath(pHostInfo->pszDataPath);
}


CSinstar3Core::CSinstar3Core(HINSTANCE hInst):CModuleRef(hInst),m_pLogStateListener(NULL)
{
	new CDataCenter();
}

CSinstar3Core::~CSinstar3Core()
{
	delete CDataCenter::getSingletonPtr();
}

void CSinstar3Core::OnInit()
{
	CMinidump::Enable();
	new CSouiEnv(GetModule());
	if(m_pLogStateListener)
	{
		m_pLogStateListener->OnLogMgrReady(CSouiEnv::getSingleton().theApp()->GetLogManager());
	}
}

void CSinstar3Core::OnFinalRelease()
{
	if(m_pLogStateListener)
	{
		m_pLogStateListener->OnLogMgrFree();
	}
	delete CSouiEnv::getSingletonPtr();
}

void CSinstar3Core::SetLogStateListener(ILogStateListener *pListener)
{
	m_pLogStateListener = pListener;
	if(CSouiEnv::getSingletonPtr())
	{
		m_pLogStateListener->OnLogMgrReady(CSouiEnv::getSingleton().theApp()->GetLogManager());
	}
}

void CSinstar3Core::SetDataPath(LPCTSTR pszDataPath)
{
	m_strDataPath = pszDataPath;

	if(g_SettingsG.nRefCount == 0)
	{//the first time
		g_SettingsG.Load(m_strDataPath + _T("\\") + KSettingINI);
	}
	g_SettingsG.nRefCount ++;

}
