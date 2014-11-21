//HelloWindow.cpp

#include <afxwin.h> // application frameworks header
#include "HelloWindow.h" // class definition for application

// derive application class from CWinApp
class CHelloApp : public CWinApp {
public:
	BOOL InitInstance() // override default opreation
	{
		m_pMainWnd = new CHelloWindow(); // create window
		m_pMainWnd->ShowWindow( m_nCmdShow ); // make visible
		m_pMainWnd->UpdateWindow(); // force refresh
		return TRUE; // report success
	}
} HelloApp;  //instance of CHelloApp to be created