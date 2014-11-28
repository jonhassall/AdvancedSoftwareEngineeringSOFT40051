// DrawLinesApp.cpp
// Draw lines on screen

#include <afxwin.h>     // MFC application framework 
#include "DrawLinesWin.h"      // application class

class CDrawLinesApp : public CWinApp {
public:

	BOOL InitInstance()
	{
		m_pMainWnd = new CDrawLinesWin();            // create window
		m_pMainWnd->ShowWindow( m_nCmdShow );  // make visible
		m_pMainWnd->UpdateWindow();            // force refresh

		// start timer using WM_TIMER, id 1 and event every 5000 milliseconds
		if (!m_pMainWnd->SetTimer(1, 5000, NULL)) return false;
		return TRUE;         // run until user closes program

	}

} drawLinesApp;


