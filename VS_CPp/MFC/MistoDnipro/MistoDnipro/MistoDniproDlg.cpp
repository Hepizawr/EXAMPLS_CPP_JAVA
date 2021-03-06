
// MistoDniproDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MistoDnipro.h"
#include "MistoDniproDlg.h"
#include "afxdialogex.h"
#include "Okno1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMistoDniproDlg dialog



CMistoDniproDlg::CMistoDniproDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_MISTODNIPRO_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMistoDniproDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	SetWindowTextW(L"Дніпро – місто новітніх технологій");
}

BEGIN_MESSAGE_MAP(CMistoDniproDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMistoDniproDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMistoDniproDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON12, &CMistoDniproDlg::OnBnExit)
END_MESSAGE_MAP()


// CMistoDniproDlg message handlers

BOOL CMistoDniproDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

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

void CMistoDniproDlg::OnPaint()
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
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMistoDniproDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMistoDniproDlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
}


void CMistoDniproDlg::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	COkno1 dlg;
	OnOK();
	dlg.DoModal();
}


void CMistoDniproDlg::OnBnExit()
{
	// TODO: Add your control notification handler code here
	if (MessageBox(L"Ви бажаєте вийти?", L"Вікно завершення роботи", MB_YESNO | MB_ICONQUESTION) == IDYES) OnOK();
}
