// MultiTextWin.h
// Draw lines on screen

#if !defined(MultiTextWin_h_INCLUDED)
#define MultiTextWin_h_INCLUDED

#define ID_FILE_EXIT 5001

#include "afxmt.h" // for CSemaphore
#include "Points.h"      // application class

class CMultiTextWin : public CFrameWnd {
public:
	CMultiTextWin();      // window constructor

	void addText(CString theMessage);

	// refresh window when requested to by the system
	afx_msg void OnExit(); // menu item
	afx_msg void OnPaint();  // responds to ON_WM_PAINT 
	afx_msg void OnTimer(UINT nIDEvent);  // responds to ON_WM_TIMER
	afx_msg void OnDestroy();  // responds to ON_WM_DESTROY

private:

	CMenu m_menu;  // menu parent
	CMenu m_popupmenu;  // menu item

	CDC m_memDC; // memory device context
	CBitmap m_bitmap; // memory bitmap to store image

	int itsLastX;
	int itsLastY;

	CSemaphore m_semaphore;  // semaphore for addText

	DECLARE_MESSAGE_MAP()
};

#endif	//#if !defined(MultiTextWin_h_INCLUDED)