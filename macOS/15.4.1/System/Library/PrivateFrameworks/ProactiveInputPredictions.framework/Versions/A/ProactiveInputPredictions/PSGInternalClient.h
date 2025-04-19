@class _PASXPCClientHelper;

@interface PSGInternalClient : NSObject {
    _PASXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)sysdiagnoseInformationWithError:(id *)a0;

@end
