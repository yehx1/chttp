
// HttpMessage.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CHttpMessageApp: 
// �йش����ʵ�֣������ HttpMessage.cpp
//

class CHttpMessageApp : public CWinApp
{
public:
	CHttpMessageApp();

// ��д
public:
	virtual BOOL InitInstance();



// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CHttpMessageApp theApp;