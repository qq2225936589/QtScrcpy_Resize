
// QtScrcpy_ResizeDlg.h : header file
//

#pragma once


// CQtScrcpy_ResizeDlg dialog
class CQtScrcpy_ResizeDlg : public CDialogEx
{
// Construction
public:
	CQtScrcpy_ResizeDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_QTSCRCPY_RESIZE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButtonResize();
	afx_msg void OnBnClickedButtonResize720();
	afx_msg void OnBnClickedButtonResize540();
	afx_msg void OnBnClickedButtonResize1080();
	afx_msg void OnBnClickedButtonResize360();
	void ShowWindowHandle(HWND parent);
	HWND findHWND;
};
