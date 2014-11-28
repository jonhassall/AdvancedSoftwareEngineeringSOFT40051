// DrawLinesWin.cpp
// Draw lines on screen

#include <afxwin.h>     // MFC application framework 
#include "DrawLinesWin.h"      // application class
#include "Points.h"      // application class

CDrawLinesWin::CDrawLinesWin()  // main window
{
	// to add text to screen
	m_CurrentLine = 0;  // initialise current line receiving key stroke
	m_LineLengths [m_CurrentLine] = 0;  //  initialise current line of text

	Create( NULL, CString("Draw Lines") ); // Frame window with title

	// add menu and submenu dynamically
	m_menu.CreateMenu();
	m_popupmenu.CreatePopupMenu();
	// Add items to the sub menu and menu
	m_popupmenu.AppendMenuW(MF_STRING, ID_FILE_LINEDRAW, CString("Draw"));
	m_popupmenu.AppendMenuW(MF_STRING, ID_FILE_ADD, CString("Add"));
	m_popupmenu.AppendMenuW(MF_STRING, ID_FILE_EXIT, CString("Exit"));
	m_menu.AppendMenuW(MF_STRING | MF_POPUP, (UINT)m_popupmenu.m_hMenu, CString("File"));

	SetMenu(&m_menu); // ??

	// create a pen for solid, 2 pixel wide, red lines
	m_Pen.CreatePen( PS_SOLID, 2, RGB( 255, 0, 0 ) ); // red
	m_Brush.CreateSolidBrush( RGB( 0, 255, 0 ) ); // green

	m_redComponent = 0;
	m_greenComponent = 0;
	m_blueComponent = 0;

	// data to draw lines from
	//itsPoints = thePoints;
}  
// afx_msg precedes each message handler function
// refresh window when requested to by the system
afx_msg void CDrawLinesWin::OnPaint()
{
	CPaintDC dc( this );   // get device context for paint

	// get current window size - not required
	//CRect rect;
	//GetClientRect( rect ); // get current client area size

	// get initial and next points to draw line between
	int x = itsPoints.getNextX(); // initial x
	int y = itsPoints.getNextY(); // initial y
	itsPoints.incrementIndex();
	int nextX = itsPoints.getNextX(); // next x
	int nextY = itsPoints.getNextY(); // next y

	// select solid coloured brush, saving default brush
	CBrush *pBrushSv = dc.SelectObject( &m_Brush );

	// select coloured pen, saving default pen
	CPen *pPenSv = dc.SelectObject( &m_Pen );

	// write some text to the screen
	dc.SetTextColor( RGB( m_redComponent, m_greenComponent, m_blueComponent ) );
	dc.SetBkColor( RGB(255,255,255) );
	dc.TextOutW(x+50,y,CString("A line drawn"),strlen("A line drawn"));
	// write the coordinates after formatting to a CString
	CString aLocation;
	aLocation.Format(_T("%d,%d"), x, y);
	dc.TextOutW(x + 50, y + 50, aLocation, aLocation.GetLength());

	// draw a line between the initial and next points
	dc.MoveTo( x, y );         // set starting point
	dc.LineTo( nextX, nextY );     // draw line

	// output to screen the characters stored from key strokes (starting at top left corner)
	int aCurrentCharPosition = m_LineLengths[m_CurrentLine]++;
	m_LineArray [m_CurrentLine] [aCurrentCharPosition] = '_';  // add cursor at end of characters to display
	for (int i=0;i<=m_CurrentLine;i++)  // paint lines of text
	{
		dc.TextOutW(1,lineHeight*i,CString(m_LineArray [i]),m_LineLengths [i]); //  x-coordinate,  y-coordinate, string to be drawn, length of string
	}
	m_LineLengths [m_CurrentLine]--; // remove cursor from end of characters

	// restore default pen and brush
	dc.SelectObject( pBrushSv );
	dc.SelectObject( pPenSv );
}

// afx_msg precedes each message handler function
afx_msg void CDrawLinesWin::OnExit() 
{
	SendMessage( WM_CLOSE ); 
}
// afx_msg precedes each message handler function
afx_msg void CDrawLinesWin::OnLineDraw() 
{
	// REDRAW WINDOW
	RedrawWindow(NULL,  NULL,
		RDW_INVALIDATE | RDW_UPDATENOW | RDW_ERASE);
}
// afx_msg precedes each message handler function
afx_msg void CDrawLinesWin::OnAdd()
{
	itsPoints.addCirclePoints();
	//MessageBox(CString("Test OnAdd"),CString("Title"));
}
// afx_msg precedes each message handler function
afx_msg void CDrawLinesWin::OnChar( UINT uChar, UINT uRepCnt, UINT uFlg)
{
	// add key strokes to array of line strings
	switch(uChar)
	{
	case '\r':		// start new line
		m_CurrentLine++;
		if (m_CurrentLine>=noLines) m_CurrentLine = 0; // wrap to first line
		m_LineLengths[m_CurrentLine] = 0;
		break;
	case '\b':  // backspace removes previous char
		if (m_LineLengths[m_CurrentLine] > 0) m_LineLengths[m_CurrentLine]--;  // remove last char
		break;
	default:  // add character to end of current line of text
		int aCurrentCharPosition = m_LineLengths[m_CurrentLine]++;
		m_LineArray [m_CurrentLine] [aCurrentCharPosition] = uChar;
		if (m_LineLengths[m_CurrentLine] >= noCharsInLine)
		{
			if (++m_CurrentLine >= noLines) m_CurrentLine = 0;  // wrap around to start of top line
			m_LineLengths[m_CurrentLine] = 0; // around to start of next line
		}
	}
	InvalidateRect(NULL); // update paint area when next WM_PAINT message is sent
}
// afx_msg precedes each message handler function
afx_msg void CDrawLinesWin::OnTimer(UINT nIDEvent)
{
	// do something
	CFrameWnd::OnTimer(nIDEvent);
	m_redComponent = (m_redComponent+20)%256;
	m_greenComponent = (m_greenComponent+60)%256;
	m_blueComponent = (m_blueComponent+100)%256;
}
// afx_msg precedes each message handler function
afx_msg void CDrawLinesWin::OnDestroy()
{
	KillTimer(1);
}
BEGIN_MESSAGE_MAP( CDrawLinesWin, CFrameWnd )
	ON_WM_PAINT()     // OnPaint() when screen changes
	ON_COMMAND( ID_FILE_LINEDRAW, OnLineDraw )	// OnLineDraw()
	ON_COMMAND( ID_FILE_EXIT, OnExit )	// OnExit()
	ON_COMMAND( ID_FILE_ADD, OnAdd )	// OnAdd()
	ON_WM_CHAR()	// OnChar() when key pressed
	ON_WM_TIMER()	// OnTimer() when key pressed
	ON_WM_DESTROY()	// OnDestroy() when key pressed
END_MESSAGE_MAP()


