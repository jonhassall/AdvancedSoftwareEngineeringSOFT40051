// MultiPaintThread.cpp
// Writes lines on screen

#include <afxwin.h>     // MFC application framework 
#include "MultiPaintThread.h"      // application class
#include "Points.h"
#include "MultiPaintWin.h"      // application class

CMultiPaintThread::CMultiPaintThread(CMultiPaintWin* pwndParent, Points thePoints) // main window
{
	m_pwndParent = pwndParent;
	itsPoints = thePoints;
}
int CMultiPaintThread::InitInstance()
{

	while(itsPoints.getCurrentIndex()<=itsPoints.getMaxIndex())
	{
		m_pwndParent->addPoint(itsPoints.getNextX(),itsPoints.getNextY(), itsPoints.getRGB());
		itsPoints.incrementIndex();
		Sleep(100);
	}

	return true;
}
int CMultiPaintThread::ExitInstance()
{
	return CWinThread::ExitInstance();
}
BEGIN_MESSAGE_MAP( CMultiPaintThread, CWinThread )
	//ON_COMMAND( ID_FILE_LINEDRAW, OnLineDraw )	// OnLineDraw()
END_MESSAGE_MAP()


