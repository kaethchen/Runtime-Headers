@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject {
    PKXPCService *_remoteService;
    BOOL _isRegistering;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)performDeviceRegistrationForReason:(id)a0 brokerURL:(id)a1 actionType:(long long)a2 completion:(id /* block */)a3;
- (void)performDeviceRegistrationReturningContextForReason:(id)a0 brokerURL:(id)a1 actionType:(long long)a2 completion:(id /* block */)a3;
- (void)performDeviceRegistrationWithCompletion:(id /* block */)a0;
- (void)performRegistrationForMemberOfRegions:(id)a0 withReason:(id)a1 completion:(id /* block */)a2;
- (void)performRegistrationForRegion:(id)a0 withReason:(id)a1 completion:(id /* block */)a2;

@end
