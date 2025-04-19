@class _PASXPCClientHelper;

@interface HVXPCSysdiagnoseService : NSObject {
    _PASXPCClientHelper *_helper;
}

- (id)init;
- (void).cxx_destruct;
- (id)synchronousProxy;
- (id)sysdiagnoseStringWithError:(id *)a0;

@end
