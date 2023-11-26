// EXERCISE10.h : main header file for the EXERCISE10 DLL
//

#pragma once

#ifndef __AFXWIN_H__

#error "include 'pch.h' before including this file for PCH"

#endif

#include "resource.h"		// main symbols

#include <Windows.h>

#include<arxHeaders.h>

#include <dbents.h>

//

class CEXERCISE10App : public CWinApp

{

public:

	CEXERCISE10App();

	// Overrides

public:

	virtual BOOL InitInstance();

	// Member function to add a line

	static void AddLine();

	DECLARE_MESSAGE_MAP()

};
// Entry point function
static int AcRxEntryPoint(AcRx::AppMsgCode Msg, void* pkt);