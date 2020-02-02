
// QtScrcpy_ResizeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "QtScrcpy_Resize.h"
#include "QtScrcpy_ResizeDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQtScrcpy_ResizeDlg dialog



CQtScrcpy_ResizeDlg::CQtScrcpy_ResizeDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_QTSCRCPY_RESIZE_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CQtScrcpy_ResizeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CQtScrcpy_ResizeDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDCANCEL, &CQtScrcpy_ResizeDlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDOK, &CQtScrcpy_ResizeDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON_RESIZE720, &CQtScrcpy_ResizeDlg::OnBnClickedButtonResize720)
	ON_BN_CLICKED(IDC_BUTTON_RESIZE540, &CQtScrcpy_ResizeDlg::OnBnClickedButtonResize540)
	ON_BN_CLICKED(IDC_BUTTON_RESIZE1080, &CQtScrcpy_ResizeDlg::OnBnClickedButtonResize1080)
	ON_BN_CLICKED(IDC_BUTTON_RESIZE360, &CQtScrcpy_ResizeDlg::OnBnClickedButtonResize360)
END_MESSAGE_MAP()


// CQtScrcpy_ResizeDlg message handlers

BOOL CQtScrcpy_ResizeDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CQtScrcpy_ResizeDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CQtScrcpy_ResizeDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CQtScrcpy_ResizeDlg::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnCancel();
}


void CQtScrcpy_ResizeDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}


void CQtScrcpy_ResizeDlg::OnBnClickedButtonResize()
{
	// TODO: Add your control notification handler code here


	//
}


void CQtScrcpy_ResizeDlg::OnBnClickedButtonResize720()
{
	//HWND hWnd = ::FindWindow(_T("Qt5QWindowIcon"), _T("INE-AL00"));
	ShowWindowHandle(NULL);
	HWND hWnd = findHWND;
	if (!hWnd) return;
	RECT rc;
	::GetWindowRect(hWnd, &rc);
	int w = rc.right - rc.left;
	int h = rc.bottom - rc.top;

	int newh = 720;
	int neww = newh * w / h;
	::MoveWindow(hWnd, 0, 0, neww, newh, 1);

	return;
	CString str;
	str.Format(_T("%X %d %d"), hWnd, neww, newh);
	AfxMessageBox(str);
}


void CQtScrcpy_ResizeDlg::OnBnClickedButtonResize540()
{
	//HWND hWnd = ::FindWindow(_T("Qt5QWindowIcon"), _T("INE-AL00"));
	ShowWindowHandle(NULL);
	HWND hWnd = findHWND;
	if (!hWnd) return;
	RECT rc;
	::GetWindowRect(hWnd, &rc);
	int w = rc.right - rc.left;
	int h = rc.bottom - rc.top;

	int newh = 540;
	int neww = newh * w / h;
	::MoveWindow(hWnd, 0, 0, neww, newh, 1);

	return;
	CString str;
	str.Format(_T("%X %d %d"), hWnd, neww, newh);
	AfxMessageBox(str);
}


void CQtScrcpy_ResizeDlg::OnBnClickedButtonResize1080()
{
	//HWND hWnd = ::FindWindow(_T("Qt5QWindowIcon"), _T("INE-AL00"));
	ShowWindowHandle(NULL);
	HWND hWnd = findHWND;
	if (!hWnd) return;
	RECT rc;
	::GetWindowRect(hWnd, &rc);
	int w = rc.right - rc.left;
	int h = rc.bottom - rc.top;

	int newh = 1080;
	int neww = newh * w / h;
	::MoveWindow(hWnd, 0, 0, neww, newh, 1);

	return;
	CString str;
	str.Format(_T("%X %d %d"), hWnd, neww, newh);
	AfxMessageBox(str);
}


void CQtScrcpy_ResizeDlg::OnBnClickedButtonResize360()
{
	//HWND hWnd = ::FindWindow(_T("Qt5QWindowIcon"), _T("INE-AL00"));
	ShowWindowHandle(NULL);
	HWND hWnd = findHWND;
	if (!hWnd) return;
	RECT rc;
	::GetWindowRect(hWnd, &rc);
	int w = rc.right - rc.left;
	int h = rc.bottom - rc.top;

	int newh = 360;
	int neww = newh * w / h;
	::MoveWindow(hWnd, 0, 0, neww, newh, 1);

	return;
	CString str;
	str.Format(_T("%X %d %d"), hWnd, neww, newh);
	AfxMessageBox(str);
}

void CQtScrcpy_ResizeDlg::ShowWindowHandle(HWND parent)
{
	TCHAR WindowText[512];
	TCHAR ClassName[512];
	HWND _FirstChild = NULL;
	do
	{
		_FirstChild = ::FindWindowEx(parent, _FirstChild, NULL, NULL);
		if (_FirstChild != NULL)
		{
			::GetWindowText(_FirstChild, WindowText, 512);
			::GetClassName(_FirstChild, ClassName, 512);
			if (wcscmp(ClassName, _T("Qt5QWindowIcon")) == 0 && wcscmp(WindowText, _T("QtScrcpy")) != 0)
			{
				findHWND = _FirstChild;
				//printf("%x [%s] [%s]\n", _FirstChild, ClassName, WindowText);
			}
			ShowWindowHandle(_FirstChild);
		}
	} while (_FirstChild != NULL);
}