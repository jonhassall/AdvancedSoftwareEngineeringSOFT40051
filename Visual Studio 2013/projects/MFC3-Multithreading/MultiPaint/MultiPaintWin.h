// MultiPaintWin.h
// Draw lines on screen

#if !defined(MultiPaintWin_h_INCLUDED)
#define MultiPaintWin_h_INCLUDED

#define ID_FILE_EXIT 5001

#include "afxmt.h" // for CSemaphore

class CMultiPaintWin : public CFrameWnd {
public:
	CMultiPaintWin();      // window constructor

	void addPoint(int theX, int theY, COLORREF theRGB);

	// refresh window when requested to by the system
	afx_msg void OnLineDraw(); // menu item
	afx_msg void OnExit(); // menu item
	afx_msg void OnPaint();  // responds to ON_WM_PAINT 
	afx_msg void OnTimer(UINT nIDEvent);  // responds to ON_WM_TIMER
	afx_msg void OnDestroy();  // responds to ON_WM_DESTROY

private:
	int m_redComponent;
	int m_greenComponent;
	int m_blueComponent;

	CMenu m_menu;  // menu parent
	CMenu m_popupmenu;  // menu item

	CDC m_memDC; // memory device context
	CBitmap m_bitmap; // memory bitmap to store image

	CSemaphore m_semaphore;  // semaphore for addPoint

	DECLARE_MESSAGE_MAP()
};

#endif	//#if !defined(MultiPaintWin_h_INCLUDED)