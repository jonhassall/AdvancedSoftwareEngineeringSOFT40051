// HelloWindow.h

#define ID_HELLO_EDIT 5000
#define ID_HELLO_ADD 5010
#define ID_HELLO_SHOW 5020

class CHelloWindow : public CFrameWnd {
public:
	CHelloWindow(); // constructor initializes window
	~CHelloWindow(); // destructor releases resources

	afx_msg void OnAdd();  // clicked the Add Text Button

private:
	CStatic m_HelloStatic; // contains Hello World string
	CEdit m_HelloEdit; // contains text to add to message
	CButton m_AddTextButton; // click to submit text
	CEdit m_HelloShow; // contains message

	DECLARE_MESSAGE_MAP()
};