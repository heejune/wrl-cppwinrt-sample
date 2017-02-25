

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SampleLib_h_h__
#define __SampleLib_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#if defined(__cplusplus)
#if defined(__MIDL_USE_C_ENUM)
#define MIDL_ENUM enum
#else
#define MIDL_ENUM enum class
#endif
#endif


/* Forward Declarations */ 

#ifndef ____x_ABI_CSampleLib_CDemo_CIMessage_FWD_DEFINED__
#define ____x_ABI_CSampleLib_CDemo_CIMessage_FWD_DEFINED__
typedef interface __x_ABI_CSampleLib_CDemo_CIMessage __x_ABI_CSampleLib_CDemo_CIMessage;

#ifdef __cplusplus
namespace ABI {
    namespace SampleLib {
        namespace Demo {
            interface IMessage;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CSampleLib_CDemo_CIMessage_FWD_DEFINED__ */


#ifndef ____FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_FWD_DEFINED__
#define ____FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int;

#endif 	/* ____FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_FWD_DEFINED__ */


#ifndef ____x_ABI_CSampleLib_CDemo_CIDemoCore_FWD_DEFINED__
#define ____x_ABI_CSampleLib_CDemo_CIDemoCore_FWD_DEFINED__
typedef interface __x_ABI_CSampleLib_CDemo_CIDemoCore __x_ABI_CSampleLib_CDemo_CIDemoCore;

#ifdef __cplusplus
namespace ABI {
    namespace SampleLib {
        namespace Demo {
            interface IDemoCore;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CSampleLib_CDemo_CIDemoCore_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "Windows.Foundation.h"
#include "Windows.Web.Http.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_SampleLib_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
namespace ABI {
namespace SampleLib {
namespace Demo {
class DemoCore;
} /*Demo*/
} /*SampleLib*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace SampleLib {
namespace Demo {
interface IDemoCore;
} /*Demo*/
} /*SampleLib*/
}
#endif


/* interface __MIDL_itf_SampleLib_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib2Eidl_0000_3107 */




/* interface __MIDL_itf_SampleLib2Eidl_0000_3107 */




extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3107_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib_0000_0001 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_USE
#define DEF___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7258528c-4b14-5543-94bb-71e39fc03e27"))
ITypedEventHandler<ABI::SampleLib::Demo::DemoCore*,int> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::SampleLib::Demo::DemoCore*, ABI::SampleLib::Demo::IDemoCore*>,int> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<SampleLib.Demo.DemoCore, Int32>"; }
};
typedef ITypedEventHandler<ABI::SampleLib::Demo::DemoCore*,int> __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_t;
#define ____FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_FWD_DEFINED__
#define __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int ABI::Windows::Foundation::__FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_USE */


/* interface __MIDL_itf_SampleLib_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib2Eidl_0000_3108 */




/* interface __MIDL_itf_SampleLib2Eidl_0000_3108 */




extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3108_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_int_USE
#define DEF___FIAsyncOperationCompletedHandler_1_int_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d60cae9d-88cb-59f1-8576-3fba44796be8"))
IAsyncOperationCompletedHandler<int> : IAsyncOperationCompletedHandler_impl<int> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Int32>"; }
};
typedef IAsyncOperationCompletedHandler<int> __FIAsyncOperationCompletedHandler_1_int_t;
#define ____FIAsyncOperationCompletedHandler_1_int_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_int ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_int_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_int_USE */


/* interface __MIDL_itf_SampleLib_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib2Eidl_0000_3109 */




/* interface __MIDL_itf_SampleLib2Eidl_0000_3109 */




extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3109_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib_0000_0003 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_int_USE
#define DEF___FIAsyncOperation_1_int_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("968b9665-06ed-5774-8f53-8edeabd5f7b5"))
IAsyncOperation<int> : IAsyncOperation_impl<int> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Int32>"; }
};
typedef IAsyncOperation<int> __FIAsyncOperation_1_int_t;
#define ____FIAsyncOperation_1_int_FWD_DEFINED__
#define __FIAsyncOperation_1_int ABI::Windows::Foundation::__FIAsyncOperation_1_int_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_int_USE */


/* interface __MIDL_itf_SampleLib_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib2Eidl_0000_3110 */




/* interface __MIDL_itf_SampleLib2Eidl_0000_3110 */




extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3110_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib_0000_0004 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41"))
IAsyncOperationCompletedHandler<HSTRING> : IAsyncOperationCompletedHandler_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<String>"; }
};
typedef IAsyncOperationCompletedHandler<HSTRING> __FIAsyncOperationCompletedHandler_1_HSTRING_t;
#define ____FIAsyncOperationCompletedHandler_1_HSTRING_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE */


/* interface __MIDL_itf_SampleLib_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib2Eidl_0000_3111 */




/* interface __MIDL_itf_SampleLib2Eidl_0000_3111 */




extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3111_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib_0000_0005 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_HSTRING_USE
#define DEF___FIAsyncOperation_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79"))
IAsyncOperation<HSTRING> : IAsyncOperation_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<String>"; }
};
typedef IAsyncOperation<HSTRING> __FIAsyncOperation_1_HSTRING_t;
#define ____FIAsyncOperation_1_HSTRING_FWD_DEFINED__
#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_HSTRING_USE */


/* interface __MIDL_itf_SampleLib_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib2Eidl_0000_3112 */




/* interface __MIDL_itf_SampleLib2Eidl_0000_3112 */




extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3112_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3112_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib_0000_0006 */
/* [local] */ 

#ifndef DEF___FIReference_1_UINT64_USE
#define DEF___FIReference_1_UINT64_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6755e376-53bb-568b-a11d-17239868309e"))
IReference<UINT64> : IReference_impl<UINT64> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IReference`1<UInt64>"; }
};
typedef IReference<UINT64> __FIReference_1_UINT64_t;
#define ____FIReference_1_UINT64_FWD_DEFINED__
#define __FIReference_1_UINT64 ABI::Windows::Foundation::__FIReference_1_UINT64_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIReference_1_UINT64_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Streams {
interface IBuffer;
} /*Streams*/
} /*Storage*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Web {
namespace Http {
struct HttpProgress;
} /*Http*/
} /*Web*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_SampleLib_0000_0006 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib2Eidl_0000_3113 */




/* interface __MIDL_itf_SampleLib2Eidl_0000_3113 */




extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3113_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib_0000_0007 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9eb2b852-e019-5440-8f88-0dd7d56fea47"))
IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer, Windows.Web.Http.HttpProgress>"; }
};
typedef IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t;
#define ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_FWD_DEFINED__
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE */


/* interface __MIDL_itf_SampleLib_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib2Eidl_0000_3114 */




/* interface __MIDL_itf_SampleLib2Eidl_0000_3114 */




extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3114_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib_0000_0008 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b0cf2f85-6992-52be-8f0b-93964b14d963"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer, Windows.Web.Http.HttpProgress>"; }
};
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t;
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_FWD_DEFINED__
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE */


/* interface __MIDL_itf_SampleLib_0000_0008 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib2Eidl_0000_3115 */




/* interface __MIDL_itf_SampleLib2Eidl_0000_3115 */




extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3115_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib_0000_0009 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("88d9bb75-afb4-5f32-9d7e-d3bf3785354c"))
IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer, Windows.Web.Http.HttpProgress>"; }
};
typedef IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t;
#define ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_FWD_DEFINED__
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE */

#ifdef __cplusplus
namespace ABI {
namespace SampleLib {
namespace Demo {
class Message;
} /*Demo*/
} /*SampleLib*/
}
#endif
#if !defined(____x_ABI_CSampleLib_CDemo_CIMessage_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_SampleLib_Demo_IMessage[] = L"SampleLib.Demo.IMessage";
#endif /* !defined(____x_ABI_CSampleLib_CDemo_CIMessage_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_SampleLib_0000_0009 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0009_v0_0_s_ifspec;

#ifndef ____x_ABI_CSampleLib_CDemo_CIMessage_INTERFACE_DEFINED__
#define ____x_ABI_CSampleLib_CDemo_CIMessage_INTERFACE_DEFINED__

/* interface __x_ABI_CSampleLib_CDemo_CIMessage */
/* [uuid][object] */ 



/* interface ABI::SampleLib::Demo::IMessage */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CSampleLib_CDemo_CIMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace SampleLib {
            namespace Demo {
                
                MIDL_INTERFACE("74f49eb3-3491-40c3-a4b7-87113577c4b1")
                IMessage : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
                        /* [out][retval] */ HSTRING *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
                        /* [in] */ HSTRING value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IMessage = __uuidof(IMessage);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CSampleLib_CDemo_CIMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CSampleLib_CDemo_CIMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CSampleLib_CDemo_CIMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CSampleLib_CDemo_CIMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CSampleLib_CDemo_CIMessage * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CSampleLib_CDemo_CIMessage * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CSampleLib_CDemo_CIMessage * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            __x_ABI_CSampleLib_CDemo_CIMessage * This,
            /* [out][retval] */ HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            __x_ABI_CSampleLib_CDemo_CIMessage * This,
            /* [in] */ HSTRING value);
        
        END_INTERFACE
    } __x_ABI_CSampleLib_CDemo_CIMessageVtbl;

    interface __x_ABI_CSampleLib_CDemo_CIMessage
    {
        CONST_VTBL struct __x_ABI_CSampleLib_CDemo_CIMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CSampleLib_CDemo_CIMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CSampleLib_CDemo_CIMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CSampleLib_CDemo_CIMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CSampleLib_CDemo_CIMessage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CSampleLib_CDemo_CIMessage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CSampleLib_CDemo_CIMessage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CSampleLib_CDemo_CIMessage_get_Description(This,value)	\
    ( (This)->lpVtbl -> get_Description(This,value) ) 

#define __x_ABI_CSampleLib_CDemo_CIMessage_put_Description(This,value)	\
    ( (This)->lpVtbl -> put_Description(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CSampleLib_CDemo_CIMessage_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SampleLib2Eidl_0000_3116 */




/* interface __MIDL_itf_SampleLib2Eidl_0000_3116 */




extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3116_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib2Eidl_0000_3116_v0_0_s_ifspec;

/* interface __MIDL_itf_SampleLib_0000_0011 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int
#define DEF___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_SampleLib_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0011_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int */
/* [unique][uuid][object] */ 



/* interface __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7258528c-4b14-5543-94bb-71e39fc03e27")
    __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ABI::SampleLib::Demo::IDemoCore *sender,
            /* [in] */ int e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_intVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int * This,
            /* [in] */ __x_ABI_CSampleLib_CDemo_CIDemoCore *sender,
            /* [in] */ int e);
        
        END_INTERFACE
    } __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_intVtbl;

    interface __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int
    {
        CONST_VTBL struct __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_intVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SampleLib_0000_0012 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int */
#if !defined(____x_ABI_CSampleLib_CDemo_CIDemoCore_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_SampleLib_Demo_IDemoCore[] = L"SampleLib.Demo.IDemoCore";
#endif /* !defined(____x_ABI_CSampleLib_CDemo_CIDemoCore_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_SampleLib_0000_0012 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0012_v0_0_s_ifspec;

#ifndef ____x_ABI_CSampleLib_CDemo_CIDemoCore_INTERFACE_DEFINED__
#define ____x_ABI_CSampleLib_CDemo_CIDemoCore_INTERFACE_DEFINED__

/* interface __x_ABI_CSampleLib_CDemo_CIDemoCore */
/* [uuid][object] */ 



/* interface ABI::SampleLib::Demo::IDemoCore */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CSampleLib_CDemo_CIDemoCore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace SampleLib {
            namespace Demo {
                
                MIDL_INTERFACE("d93f8ce1-ba66-4e27-a0ce-3948c23ef8d2")
                IDemoCore : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Progress( 
                        /* [out][retval] */ int *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Progress( 
                        /* [in] */ int value) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_OnProgressChanged( 
                        /* [in] */ __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int *handler,
                        /* [out][retval] */ EventRegistrationToken *token) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_OnProgressChanged( 
                        /* [in] */ EventRegistrationToken token) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE GetCppwinrtDataAsync( 
                        /* [out][retval] */ __FIAsyncOperation_1_int **value) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE GetWrlDataAsync( 
                        /* [out][retval] */ __FIAsyncOperation_1_HSTRING **value) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CrawlWeb( 
                        /* [in] */ ABI::Windows::Foundation::IUriRuntimeClass *uri,
                        /* [out][retval] */ __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress **value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IDemoCore = __uuidof(IDemoCore);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CSampleLib_CDemo_CIDemoCoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [out][retval] */ int *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [in] */ int value);
        
        HRESULT ( STDMETHODCALLTYPE *add_OnProgressChanged )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [in] */ __FITypedEventHandler_2_SampleLib__CDemo__CDemoCore_int *handler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_OnProgressChanged )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *GetCppwinrtDataAsync )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [out][retval] */ __FIAsyncOperation_1_int **value);
        
        HRESULT ( STDMETHODCALLTYPE *GetWrlDataAsync )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [out][retval] */ __FIAsyncOperation_1_HSTRING **value);
        
        HRESULT ( STDMETHODCALLTYPE *CrawlWeb )( 
            __x_ABI_CSampleLib_CDemo_CIDemoCore * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *uri,
            /* [out][retval] */ __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress **value);
        
        END_INTERFACE
    } __x_ABI_CSampleLib_CDemo_CIDemoCoreVtbl;

    interface __x_ABI_CSampleLib_CDemo_CIDemoCore
    {
        CONST_VTBL struct __x_ABI_CSampleLib_CDemo_CIDemoCoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CSampleLib_CDemo_CIDemoCore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CSampleLib_CDemo_CIDemoCore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CSampleLib_CDemo_CIDemoCore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CSampleLib_CDemo_CIDemoCore_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CSampleLib_CDemo_CIDemoCore_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CSampleLib_CDemo_CIDemoCore_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CSampleLib_CDemo_CIDemoCore_get_Progress(This,value)	\
    ( (This)->lpVtbl -> get_Progress(This,value) ) 

#define __x_ABI_CSampleLib_CDemo_CIDemoCore_put_Progress(This,value)	\
    ( (This)->lpVtbl -> put_Progress(This,value) ) 

#define __x_ABI_CSampleLib_CDemo_CIDemoCore_add_OnProgressChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_OnProgressChanged(This,handler,token) ) 

#define __x_ABI_CSampleLib_CDemo_CIDemoCore_remove_OnProgressChanged(This,token)	\
    ( (This)->lpVtbl -> remove_OnProgressChanged(This,token) ) 

#define __x_ABI_CSampleLib_CDemo_CIDemoCore_GetCppwinrtDataAsync(This,value)	\
    ( (This)->lpVtbl -> GetCppwinrtDataAsync(This,value) ) 

#define __x_ABI_CSampleLib_CDemo_CIDemoCore_GetWrlDataAsync(This,value)	\
    ( (This)->lpVtbl -> GetWrlDataAsync(This,value) ) 

#define __x_ABI_CSampleLib_CDemo_CIDemoCore_CrawlWeb(This,uri,value)	\
    ( (This)->lpVtbl -> CrawlWeb(This,uri,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CSampleLib_CDemo_CIDemoCore_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SampleLib_0000_0013 */
/* [local] */ 

#ifndef RUNTIMECLASS_SampleLib_Demo_DemoCore_DEFINED
#define RUNTIMECLASS_SampleLib_Demo_DemoCore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_SampleLib_Demo_DemoCore[] = L"SampleLib.Demo.DemoCore";
#endif
#ifndef RUNTIMECLASS_SampleLib_Demo_Message_DEFINED
#define RUNTIMECLASS_SampleLib_Demo_Message_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_SampleLib_Demo_Message[] = L"SampleLib.Demo.Message";
#endif


/* interface __MIDL_itf_SampleLib_0000_0013 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SampleLib_0000_0013_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


