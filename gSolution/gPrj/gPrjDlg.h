
// gPrjDlg.h : header file
//

#pragma once
#include "DlgImage.h"

// CgPrjDlg dialog
class CgPrjDlg : public CDialogEx
{
// Construction
public:
	CgPrjDlg(CWnd* pParent = NULL);	// standard constructor


// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GPRJ_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CDlgImage *m_pDlgImage;
	void callFunc(int n);
	afx_msg void OnDestroy();
};
