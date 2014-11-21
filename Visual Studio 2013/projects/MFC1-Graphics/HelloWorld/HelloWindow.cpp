//HelloWindow.cpp

#include <afxwin.h> // application frameworks header
#include "HelloWindow.h" // class definition for application

// constructor initializes the window
CHelloWindow::CHelloWindow()
{
	// Create Window with Title Bar
	Create( NULL, // default CFrameWnd class
		CString("Hello"), // window title - convert char array to CString
		WS_OVERLAPPEDWINDOW, // full-featured window
		CRect( 200, 100, 350, 200 ) ); // screen coordinates
	m_HelloStatic.Create( // create Windows CStatic control
		CString("Hello World"), // text - convert char array to CString
		WS_CHILD | WS_VISIBLE | WS_BORDER // window styles
		| SS_CENTER, // static object styles
		CRect( 20, 30, 120, 50 ), // window coordinates
		this ); // context that owns child window
}
// destructor releases resources
CHelloWindow::~CHelloWindow()
{
}
