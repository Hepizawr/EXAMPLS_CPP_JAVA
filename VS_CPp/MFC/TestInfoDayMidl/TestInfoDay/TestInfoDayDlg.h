
// TestInfoDayDlg.h : header file
//

#pragma once


// CTestInfoDayDlg dialog
class CTestInfoDayDlg : public CDialog
{
// Construction
public:
	CTestInfoDayDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTINFODAY_DIALOG };
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

protected:
	HICON hsw;
	HICON hsb;

private:

	COLORREF cf, ckw, c[25];
	HFONT hold, hNew, hbk;
	HPEN hPenOxy, hOldPen, pen;
	HBRUSH m, oldm, brush;
	CPen d, oldd;
	CBitmap pic;
	CRect rc, w, kw[11][11];
	CPoint ps;
	CString ms, t, z, PORADA[120];

	int Matrix[50][50], TAB[11][11];
	int x1, y1, x2, y2, x3, y3, x4, y4;
	int RH, RW, k, i, j, p, x, y, cx, cy, dx, dy;
	int pfix, jfix;

	bool fg;

	struct Energia
	{
		CString Numb;
		CString Ops;
		CString Str1;
		CString Str2;
		CString Str3;
		CString Str4;
	};

	Energia EN[9];


	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
