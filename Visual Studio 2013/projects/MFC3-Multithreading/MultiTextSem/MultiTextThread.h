// MultiTextThread.h
// Draw lines on screen

#if !defined(MultiTextThread_h_INCLUDED)
#define MultiTextThread_h_INCLUDED

#include "Points.h"
#include "MultiTextWin.h"      // application class

class CMultiTextThread : public CWinThread {
public:
	CMultiTextThread(CMultiTextWin* pwndParent, CString theMessage);      // thread constructor

	virtual BOOL InitInstance();
	virtual int ExitInstance();

private:
	CMultiTextWin* m_pwndParent;
	CString itsMessage;
};

#endif	//#if !defined(MultiTextThread_h_INCLUDED)