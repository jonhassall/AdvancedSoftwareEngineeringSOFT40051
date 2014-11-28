// MultiTextThread.cpp
// Writes lines on screen

#include <afxwin.h>     // MFC application framework 
#include "MultiTextThread.h"      // application class
#include "MultiTextWin.h"      // application class

CMultiTextThread::CMultiTextThread(CMultiTextWin* pwndParent, CString theMessage) // main window
{
	m_pwndParent = pwndParent;
	itsMessage = theMessage;
}
int CMultiTextThread::InitInstance()
{

	for( int i=0; i<=4; i++)
	{
		m_pwndParent->addText(itsMessage);
		Sleep(50);  // delay next message output
	}

	return true;
}
int CMultiTextThread::ExitInstance()
{
	return CWinThread::ExitInstance();
}



