// MultiTextWin.cpp
// Writes lines on screen

#include <afxwin.h>     // MFC application framework 
#include "MultiTextWin.h"      // application class

CMultiTextWin::CMultiTextWin()  // main window
{
	Create( NULL, CString("Write Lines") ); // Frame window with title

	// add menu and submenu dynamically
	m_menu.CreateMenu();
	m_popupmenu.CreatePopupMenu();
	// Add items to the sub menu and menu
	m_popupmenu.AppendMenuW(MF_STRING, ID_FILE_EXIT, CString("Exit"));
	m_menu.AppendMenuW(MF_STRING | MF_POPUP, (UINT)m_popupmenu.m_hMenu, CString("File"));

	SetMenu(&m_menu);

	// get physical screen limits
	int xMax = GetSystemMetrics(SM_CXSCREEN);
	int yMax = GetSystemMetrics(SM_CYSCREEN);

	// get client area device context
	CClientDC dc(this);

	// create a memory device context and bitmap to store points
	m_memDC.CreateCompatibleDC(&dc);
	m_bitmap.CreateCompatibleBitmap(&dc,xMax,yMax);
	m_memDC.SelectObject(&m_bitmap);

	// set bitmap white
	for(int i=0; i<500; i++)
	{
		for(int j=0; j<500; j++)
		{
			m_memDC.SetPixel(i, j, RGB( 255, 255, 255 ) );
		}
	}
	itsLastX=0;
	itsLastY=0;
}
void CMultiTextWin::addText(CString theMessage)
{
	m_memDC.TextOutW(itsLastX, itsLastY, theMessage);
	Sleep(60);
	itsLastX=itsLastX+5;
	itsLastY=itsLastY+20;
}
// afx_msg precedes each message handler function
// refresh window when requested to by the system
afx_msg void CMultiTextWin::OnPaint()
{
	CPaintDC dc( this );   // get device context for paint

	// get current window size
	CRect aRect;
	GetClientRect(aRect);
	int x = aRect.right / 2; // middle x
	int y = aRect.left / 4; // quarter y

	x -= 250; // center 256 pixel square in window
	y += 20; // color square position

	// copy memory bitmap to screen bitmap
	dc.BitBlt(x, y, // destination
		500, 500, // width, height
		&m_memDC, 0, 0, // source, x, y,
		SRCCOPY);  // copy
	// draw 3d rectangle aroung bitmap
	dc.Draw3dRect(x-2, y-2,	// left , top
		504, 504, // width, height
		RGB(150,150,150), // gray left , top
		RGB(10,10,10) ); // dark grey shadow
}

// afx_msg precedes each message handler function
afx_msg void CMultiTextWin::OnExit() 
{
	SendMessage( WM_CLOSE ); 
}
// afx_msg precedes each message handler function
afx_msg void CMultiTextWin::OnTimer(UINT nIDEvent)
{
	// do event
	CFrameWnd::OnTimer(nIDEvent);
	InvalidateRect(NULL, FALSE );
}
// afx_msg precedes each message handler function
afx_msg void CMultiTextWin::OnDestroy()
{
	KillTimer(1);
}
BEGIN_MESSAGE_MAP( CMultiTextWin, CFrameWnd )
	ON_WM_PAINT()     // OnPaint() when screen changes
	ON_COMMAND( ID_FILE_EXIT, OnExit )	// OnExit()
	ON_WM_TIMER()	// OnTimer() when key pressed
	ON_WM_DESTROY()	// OnDestroy() when key pressed
END_MESSAGE_MAP()

