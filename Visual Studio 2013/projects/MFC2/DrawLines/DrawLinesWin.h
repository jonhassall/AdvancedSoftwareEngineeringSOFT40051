// DrawLinesWin.h
// Draw lines on screen

#if !defined(DrawLinesWin_h_INCLUDED)
#define DrawLinesWin_h_INCLUDED

#define ID_FILE_EXIT 5001
#define ID_FILE_LINEDRAW 5002
#define ID_FILE_ADD 5010

#include "Points.h"      // application class

const int noLines = 10;
const int noCharsInLine = 50;
const int lineHeight = 16;

class CDrawLinesWin : public CFrameWnd {
public:
	CDrawLinesWin();      // window constructor

	// refresh window when requested to by the system
	afx_msg void OnLineDraw(); // menu item
	afx_msg void OnExit(); // menu item
	afx_msg void OnAdd(); // menu item
	afx_msg void OnPaint();  // responds to ON_WM_PAINT 
	afx_msg void OnChar(UINT uChar, UINT uRepCnt, UINT uFlg);  // responds to ON_WM_PAINT
	afx_msg void OnTimer(UINT nIDEvent);  // responds to ON_WM_TIMER
	afx_msg void OnDestroy();  // responds to ON_WM_DESTROY

private:
	CBrush m_Brush;     // green brush
	CPen m_Pen;           // red pen

	int m_redComponent;
	int m_greenComponent;
	int m_blueComponent;

	CMenu m_menu;  // menu parent
	CMenu m_popupmenu;  // menu item

	char m_LineArray [noLines] [noCharsInLine]; // text to paint
	int m_LineLengths [noLines]; // nubmer of chars in each line
	int m_CurrentLine; // line receiving keystrokes

	Points itsPoints;  // the Points to draw

	DECLARE_MESSAGE_MAP()
};

#endif	//#if !defined(DrawLinesWin_h_INCLUDED)