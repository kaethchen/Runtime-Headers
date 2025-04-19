@class _LSRemoteOpenCallInputs, _LSRemoteOpenCallOutputs, NSObject;
@protocol OS_xpc_object;

@interface _LSRemoteOpenCall : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_connection;
    _LSRemoteOpenCallInputs *_inputs;
    _LSRemoteOpenCallOutputs *_outputs;
}

@property (class, readonly) BOOL canInvokeLocally;
@property (class, readonly) BOOL canInvokeRemotely;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)invokeWithXPCConnection:(id)a0 object:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getOutAppURL:(id *)a0;
- (void)getOutAppWasLaunched:(BOOL *)a0;
- (void)getOutPSNs:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *)a0;
- (id)initWithXPCConnection:(id)a0;
- (BOOL)invokeWithError:(id *)a0;
- (BOOL)invokeWithXPCConnection:(id)a0 error:(id *)a1;
- (BOOL)openLocallyFromCaller:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
- (void)setInAEParam:(const struct AEKeyDesc { unsigned int x0; struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } x1; } *)a0;
- (void)setInAnnotations:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0;
- (void)setInAppParams:(const struct LSApplicationParameters_V1 { long long x0; unsigned int x1; struct FSRef *x2; void *x3; struct __CFDictionary *x4; struct __CFArray *x5; struct AEDesc *x6; struct __CFArray *x7; struct __CFURL *x8; struct ProcessSerialNumber *x9; } *)a0 inheritEnvironment:(BOOL)a1;
- (void)setInLauncherOptions:(id)a0;
- (void)setInOptions2:(id)a0;
- (void)setInPSNCount:(unsigned long long)a0;
- (void)setInRoleMask:(unsigned int)a0;
- (void)setInURLs:(struct __CFArray { } *)a0;

@end
