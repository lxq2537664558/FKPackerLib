
// FKPackToolDlg.h : 头文件
//

#pragma once

#include "FolderCmpStruct.h"

// CFKPackToolDlg 对话框
class CFKPackToolDlg : public CDialogEx
{
// 构造
public:
	CFKPackToolDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_FKPACKTOOL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
public:
	CString m_strSource;
	CString m_strDestination;
	CString m_strPack;
	CString m_strNewSourceDir;
	vector<CString>	m_vecStrSource;
	vector<CString> m_vecStrDestination;
	CFKPacket* m_pFKPacket;
	CListCtrl* m_pFileList;
	vector<SPackChangeInfo>	m_vecPackChangeInfo;
private:
	int	__CheckSourceFileName(CString strFileName);
	int __CheckDestinationFileName(CString strFileName);
// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
};
