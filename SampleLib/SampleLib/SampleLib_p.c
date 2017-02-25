

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for C:\Users\hekim\AppData\Local\Temp\SampleLib.idl-eb784023:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0620 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "SampleLib_h.h"

#define TYPE_FORMAT_STRING_SIZE   191                               
#define PROC_FORMAT_STRING_SIZE   379                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _SampleLib_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } SampleLib_MIDL_TYPE_FORMAT_STRING;

typedef struct _SampleLib_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } SampleLib_MIDL_PROC_FORMAT_STRING;

typedef struct _SampleLib_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } SampleLib_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const SampleLib_MIDL_TYPE_FORMAT_STRING SampleLib__MIDL_TypeFormatString;
extern const SampleLib_MIDL_PROC_FORMAT_STRING SampleLib__MIDL_ProcFormatString;
extern const SampleLib_MIDL_EXPR_FORMAT_STRING SampleLib__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CSampleLib_CDemo_CIMessage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CSampleLib_CDemo_CIMessage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CSampleLib_CDemo_CIDemoCore_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CSampleLib_CDemo_CIDemoCore_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const SampleLib_MIDL_PROC_FORMAT_STRING SampleLib__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_Description */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x6 ),	/* 6 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 24 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Description */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x7 ),	/* 7 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 60 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Invoke */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x3 ),	/* 3 */
/* 80 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 82 */	NdrFcShort( 0x8 ),	/* 8 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sender */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter e */

/* 102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Progress */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x6 ),	/* 6 */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x24 ),	/* 36 */
/* 128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 138 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Progress */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x7 ),	/* 7 */
/* 158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_OnProgressChanged */

/* 186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x34 ),	/* 52 */
/* 200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 210 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 214 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter token */

/* 216 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 220 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_OnProgressChanged */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x9 ),	/* 9 */
/* 236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 238 */	NdrFcShort( 0x18 ),	/* 24 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 252 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCppwinrtDataAsync */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0xa ),	/* 10 */
/* 272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 280 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 288 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */

	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWrlDataAsync */

/* 300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0xb ),	/* 11 */
/* 308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 324 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CrawlWeb */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0xc ),	/* 12 */
/* 344 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uri */

/* 360 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 364 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter value */

/* 366 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 370 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const SampleLib_MIDL_TYPE_FORMAT_STRING SampleLib__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x12, 0x0,	/* FC_UP */
/* 44 */	NdrFcShort( 0xffea ),	/* Offset= -22 (22) */
/* 46 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (42) */
/* 56 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 58 */	NdrFcLong( 0xd93f8ce1 ),	/* -650146591 */
/* 62 */	NdrFcShort( 0xba66 ),	/* -17818 */
/* 64 */	NdrFcShort( 0x4e27 ),	/* 20007 */
/* 66 */	0xa0,		/* 160 */
			0xce,		/* 206 */
/* 68 */	0x39,		/* 57 */
			0x48,		/* 72 */
/* 70 */	0xc2,		/* 194 */
			0x3e,		/* 62 */
/* 72 */	0xf8,		/* 248 */
			0xd2,		/* 210 */
/* 74 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 76 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 80 */	NdrFcLong( 0x7258528c ),	/* 1918390924 */
/* 84 */	NdrFcShort( 0x4b14 ),	/* 19220 */
/* 86 */	NdrFcShort( 0x5543 ),	/* 21827 */
/* 88 */	0x94,		/* 148 */
			0xbb,		/* 187 */
/* 90 */	0x71,		/* 113 */
			0xe3,		/* 227 */
/* 92 */	0x9f,		/* 159 */
			0xc0,		/* 192 */
/* 94 */	0x3e,		/* 62 */
			0x27,		/* 39 */
/* 96 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 106 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (110) */
/* 110 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 112 */	NdrFcLong( 0x968b9665 ),	/* -1769236891 */
/* 116 */	NdrFcShort( 0x6ed ),	/* 1773 */
/* 118 */	NdrFcShort( 0x5774 ),	/* 22388 */
/* 120 */	0x8f,		/* 143 */
			0x53,		/* 83 */
/* 122 */	0x8e,		/* 142 */
			0xde,		/* 222 */
/* 124 */	0xab,		/* 171 */
			0xd5,		/* 213 */
/* 126 */	0xf7,		/* 247 */
			0xb5,		/* 181 */
/* 128 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (132) */
/* 132 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 134 */	NdrFcLong( 0x3e1fe603 ),	/* 1042277891 */
/* 138 */	NdrFcShort( 0xf897 ),	/* -1897 */
/* 140 */	NdrFcShort( 0x5263 ),	/* 21091 */
/* 142 */	0xb3,		/* 179 */
			0x28,		/* 40 */
/* 144 */	0x8,		/* 8 */
			0x6,		/* 6 */
/* 146 */	0x42,		/* 66 */
			0x6b,		/* 107 */
/* 148 */	0x8a,		/* 138 */
			0x79,		/* 121 */
/* 150 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 152 */	NdrFcLong( 0x9e365e57 ),	/* -1640604073 */
/* 156 */	NdrFcShort( 0x48b2 ),	/* 18610 */
/* 158 */	NdrFcShort( 0x4160 ),	/* 16736 */
/* 160 */	0x95,		/* 149 */
			0x6f,		/* 111 */
/* 162 */	0xc7,		/* 199 */
			0x38,		/* 56 */
/* 164 */	0x51,		/* 81 */
			0x20,		/* 32 */
/* 166 */	0xbb,		/* 187 */
			0xfc,		/* 252 */
/* 168 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 170 */	NdrFcShort( 0x2 ),	/* Offset= 2 (172) */
/* 172 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 174 */	NdrFcLong( 0x88d9bb75 ),	/* -1998996619 */
/* 178 */	NdrFcShort( 0xafb4 ),	/* -20556 */
/* 180 */	NdrFcShort( 0x5f32 ),	/* 24370 */
/* 182 */	0x9d,		/* 157 */
			0x7e,		/* 126 */
/* 184 */	0xd3,		/* 211 */
			0xbf,		/* 191 */
/* 186 */	0x37,		/* 55 */
			0x85,		/* 133 */
/* 188 */	0x35,		/* 53 */
			0x4c,		/* 76 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            HSTRING_UserSize
            ,HSTRING_UserMarshal
            ,HSTRING_UserUnmarshal
            ,HSTRING_UserFree
            }

        };



/* Standard interface: __MIDL_itf_SampleLib_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib2Eidl_0000_3107, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib2Eidl_0000_3108, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib2Eidl_0000_3109, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib2Eidl_0000_3110, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib2Eidl_0000_3111, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib2Eidl_0000_3112, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib2Eidl_0000_3113, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib2Eidl_0000_3114, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib2Eidl_0000_3115, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IInspectable, ver. 0.0,
   GUID={0xAF86E2E0,0xB12D,0x4c6a,{0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90}} */


/* Object interface: __x_ABI_CSampleLib_CDemo_CIMessage, ver. 0.0,
   GUID={0x74f49eb3,0x3491,0x40c3,{0xa4,0xb7,0x87,0x11,0x35,0x77,0xc4,0xb1}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CSampleLib_CDemo_CIMessage_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CSampleLib_CDemo_CIMessage_ProxyInfo =
    {
    &Object_StubDesc,
    SampleLib__MIDL_ProcFormatString.Format,
    &__x_ABI_CSampleLib_CDemo_CIMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CSampleLib_CDemo_CIMessage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SampleLib__MIDL_ProcFormatString.Format,
    &__x_ABI_CSampleLib_CDemo_CIMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_CSampleLib_CDemo_CIMessageProxyVtbl = 
{
    &__x_ABI_CSampleLib_CDemo_CIMessage_ProxyInfo,
    &IID___x_ABI_CSampleLib_CDemo_CIMessage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CSampleLib_CDemo_CIMessage::get_Description */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CSampleLib_CDemo_CIMessage::put_Description */
};


static const PRPC_STUB_FUNCTION __x_ABI_CSampleLib_CDemo_CIMessage_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CSampleLib_CDemo_CIMessageStubVtbl =
{
    &IID___x_ABI_CSampleLib_CDemo_CIMessage,
    &__x_ABI_CSampleLib_CDemo_CIMessage_ServerInfo,
    8,
    &__x_ABI_CSampleLib_CDemo_CIMessage_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_SampleLib2Eidl_0000_3116, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_SampleLib_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int, ver. 0.0,
   GUID={0x7258528c,0x4b14,0x5543,{0x94,0xbb,0x71,0xe3,0x9f,0xc0,0x3e,0x27}} */

#pragma code_seg(".orpc")
static const unsigned short __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_FormatStringOffsetTable[] =
    {
    72
    };

static const MIDL_STUBLESS_PROXY_INFO __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_ProxyInfo =
    {
    &Object_StubDesc,
    SampleLib__MIDL_ProcFormatString.Format,
    &__FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SampleLib__MIDL_ProcFormatString.Format,
    &__FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_intProxyVtbl = 
{
    &__FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_ProxyInfo,
    &IID___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int::Invoke */
};

const CInterfaceStubVtbl ___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_intStubVtbl =
{
    &IID___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int,
    &__FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_SampleLib_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CSampleLib_CDemo_CIDemoCore, ver. 0.0,
   GUID={0xd93f8ce1,0xba66,0x4e27,{0xa0,0xce,0x39,0x48,0xc2,0x3e,0xf8,0xd2}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CSampleLib_CDemo_CIDemoCore_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    114,
    150,
    186,
    228,
    264,
    300,
    336
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CSampleLib_CDemo_CIDemoCore_ProxyInfo =
    {
    &Object_StubDesc,
    SampleLib__MIDL_ProcFormatString.Format,
    &__x_ABI_CSampleLib_CDemo_CIDemoCore_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CSampleLib_CDemo_CIDemoCore_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SampleLib__MIDL_ProcFormatString.Format,
    &__x_ABI_CSampleLib_CDemo_CIDemoCore_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) ___x_ABI_CSampleLib_CDemo_CIDemoCoreProxyVtbl = 
{
    &__x_ABI_CSampleLib_CDemo_CIDemoCore_ProxyInfo,
    &IID___x_ABI_CSampleLib_CDemo_CIDemoCore,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CSampleLib_CDemo_CIDemoCore::get_Progress */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CSampleLib_CDemo_CIDemoCore::put_Progress */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CSampleLib_CDemo_CIDemoCore::add_OnProgressChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CSampleLib_CDemo_CIDemoCore::remove_OnProgressChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CSampleLib_CDemo_CIDemoCore::GetCppwinrtDataAsync */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CSampleLib_CDemo_CIDemoCore::GetWrlDataAsync */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CSampleLib_CDemo_CIDemoCore::CrawlWeb */
};


static const PRPC_STUB_FUNCTION __x_ABI_CSampleLib_CDemo_CIDemoCore_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CSampleLib_CDemo_CIDemoCoreStubVtbl =
{
    &IID___x_ABI_CSampleLib_CDemo_CIDemoCore,
    &__x_ABI_CSampleLib_CDemo_CIDemoCore_ServerInfo,
    13,
    &__x_ABI_CSampleLib_CDemo_CIDemoCore_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_SampleLib_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    SampleLib__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026c, /* MIDL Version 8.1.620 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _SampleLib_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_intProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CSampleLib_CDemo_CIMessageProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CSampleLib_CDemo_CIDemoCoreProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _SampleLib_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_intStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CSampleLib_CDemo_CIMessageStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CSampleLib_CDemo_CIDemoCoreStubVtbl,
    0
};

PCInterfaceName const _SampleLib_InterfaceNamesList[] = 
{
    "__FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int",
    "__x_ABI_CSampleLib_CDemo_CIMessage",
    "__x_ABI_CSampleLib_CDemo_CIDemoCore",
    0
};

const IID *  const _SampleLib_BaseIIDList[] = 
{
    0,
    &IID_IInspectable,
    &IID_IInspectable,
    0
};


#define _SampleLib_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _SampleLib, pIID, n)

int __stdcall _SampleLib_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _SampleLib, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _SampleLib, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _SampleLib, 3, *pIndex )
    
}

const ExtendedProxyFileInfo SampleLib_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _SampleLib_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _SampleLib_StubVtblList,
    (const PCInterfaceName * ) & _SampleLib_InterfaceNamesList,
    (const IID ** ) & _SampleLib_BaseIIDList,
    & _SampleLib_IID_Lookup, 
    3,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

