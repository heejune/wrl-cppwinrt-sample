

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID___x_ABI_CSampleLib_CDemo_CIMessage,0x74f49eb3,0x3491,0x40c3,0xa4,0xb7,0x87,0x11,0x35,0x77,0xc4,0xb1);


MIDL_DEFINE_GUID(IID, IID___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int,0x7258528c,0x4b14,0x5543,0x94,0xbb,0x71,0xe3,0x9f,0xc0,0x3e,0x27);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CSampleLib_CDemo_CIDemoCore,0xd93f8ce1,0xba66,0x4e27,0xa0,0xce,0x39,0x48,0xc2,0x3e,0xf8,0xd2);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



