@class NSString, NSXPCConnection;
@protocol LACDTOServiceXPCEndpointProvider;

@interface LACDTOServiceXPCClient : NSObject <LACDTOServiceXPCClient> {
    id<LACDTOServiceXPCEndpointProvider> _endpointProvider;
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)ratchetState;
- (BOOL)isFeatureSupported;
- (BOOL)isFeatureEnabled;
- (BOOL)isSensorTrusted;
- (void)checkCanEnableFeatureWithCompletion:(id /* block */)a0;
- (void)disableFeatureStrictModeWithContext:(id)a0 completion:(id /* block */)a1;
- (void)disableFeatureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)enableFeatureStrictModeWithCompletion:(id /* block */)a0;
- (void)enableFeatureWithCompletion:(id /* block */)a0;
- (BOOL)isFeatureAvailable;
- (BOOL)isFeatureStrictModeEnabled;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)cancelPendingEvaluationWithRatchetIdentifier:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (id)_connectionWithErrorHandler:(id /* block */)a0;
- (void)_handleConnectionClose;
- (void)checkIsFeatureAvailableWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureEnabledWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureStrictModeEnabledWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureSupportedWithCompletion:(id /* block */)a0;
- (void)checkIsSensorTrustedWithCompletion:(id /* block */)a0;
- (void)enableFeatureActivatingGracePeriodWithCompletion:(id /* block */)a0;
- (id)initWithEndpointProvider:(id)a0;
- (void)ratchetStateCompositeWithCompletion:(id /* block */)a0;
- (void)ratchetStateWithCompletion:(id /* block */)a0;

@end
