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
		CRect( 200, 100, 400, 600 ) ); // screen coordinates left top right bottom

	m_HelloStatic.Create( // create Windows CStatic control
		CString("Hello World"), // text - convert char array to CString
		WS_CHILD | WS_VISIBLE | WS_BORDER // window styles
		| SS_CENTER, // static object styles
		CRect( 20, 30, 120, 60 ), // window coordinates
		this ); // context that owns child window

	m_HelloEdit.Create(
		ES_CENTER | ES_MULTILINE | WS_VISIBLE | WS_BORDER, 
		CRect( 20, 80, 120, 200 ), 
		this, 
		ID_HELLO_EDIT);
	
	m_AddTextButton.Create(
		CString("Add Text"), 
		BS_DEFPUSHBUTTON |  WS_VISIBLE | WS_BORDER, 
		CRect( 20, 220, 120, 250 ), 
		this,
		ID_HELLO_ADD);

	m_HelloShow.Create(
		ES_CENTER | ES_MULTILINE | WS_VISIBLE | WS_BORDER, 
		CRect( 20, 280, 120, 400 ), 
		this, 
		ID_HELLO_SHOW);

}
// destructor releases resources
CHelloWindow::~CHelloWindow()
{
}

// afx_msg precedes each message handler function
afx_msg void CHelloWindow::OnAdd()
{
	const int aTextSize = 20;
	char someText [aTextSize+1];
	CString someCText(someText);

	m_HelloEdit.GetWindowTextW(someCText);

	//m_HelloShow.SetWindowTextW(CString("Hello ")+someCText);

		//m_HelloShow.SetWindowTextW(CString(char(3))+someCText);
		m_HelloShow.SetWindowTextW(CString(someCText);

	m_HelloEdit.SetWindowTextW(CString(""));
	m_HelloEdit.SetFocus();

}
// declare message map
BEGIN_MESSAGE_MAP( CHelloWindow, CFrameWnd )
	ON_COMMAND( ID_HELLO_ADD, OnAdd )	//OnAdd()
END_MESSAGE_MAP()