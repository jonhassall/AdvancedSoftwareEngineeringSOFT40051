// MultiPaintApp.cpp
// Draw lines on screen

#include <afxwin.h>     // MFC application framework 
#include "MultiPaintWin.h"      // application class
#include "Points.h"      // application class
#include "MultiPaintThread.h"      // application class

class CMultiPaintApp : public CWinApp {
public:

	BOOL InitInstance()
	{
		CMultiPaintWin* pMainWnd = new CMultiPaintWin();            // create window
		m_pMainWnd = pMainWnd;
		m_pMainWnd->ShowWindow( m_nCmdShow );  // make visible
		m_pMainWnd->UpdateWindow();            // force refresh

		// start timer using WM_TIMER, id 1 and event every 200 milliseconds
		if (!m_pMainWnd->SetTimer(1, 200, NULL)) return false;		
		
		Sleep(500);  // time to initiailise bitmap to white
		Points aThreadPointsA(200, 400, 200, 200, RGB(255, 0, 0));
		Points aThreadPointsB(300, 300, 100, 300, RGB(0, 0, 255));

		CMultiPaintThread* pCMultiPaintThreadA = new CMultiPaintThread(pMainWnd, aThreadPointsA);
		pCMultiPaintThreadA->CreateThread();
		//Sleep(200);  // test delay
		CMultiPaintThread* pCMultiPaintThreadB = new CMultiPaintThread(pMainWnd, aThreadPointsB);
		pCMultiPaintThreadB->CreateThread();

		return TRUE;         // run until user closes program

	}

} multiPaintApp;


