/*** Autogenerated by WIDL from mscoree.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_MSCOREE_H
#define __WIDL_MSCOREE_H

/* Forward declarations */

#ifndef __IGCThreadControl_FWD_DEFINED__
#define __IGCThreadControl_FWD_DEFINED__
typedef interface IGCThreadControl IGCThreadControl;
#endif

#ifndef __IGCHostControl_FWD_DEFINED__
#define __IGCHostControl_FWD_DEFINED__
typedef interface IGCHostControl IGCHostControl;
#endif

#ifndef __IDebuggerThreadControl_FWD_DEFINED__
#define __IDebuggerThreadControl_FWD_DEFINED__
typedef interface IDebuggerThreadControl IDebuggerThreadControl;
#endif

#ifndef __ICorConfiguration_FWD_DEFINED__
#define __ICorConfiguration_FWD_DEFINED__
typedef interface ICorConfiguration ICorConfiguration;
#endif

#ifndef __ICLRControl_FWD_DEFINED__
#define __ICLRControl_FWD_DEFINED__
typedef interface ICLRControl ICLRControl;
#endif

#ifndef __IHostControl_FWD_DEFINED__
#define __IHostControl_FWD_DEFINED__
typedef interface IHostControl IHostControl;
#endif

#ifndef __ICorRuntimeHost_FWD_DEFINED__
#define __ICorRuntimeHost_FWD_DEFINED__
typedef interface ICorRuntimeHost ICorRuntimeHost;
#endif

/* Headers for imported files */

#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FIXME: #include <gcghost.h> */
/* FIXME: #include <ivalidator.h> */
HRESULT     WINAPI CorBindToRuntimeHost(LPCWSTR,LPCWSTR,LPCWSTR,VOID*,DWORD,REFCLSID,REFIID,LPVOID*);
void        WINAPI CorExitProcess(int);
HRESULT     WINAPI GetCORSystemDirectory(LPWSTR,DWORD,DWORD*);
HRESULT     WINAPI GetCORVersion(LPWSTR,DWORD,DWORD*);
HRESULT     WINAPI GetRequestedRuntimeInfo(LPCWSTR,LPCWSTR,LPCWSTR,DWORD,DWORD,LPWSTR,DWORD,DWORD*,LPWSTR,DWORD,DWORD*);
HRESULT     WINAPI LoadLibraryShim(LPCWSTR,LPCWSTR,LPVOID,HMODULE*);
#ifdef WINE_STRICT_PROTOTYPES
typedef HRESULT (__stdcall *FLockClrVersionCallback)(void);
#else
typedef HRESULT (__stdcall *FLockClrVersionCallback)();
#endif
HRESULT     WINAPI LockClrVersion(FLockClrVersionCallback,FLockClrVersionCallback*,FLockClrVersionCallback*);
typedef void *HDOMAINENUM;
typedef enum RUNTIME_INFO_FLAGS {
    RUNTIME_INFO_UPGRADE_VERSION = 0x1,
    RUNTIME_INFO_REQUEST_IA64 = 0x2,
    RUNTIME_INFO_REQUEST_AMD64 = 0x4,
    RUNTIME_INFO_REQUEST_X86 = 0x8,
    RUNTIME_INFO_DONT_RETURN_DIRECTORY = 0x10,
    RUNTIME_INFO_DONT_RETURN_VERSION = 0x20,
    RUNTIME_INFO_DONT_SHOW_ERROR_DIALOG = 0x40
} RUNTIME_INFO_FLAGS;
/*****************************************************************************
 * IGCThreadControl interface
 */
#ifndef __IGCThreadControl_INTERFACE_DEFINED__
#define __IGCThreadControl_INTERFACE_DEFINED__

DEFINE_GUID(IID_IGCThreadControl, 0xf31d1788, 0xc397, 0x4725, 0x87,0xa5, 0x6a,0xf3,0x47,0x2c,0x27,0x91);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IGCThreadControl : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ThreadIsBlockingForSuspension(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SuspensionStarting(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SuspensionEnding(
        DWORD generation) = 0;

};
#else
typedef struct IGCThreadControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGCThreadControl* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGCThreadControl* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGCThreadControl* This);

    /*** IGCThreadControl methods ***/
    HRESULT (STDMETHODCALLTYPE *ThreadIsBlockingForSuspension)(
        IGCThreadControl* This);

    HRESULT (STDMETHODCALLTYPE *SuspensionStarting)(
        IGCThreadControl* This);

    HRESULT (STDMETHODCALLTYPE *SuspensionEnding)(
        IGCThreadControl* This,
        DWORD generation);

    END_INTERFACE
} IGCThreadControlVtbl;
interface IGCThreadControl {
    CONST_VTBL IGCThreadControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IGCThreadControl_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IGCThreadControl_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IGCThreadControl_Release(This) (This)->lpVtbl->Release(This)
/*** IGCThreadControl methods ***/
#define IGCThreadControl_ThreadIsBlockingForSuspension(This) (This)->lpVtbl->ThreadIsBlockingForSuspension(This)
#define IGCThreadControl_SuspensionStarting(This) (This)->lpVtbl->SuspensionStarting(This)
#define IGCThreadControl_SuspensionEnding(This,generation) (This)->lpVtbl->SuspensionEnding(This,generation)
#endif

#endif

HRESULT STDMETHODCALLTYPE IGCThreadControl_ThreadIsBlockingForSuspension_Proxy(
    IGCThreadControl* This);
void __RPC_STUB IGCThreadControl_ThreadIsBlockingForSuspension_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGCThreadControl_SuspensionStarting_Proxy(
    IGCThreadControl* This);
void __RPC_STUB IGCThreadControl_SuspensionStarting_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGCThreadControl_SuspensionEnding_Proxy(
    IGCThreadControl* This,
    DWORD generation);
void __RPC_STUB IGCThreadControl_SuspensionEnding_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IGCThreadControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IGCHostControl interface
 */
#ifndef __IGCHostControl_INTERFACE_DEFINED__
#define __IGCHostControl_INTERFACE_DEFINED__

DEFINE_GUID(IID_IGCHostControl, 0x5513d564, 0x8374, 0x4cb9, 0xae,0xd9, 0x00,0x83,0xf4,0x16,0x0a,0x1d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IGCHostControl : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE RequestVirtualMemLimit(
        SIZE_T nMaxVirtualMemMB,
        SIZE_T *nNewMaxVirtualMemMB) = 0;

};
#else
typedef struct IGCHostControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGCHostControl* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGCHostControl* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGCHostControl* This);

    /*** IGCHostControl methods ***/
    HRESULT (STDMETHODCALLTYPE *RequestVirtualMemLimit)(
        IGCHostControl* This,
        SIZE_T nMaxVirtualMemMB,
        SIZE_T *nNewMaxVirtualMemMB);

    END_INTERFACE
} IGCHostControlVtbl;
interface IGCHostControl {
    CONST_VTBL IGCHostControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IGCHostControl_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IGCHostControl_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IGCHostControl_Release(This) (This)->lpVtbl->Release(This)
/*** IGCHostControl methods ***/
#define IGCHostControl_RequestVirtualMemLimit(This,nMaxVirtualMemMB,nNewMaxVirtualMemMB) (This)->lpVtbl->RequestVirtualMemLimit(This,nMaxVirtualMemMB,nNewMaxVirtualMemMB)
#endif

#endif

HRESULT STDMETHODCALLTYPE IGCHostControl_RequestVirtualMemLimit_Proxy(
    IGCHostControl* This,
    SIZE_T nMaxVirtualMemMB,
    SIZE_T *nNewMaxVirtualMemMB);
void __RPC_STUB IGCHostControl_RequestVirtualMemLimit_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IGCHostControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDebuggerThreadControl interface
 */
#ifndef __IDebuggerThreadControl_INTERFACE_DEFINED__
#define __IDebuggerThreadControl_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDebuggerThreadControl, 0x23d86786, 0x0bb5, 0x4774, 0x8f,0xb5, 0xe3,0x52,0x2a,0xdd,0x62,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IDebuggerThreadControl : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ThreadIsBlockingForDebugger(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReleaseAllRuntimeThreads(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE StartBlockingForDebugger(
        DWORD dwUnused) = 0;

};
#else
typedef struct IDebuggerThreadControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDebuggerThreadControl* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDebuggerThreadControl* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDebuggerThreadControl* This);

    /*** IDebuggerThreadControl methods ***/
    HRESULT (STDMETHODCALLTYPE *ThreadIsBlockingForDebugger)(
        IDebuggerThreadControl* This);

    HRESULT (STDMETHODCALLTYPE *ReleaseAllRuntimeThreads)(
        IDebuggerThreadControl* This);

    HRESULT (STDMETHODCALLTYPE *StartBlockingForDebugger)(
        IDebuggerThreadControl* This,
        DWORD dwUnused);

    END_INTERFACE
} IDebuggerThreadControlVtbl;
interface IDebuggerThreadControl {
    CONST_VTBL IDebuggerThreadControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDebuggerThreadControl_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDebuggerThreadControl_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDebuggerThreadControl_Release(This) (This)->lpVtbl->Release(This)
/*** IDebuggerThreadControl methods ***/
#define IDebuggerThreadControl_ThreadIsBlockingForDebugger(This) (This)->lpVtbl->ThreadIsBlockingForDebugger(This)
#define IDebuggerThreadControl_ReleaseAllRuntimeThreads(This) (This)->lpVtbl->ReleaseAllRuntimeThreads(This)
#define IDebuggerThreadControl_StartBlockingForDebugger(This,dwUnused) (This)->lpVtbl->StartBlockingForDebugger(This,dwUnused)
#endif

#endif

HRESULT STDMETHODCALLTYPE IDebuggerThreadControl_ThreadIsBlockingForDebugger_Proxy(
    IDebuggerThreadControl* This);
void __RPC_STUB IDebuggerThreadControl_ThreadIsBlockingForDebugger_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDebuggerThreadControl_ReleaseAllRuntimeThreads_Proxy(
    IDebuggerThreadControl* This);
void __RPC_STUB IDebuggerThreadControl_ReleaseAllRuntimeThreads_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDebuggerThreadControl_StartBlockingForDebugger_Proxy(
    IDebuggerThreadControl* This,
    DWORD dwUnused);
void __RPC_STUB IDebuggerThreadControl_StartBlockingForDebugger_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IDebuggerThreadControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICorConfiguration interface
 */
#ifndef __ICorConfiguration_INTERFACE_DEFINED__
#define __ICorConfiguration_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICorConfiguration, 0x5c2b07a5, 0x1e98, 0x11d3, 0x87,0x2f, 0x00,0xc0,0x4f,0x79,0xed,0x0d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ICorConfiguration : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetGCThreadControl(
        IGCThreadControl *GCThreadControl) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetGCHostControl(
        IGCHostControl *GCHostControl) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDebuggerThreadControl(
        IDebuggerThreadControl *debuggerThreadControl) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddDebuggerSpecialThread(
        DWORD specialThreadId) = 0;

};
#else
typedef struct ICorConfigurationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICorConfiguration* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICorConfiguration* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICorConfiguration* This);

    /*** ICorConfiguration methods ***/
    HRESULT (STDMETHODCALLTYPE *SetGCThreadControl)(
        ICorConfiguration* This,
        IGCThreadControl *GCThreadControl);

    HRESULT (STDMETHODCALLTYPE *SetGCHostControl)(
        ICorConfiguration* This,
        IGCHostControl *GCHostControl);

    HRESULT (STDMETHODCALLTYPE *SetDebuggerThreadControl)(
        ICorConfiguration* This,
        IDebuggerThreadControl *debuggerThreadControl);

    HRESULT (STDMETHODCALLTYPE *AddDebuggerSpecialThread)(
        ICorConfiguration* This,
        DWORD specialThreadId);

    END_INTERFACE
} ICorConfigurationVtbl;
interface ICorConfiguration {
    CONST_VTBL ICorConfigurationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICorConfiguration_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICorConfiguration_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICorConfiguration_Release(This) (This)->lpVtbl->Release(This)
/*** ICorConfiguration methods ***/
#define ICorConfiguration_SetGCThreadControl(This,GCThreadControl) (This)->lpVtbl->SetGCThreadControl(This,GCThreadControl)
#define ICorConfiguration_SetGCHostControl(This,GCHostControl) (This)->lpVtbl->SetGCHostControl(This,GCHostControl)
#define ICorConfiguration_SetDebuggerThreadControl(This,debuggerThreadControl) (This)->lpVtbl->SetDebuggerThreadControl(This,debuggerThreadControl)
#define ICorConfiguration_AddDebuggerSpecialThread(This,specialThreadId) (This)->lpVtbl->AddDebuggerSpecialThread(This,specialThreadId)
#endif

#endif

HRESULT STDMETHODCALLTYPE ICorConfiguration_SetGCThreadControl_Proxy(
    ICorConfiguration* This,
    IGCThreadControl *GCThreadControl);
void __RPC_STUB ICorConfiguration_SetGCThreadControl_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorConfiguration_SetGCHostControl_Proxy(
    ICorConfiguration* This,
    IGCHostControl *GCHostControl);
void __RPC_STUB ICorConfiguration_SetGCHostControl_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorConfiguration_SetDebuggerThreadControl_Proxy(
    ICorConfiguration* This,
    IDebuggerThreadControl *debuggerThreadControl);
void __RPC_STUB ICorConfiguration_SetDebuggerThreadControl_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorConfiguration_AddDebuggerSpecialThread_Proxy(
    ICorConfiguration* This,
    DWORD specialThreadId);
void __RPC_STUB ICorConfiguration_AddDebuggerSpecialThread_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ICorConfiguration_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICLRControl interface
 */
#ifndef __ICLRControl_INTERFACE_DEFINED__
#define __ICLRControl_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICLRControl, 0x9065597e, 0xd1a1, 0x4fb2, 0xb6,0xba, 0x7e,0x1f,0xce,0x23,0x0f,0x61);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ICLRControl : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetCLRManager(
        REFIID riid,
        void **ppObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAppDomainManagerType(
        LPCWSTR appDomainManagerAssembly,
        LPCWSTR appDomainManagerType) = 0;

};
#else
typedef struct ICLRControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICLRControl* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICLRControl* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICLRControl* This);

    /*** ICLRControl methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCLRManager)(
        ICLRControl* This,
        REFIID riid,
        void **ppObject);

    HRESULT (STDMETHODCALLTYPE *SetAppDomainManagerType)(
        ICLRControl* This,
        LPCWSTR appDomainManagerAssembly,
        LPCWSTR appDomainManagerType);

    END_INTERFACE
} ICLRControlVtbl;
interface ICLRControl {
    CONST_VTBL ICLRControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICLRControl_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICLRControl_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICLRControl_Release(This) (This)->lpVtbl->Release(This)
/*** ICLRControl methods ***/
#define ICLRControl_GetCLRManager(This,riid,ppObject) (This)->lpVtbl->GetCLRManager(This,riid,ppObject)
#define ICLRControl_SetAppDomainManagerType(This,appDomainManagerAssembly,appDomainManagerType) (This)->lpVtbl->SetAppDomainManagerType(This,appDomainManagerAssembly,appDomainManagerType)
#endif

#endif

HRESULT STDMETHODCALLTYPE ICLRControl_GetCLRManager_Proxy(
    ICLRControl* This,
    REFIID riid,
    void **ppObject);
void __RPC_STUB ICLRControl_GetCLRManager_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRControl_SetAppDomainManagerType_Proxy(
    ICLRControl* This,
    LPCWSTR appDomainManagerAssembly,
    LPCWSTR appDomainManagerType);
void __RPC_STUB ICLRControl_SetAppDomainManagerType_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ICLRControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IHostControl interface
 */
#ifndef __IHostControl_INTERFACE_DEFINED__
#define __IHostControl_INTERFACE_DEFINED__

DEFINE_GUID(IID_IHostControl, 0x02ca073c, 0x7079, 0x4860, 0x88,0x0a, 0xc2,0xf7,0xa4,0x49,0xc9,0x91);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IHostControl : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetHostManager(
        REFIID riid,
        void **ppObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAppDomainManager(
        DWORD appDomainID,
        IUnknown *appDomainManager) = 0;

};
#else
typedef struct IHostControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHostControl* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHostControl* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHostControl* This);

    /*** IHostControl methods ***/
    HRESULT (STDMETHODCALLTYPE *GetHostManager)(
        IHostControl* This,
        REFIID riid,
        void **ppObject);

    HRESULT (STDMETHODCALLTYPE *SetAppDomainManager)(
        IHostControl* This,
        DWORD appDomainID,
        IUnknown *appDomainManager);

    END_INTERFACE
} IHostControlVtbl;
interface IHostControl {
    CONST_VTBL IHostControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHostControl_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IHostControl_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IHostControl_Release(This) (This)->lpVtbl->Release(This)
/*** IHostControl methods ***/
#define IHostControl_GetHostManager(This,riid,ppObject) (This)->lpVtbl->GetHostManager(This,riid,ppObject)
#define IHostControl_SetAppDomainManager(This,appDomainID,appDomainManager) (This)->lpVtbl->SetAppDomainManager(This,appDomainID,appDomainManager)
#endif

#endif

HRESULT STDMETHODCALLTYPE IHostControl_GetHostManager_Proxy(
    IHostControl* This,
    REFIID riid,
    void **ppObject);
void __RPC_STUB IHostControl_GetHostManager_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IHostControl_SetAppDomainManager_Proxy(
    IHostControl* This,
    DWORD appDomainID,
    IUnknown *appDomainManager);
void __RPC_STUB IHostControl_SetAppDomainManager_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IHostControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICorRuntimeHost interface
 */
#ifndef __ICorRuntimeHost_INTERFACE_DEFINED__
#define __ICorRuntimeHost_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICorRuntimeHost, 0xcb2f6722, 0xab3a, 0x11d2, 0x9c,0x40, 0x00,0xc0,0x4f,0xa3,0x0a,0x3e);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ICorRuntimeHost : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateLogicalThreadState(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteLogicalThreadState(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SwitchInLogicalThreadState(
        DWORD *fiberCookie) = 0;

    virtual HRESULT STDMETHODCALLTYPE SwitchOutLogicalThreadState(
        DWORD **fiberCookie) = 0;

    virtual HRESULT STDMETHODCALLTYPE LocksHeldByLogicalThread(
        DWORD *pCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE MapFile(
        HANDLE hFile,
        HMODULE *mapAddress) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetConfiguration(
        ICorConfiguration **pConfiguration) = 0;

    virtual HRESULT STDMETHODCALLTYPE Start(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Stop(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateDomain(
        LPCWSTR friendlyName,
        IUnknown *identityArray,
        IUnknown **appDomain) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDefaultDomain(
        IUnknown **pAppDomain) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumDomains(
        HDOMAINENUM *hEnum) = 0;

    virtual HRESULT STDMETHODCALLTYPE NextDomain(
        HDOMAINENUM hEnum,
        IUnknown **appDomain) = 0;

    virtual HRESULT STDMETHODCALLTYPE CloseEnum(
        HDOMAINENUM hEnum) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateDomainEx(
        LPCWSTR friendlyName,
        IUnknown *setup,
        IUnknown *evidence,
        IUnknown **appDomain) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateDomainSetup(
        IUnknown **appDomainSetup) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateEvidence(
        IUnknown **evidence) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnloadDomain(
        IUnknown *appDomain) = 0;

    virtual HRESULT STDMETHODCALLTYPE CurrentDomain(
        IUnknown **appDomain) = 0;

};
#else
typedef struct ICorRuntimeHostVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICorRuntimeHost* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICorRuntimeHost* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICorRuntimeHost* This);

    /*** ICorRuntimeHost methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateLogicalThreadState)(
        ICorRuntimeHost* This);

    HRESULT (STDMETHODCALLTYPE *DeleteLogicalThreadState)(
        ICorRuntimeHost* This);

    HRESULT (STDMETHODCALLTYPE *SwitchInLogicalThreadState)(
        ICorRuntimeHost* This,
        DWORD *fiberCookie);

    HRESULT (STDMETHODCALLTYPE *SwitchOutLogicalThreadState)(
        ICorRuntimeHost* This,
        DWORD **fiberCookie);

    HRESULT (STDMETHODCALLTYPE *LocksHeldByLogicalThread)(
        ICorRuntimeHost* This,
        DWORD *pCount);

    HRESULT (STDMETHODCALLTYPE *MapFile)(
        ICorRuntimeHost* This,
        HANDLE hFile,
        HMODULE *mapAddress);

    HRESULT (STDMETHODCALLTYPE *GetConfiguration)(
        ICorRuntimeHost* This,
        ICorConfiguration **pConfiguration);

    HRESULT (STDMETHODCALLTYPE *Start)(
        ICorRuntimeHost* This);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        ICorRuntimeHost* This);

    HRESULT (STDMETHODCALLTYPE *CreateDomain)(
        ICorRuntimeHost* This,
        LPCWSTR friendlyName,
        IUnknown *identityArray,
        IUnknown **appDomain);

    HRESULT (STDMETHODCALLTYPE *GetDefaultDomain)(
        ICorRuntimeHost* This,
        IUnknown **pAppDomain);

    HRESULT (STDMETHODCALLTYPE *EnumDomains)(
        ICorRuntimeHost* This,
        HDOMAINENUM *hEnum);

    HRESULT (STDMETHODCALLTYPE *NextDomain)(
        ICorRuntimeHost* This,
        HDOMAINENUM hEnum,
        IUnknown **appDomain);

    HRESULT (STDMETHODCALLTYPE *CloseEnum)(
        ICorRuntimeHost* This,
        HDOMAINENUM hEnum);

    HRESULT (STDMETHODCALLTYPE *CreateDomainEx)(
        ICorRuntimeHost* This,
        LPCWSTR friendlyName,
        IUnknown *setup,
        IUnknown *evidence,
        IUnknown **appDomain);

    HRESULT (STDMETHODCALLTYPE *CreateDomainSetup)(
        ICorRuntimeHost* This,
        IUnknown **appDomainSetup);

    HRESULT (STDMETHODCALLTYPE *CreateEvidence)(
        ICorRuntimeHost* This,
        IUnknown **evidence);

    HRESULT (STDMETHODCALLTYPE *UnloadDomain)(
        ICorRuntimeHost* This,
        IUnknown *appDomain);

    HRESULT (STDMETHODCALLTYPE *CurrentDomain)(
        ICorRuntimeHost* This,
        IUnknown **appDomain);

    END_INTERFACE
} ICorRuntimeHostVtbl;
interface ICorRuntimeHost {
    CONST_VTBL ICorRuntimeHostVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICorRuntimeHost_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICorRuntimeHost_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICorRuntimeHost_Release(This) (This)->lpVtbl->Release(This)
/*** ICorRuntimeHost methods ***/
#define ICorRuntimeHost_CreateLogicalThreadState(This) (This)->lpVtbl->CreateLogicalThreadState(This)
#define ICorRuntimeHost_DeleteLogicalThreadState(This) (This)->lpVtbl->DeleteLogicalThreadState(This)
#define ICorRuntimeHost_SwitchInLogicalThreadState(This,fiberCookie) (This)->lpVtbl->SwitchInLogicalThreadState(This,fiberCookie)
#define ICorRuntimeHost_SwitchOutLogicalThreadState(This,fiberCookie) (This)->lpVtbl->SwitchOutLogicalThreadState(This,fiberCookie)
#define ICorRuntimeHost_LocksHeldByLogicalThread(This,pCount) (This)->lpVtbl->LocksHeldByLogicalThread(This,pCount)
#define ICorRuntimeHost_MapFile(This,hFile,mapAddress) (This)->lpVtbl->MapFile(This,hFile,mapAddress)
#define ICorRuntimeHost_GetConfiguration(This,pConfiguration) (This)->lpVtbl->GetConfiguration(This,pConfiguration)
#define ICorRuntimeHost_Start(This) (This)->lpVtbl->Start(This)
#define ICorRuntimeHost_Stop(This) (This)->lpVtbl->Stop(This)
#define ICorRuntimeHost_CreateDomain(This,friendlyName,identityArray,appDomain) (This)->lpVtbl->CreateDomain(This,friendlyName,identityArray,appDomain)
#define ICorRuntimeHost_GetDefaultDomain(This,pAppDomain) (This)->lpVtbl->GetDefaultDomain(This,pAppDomain)
#define ICorRuntimeHost_EnumDomains(This,hEnum) (This)->lpVtbl->EnumDomains(This,hEnum)
#define ICorRuntimeHost_NextDomain(This,hEnum,appDomain) (This)->lpVtbl->NextDomain(This,hEnum,appDomain)
#define ICorRuntimeHost_CloseEnum(This,hEnum) (This)->lpVtbl->CloseEnum(This,hEnum)
#define ICorRuntimeHost_CreateDomainEx(This,friendlyName,setup,evidence,appDomain) (This)->lpVtbl->CreateDomainEx(This,friendlyName,setup,evidence,appDomain)
#define ICorRuntimeHost_CreateDomainSetup(This,appDomainSetup) (This)->lpVtbl->CreateDomainSetup(This,appDomainSetup)
#define ICorRuntimeHost_CreateEvidence(This,evidence) (This)->lpVtbl->CreateEvidence(This,evidence)
#define ICorRuntimeHost_UnloadDomain(This,appDomain) (This)->lpVtbl->UnloadDomain(This,appDomain)
#define ICorRuntimeHost_CurrentDomain(This,appDomain) (This)->lpVtbl->CurrentDomain(This,appDomain)
#endif

#endif

HRESULT STDMETHODCALLTYPE ICorRuntimeHost_CreateLogicalThreadState_Proxy(
    ICorRuntimeHost* This);
void __RPC_STUB ICorRuntimeHost_CreateLogicalThreadState_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_DeleteLogicalThreadState_Proxy(
    ICorRuntimeHost* This);
void __RPC_STUB ICorRuntimeHost_DeleteLogicalThreadState_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_SwitchInLogicalThreadState_Proxy(
    ICorRuntimeHost* This,
    DWORD *fiberCookie);
void __RPC_STUB ICorRuntimeHost_SwitchInLogicalThreadState_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_SwitchOutLogicalThreadState_Proxy(
    ICorRuntimeHost* This,
    DWORD **fiberCookie);
void __RPC_STUB ICorRuntimeHost_SwitchOutLogicalThreadState_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_LocksHeldByLogicalThread_Proxy(
    ICorRuntimeHost* This,
    DWORD *pCount);
void __RPC_STUB ICorRuntimeHost_LocksHeldByLogicalThread_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_MapFile_Proxy(
    ICorRuntimeHost* This,
    HANDLE hFile,
    HMODULE *mapAddress);
void __RPC_STUB ICorRuntimeHost_MapFile_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_GetConfiguration_Proxy(
    ICorRuntimeHost* This,
    ICorConfiguration **pConfiguration);
void __RPC_STUB ICorRuntimeHost_GetConfiguration_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_Start_Proxy(
    ICorRuntimeHost* This);
void __RPC_STUB ICorRuntimeHost_Start_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_Stop_Proxy(
    ICorRuntimeHost* This);
void __RPC_STUB ICorRuntimeHost_Stop_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_CreateDomain_Proxy(
    ICorRuntimeHost* This,
    LPCWSTR friendlyName,
    IUnknown *identityArray,
    IUnknown **appDomain);
void __RPC_STUB ICorRuntimeHost_CreateDomain_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_GetDefaultDomain_Proxy(
    ICorRuntimeHost* This,
    IUnknown **pAppDomain);
void __RPC_STUB ICorRuntimeHost_GetDefaultDomain_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_EnumDomains_Proxy(
    ICorRuntimeHost* This,
    HDOMAINENUM *hEnum);
void __RPC_STUB ICorRuntimeHost_EnumDomains_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_NextDomain_Proxy(
    ICorRuntimeHost* This,
    HDOMAINENUM hEnum,
    IUnknown **appDomain);
void __RPC_STUB ICorRuntimeHost_NextDomain_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_CloseEnum_Proxy(
    ICorRuntimeHost* This,
    HDOMAINENUM hEnum);
void __RPC_STUB ICorRuntimeHost_CloseEnum_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_CreateDomainEx_Proxy(
    ICorRuntimeHost* This,
    LPCWSTR friendlyName,
    IUnknown *setup,
    IUnknown *evidence,
    IUnknown **appDomain);
void __RPC_STUB ICorRuntimeHost_CreateDomainEx_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_CreateDomainSetup_Proxy(
    ICorRuntimeHost* This,
    IUnknown **appDomainSetup);
void __RPC_STUB ICorRuntimeHost_CreateDomainSetup_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_CreateEvidence_Proxy(
    ICorRuntimeHost* This,
    IUnknown **evidence);
void __RPC_STUB ICorRuntimeHost_CreateEvidence_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_UnloadDomain_Proxy(
    ICorRuntimeHost* This,
    IUnknown *appDomain);
void __RPC_STUB ICorRuntimeHost_UnloadDomain_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICorRuntimeHost_CurrentDomain_Proxy(
    ICorRuntimeHost* This,
    IUnknown **appDomain);
void __RPC_STUB ICorRuntimeHost_CurrentDomain_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ICorRuntimeHost_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_MSCOREE_H */
