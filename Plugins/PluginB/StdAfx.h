// stdafx.h : include file for standard system include files or project-
//  specific include files that are used frequently, but changed infrequently

#ifndef AFX_STDAFX_H__4CE0CC19_FFCE_4DE5_BF0B_0DD706E3447C__INCLUDED_
#define AFX_STDAFX_H__4CE0CC19_FFCE_4DE5_BF0B_0DD706E3447C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif  // _MSC_VER > 1000

#define VC_EXTRALEAN  // Exclude rarely-used stuff from Windows headers

#include <afxwin.h>  // MFC core and standard components
#include <afxext.h>  // MFC extensions

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>  // MFC OLE classes
#include <afxodlgs.h>  // MFC OLE dialog classes
#include <afxdisp.h>  // MFC Automation classes
#endif  // _AFX_NO_OLE_SUPPORT

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>  // MFC ODBC database classes
#endif  // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>  // MFC DAO database classes
#endif  // _AFX_NO_DAO_SUPPORT

#include <afxdtctl.h>  // MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>  // MFC support for Windows Common Controls
#endif  // _AFX_NO_AFXCMN_SUPPORT

#include <vector>
#include <string>

//{{AFX_INSERT_LOCATION}}

#endif  // AFX_STDAFX_H__4CE0CC19_FFCE_4DE5_BF0B_0DD706E3447C__INCLUDED_
