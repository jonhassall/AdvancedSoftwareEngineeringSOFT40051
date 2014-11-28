// MultiTextApp.cpp
// Draw lines on screen

#include <afxwin.h>     // MFC application framework 
#include "MultiTextWin.h"      // application class
#include "MultiTextThread.h"      // application class

class CMultiTextApp : public CWinApp {
public:

	BOOL InitInstance()
	{
		CMultiTextWin* pMainWnd = new CMultiTextWin();            // create window
		m_pMainWnd = pMainWnd;
		m_pMainWnd->ShowWindow( m_nCmdShow );  // make visible
		m_pMainWnd->UpdateWindow();            // force refresh

		// start timer using WM_TIMER, id 1 and event every 200 milliseconds
		if (!m_pMainWnd->SetTimer(1, 200, NULL)) return false;

		Sleep(500);  // time to initiailise bitmap to white
		CMultiTextThread* pCMultiTextThreadA = new CMultiTextThread(pMainWnd, CString("Summer is gone"));
		pCMultiTextThreadA->CreateThread();
		//Sleep(200);  // test delay
		CMultiTextThread* pCMultiTextThreadB = new CMultiTextThread(pMainWnd, CString("Winter is here"));
		pCMultiTextThreadB->CreateThread();

		return TRUE;         // run until user closes program

	}

} MultiTextApp;


