// HelloWindow.h

class CHelloWindow : public CFrameWnd {
public:
	CHelloWindow(); // constructor initializes window
	~CHelloWindow(); // destructor releases resources
private:
	CStatic m_HelloStatic; // contains Hello World string
};