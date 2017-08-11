#include "stdafx.h"
#include "ImeWnd.h"

namespace SOUI
{


CImeWnd::CImeWnd(LPCTSTR pszLayout):SHostWnd(pszLayout)
{

}

BOOL CImeWnd::OnSetCursor(HWND wnd, UINT nHitTest, UINT message)
{
	CSimpleWnd::SetCapture();
	SetMsgHandled(FALSE);
	return TRUE;
}

void CImeWnd::OnMouseMove(UINT nFlags, CPoint point)
{
	SetMsgHandled(FALSE);
	CRect rcWnd = GetWindowRect();
	if(!rcWnd.PtInRect(point))
	{
		::ReleaseCapture();
	}
}

HWND CImeWnd::Create()
{
	return CSimpleWnd::Create(_T("SinstarWindow"),WS_DISABLED|WS_POPUP,WS_EX_TOOLWINDOW,0,0,0,0,NULL,NULL);
}

}
