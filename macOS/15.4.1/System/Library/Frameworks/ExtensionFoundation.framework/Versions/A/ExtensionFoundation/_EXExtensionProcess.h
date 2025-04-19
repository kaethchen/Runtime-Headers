@class _EXExtensionProcessHandle;

@interface _EXExtensionProcess : NSObject {
    void /* unknown type, empty encoding */ _processHandle;
    void /* unknown type, empty encoding */ _observer;
}

@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) struct { unsigned int x0[8]; } auditToken;
@property (nonatomic, retain) void /* unknown type, empty encoding */ configuration;
@property (nonatomic, readonly) _EXExtensionProcessHandle *internalExtensionProcess;

+ (id)extensionProcessWithConfiguration:(id)a0 error:(id *)a1;
+ (void)extensionProcessWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)matchesProcess:(id)a0;
- (int)rbs_pid;
- (id)processPredicate;
- (id)makeXPCConnectionWithError:(id *)a0;
- (id)newXPCConnectionWithError:(id *)a0;
- (id)initWithInternalExtensionProcess:(id)a0;
- (void)invalidateLaunchAssertion;
- (id)makeLibXPCConnectionWithError:(id *)a0;

@end
