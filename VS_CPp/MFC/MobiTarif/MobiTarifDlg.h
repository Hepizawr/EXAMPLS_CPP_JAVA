
// MobiTarifDlg.h : header file
//

#pragma once


// CMobiTarifDlg dialog
class CMobiTarifDlg : public CDialog
{
// Construction
public:
	CMobiTarifDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOBITARIF_DIALOG };
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
	int N;
	int D;
	afx_msg void OnBnClickedButton1();
};
