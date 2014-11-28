// MultiPaintThread.h
// Draw lines on screen

#if !defined(MultiPaintThread_h_INCLUDED)
#define MultiPaintThread_h_INCLUDED

#include "Points.h"
#include "MultiPaintWin.h"      // application class

class CMultiPaintThread : public CWinThread {
public:
	CMultiPaintThread(CMultiPaintWin* pwndParent, Points thePoints);      // thread constructor

	virtual BOOL InitInstance();
	virtual int ExitInstance();

protected:
	CMultiPaintWin* m_pwndParent;
	Points itsPoints;

private:

	DECLARE_MESSAGE_MAP()
};

#endif	//#if !defined(MultiPaintThread_h_INCLUDED)