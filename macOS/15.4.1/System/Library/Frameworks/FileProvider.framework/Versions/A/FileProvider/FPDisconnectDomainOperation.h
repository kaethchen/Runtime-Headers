@class NSProgress, FPProviderDomain;

@interface FPDisconnectDomainOperation : FPActionOperation {
    NSProgress *_remoteProgress;
    FPProviderDomain *_domain;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDomain:(id)a0;
- (void)_tryDisconnectingSafely:(BOOL)a0;
- (void)actionMain;

@end
