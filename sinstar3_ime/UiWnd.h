#pragma once

#define  UICLASSNAME _T("sinstar3_uiwnd")
#include "../sinstar3_proxy/simplewnd.h"
#include "../sinstar3_proxy/SinstarProxy.h"

class CUiWnd :
	public CSimpleWnd,
	public ITextService
{
public:
	CUiWnd(void);
	~CUiWnd(void);

	static BOOL RegisterClass(HINSTANCE hInstance);
	static void UnregisterClass(HINSTANCE hInstance);

	//UIWnd
	LRESULT WindowProc(UINT uMsg,WPARAM wParam,LPARAM lParam);
	LRESULT OnSetContext(BOOL bActivate,LPARAM lParam);
	LRESULT OnImeSelect(BOOL bSelect,LPARAM lParam);
	LRESULT OnImeNotify(WPARAM wParam,LPARAM lParam);
	LRESULT OnImeControl(WPARAM wParam,LPARAM lParam);
	LRESULT OnPaint();
	LRESULT OnCreate();
	LRESULT OnDestroy();
	LRESULT OnTimer(WPARAM nEventID);

	//ITextService
	BOOL InputStringW(LPCWSTR pszBuf, int nLen);
	BOOL IsCompositing() const;
	void StartComposition(UINT64 imeContext);
	void ReplaceSelCompositionW(UINT64 imeContext,int nLeft,int nRight,const WCHAR *wszComp,int nLen);
	void UpdateResultAndCompositionStringW(UINT64 imeContext,const WCHAR *wszResultStr,int nResStrLen,const WCHAR *wszCompStr,int nCompStrLen);
	void EndComposition(UINT64 imeContext);
	UINT64 GetImeContext();
	BOOL   ReleaseImeContext(UINT64 imeContext);
	void  SetConversionMode(EInputMethod mode);
	EInputMethod GetConversionMode();
	BOOL SetOpenStatus(UINT64 imeContext,BOOL bOpen);
	BOOL GetOpenStatus(UINT64 imeContext) const;
	DWORD GetActiveWnd() const;

	CSinstarProxy * m_pSinstar3;
	CImeContext *m_pCurContext;
	BOOL		m_bCompositing;

	int        m_nFontHei;
	HFONT		m_fntComp;
	BOOL		m_bActivate;
private:
	BOOL _InitSinstar3();
	BOOL _UninitSinstar3();
	BOOL IsIMEMessage(UINT message);
	POINT GetAbsPos(HWND hWnd,DWORD dwStyle,POINT ptCur,RECT rc);
	BOOL AttachToIMC(BOOL bAttach);
public:
	BOOL IsDefaultIme(void);
};

