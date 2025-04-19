@interface _TtC10ChronoCoreP33_EA538E35880E8FB207AEB42F397305AE14ControlsClient : NSObject <CHSControlsXPCServer> {
    void /* unknown type, empty encoding */ _queue_needsSystemEnvironment;
    void /* unknown type, empty encoding */ _server;
    void /* unknown type, empty encoding */ _subscriptions;
    void /* unknown type, empty encoding */ _services;
    void /* unknown type, empty encoding */ _processHandle;
    void /* unknown type, empty encoding */ _logIdentifier;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _queue_connection;
    void /* unknown type, empty encoding */ _queue_sessions;
    void /* unknown type, empty encoding */ _queue_controlHostIdentities;
    void /* unknown type, empty encoding */ _queue_serviceAssertionIDs;
    void /* unknown type, empty encoding */ _queue_serviceAssertions;
    void /* unknown type, empty encoding */ _queue_controlFetchSubscriptions;
}

- (id)init;
- (void).cxx_destruct;
- (void)setControlState:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeToPushes:(id)a0 completion:(id /* block */)a1;
- (void)allControlConfigurationsByHostWithCompletion:(id /* block */)a0;
- (void)controlDescriptorMatching:(id)a0 completion:(id /* block */)a1;
- (void)fetchControlDescriptorsForExtensionBundleIdentifier:(id)a0 userInitiated:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)invalidateControlHost:(id)a0;
- (void)performControlAction:(id)a0 completion:(id /* block */)a1;
- (void)reloadControlsForExtension:(id)a0 kind:(id)a1 reason:(id)a2;
- (void)sendPushToken:(id)a0 completion:(id /* block */)a1;
- (void)sendPushUpdate:(id)a0 completion:(id /* block */)a1;
- (void)setEnvironmentModifiers:(id)a0 forSession:(id)a1;
- (void)setTaskPriority:(id)a0 forSession:(id)a1;
- (void)setVisibility:(id)a0 forSession:(id)a1;
- (void)subscribeToSessionWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeFromSession:(id)a0;
- (void)updateControlHost:(id)a0 activationState:(id)a1;
- (void)updateControlHost:(id)a0 configuration:(id)a1 activationState:(id)a2;

@end
