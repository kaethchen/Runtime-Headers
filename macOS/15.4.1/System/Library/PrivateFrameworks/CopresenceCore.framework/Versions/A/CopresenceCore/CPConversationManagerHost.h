@interface CPConversationManagerHost : NSObject <TUNeighborhoodActivityConduitDelegate, NSXPCListenerDelegate, CPConversationManagerDataSourceObserver> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ serverBag;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ listenerDeprecated;
    void /* unknown type, empty encoding */ connections;
    void /* unknown type, empty encoding */ clientShouldConnectNotification;
    void /* unknown type, empty encoding */ clientShouldConnectIfCanBypassSharePlayRestrictionNotification;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ pendingEndpointRequests;
    void /* unknown type, empty encoding */ $__lazy_storage_$_protectedStorage;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void)neighborhoodActivityConduit:(id)a0 splitSessionEnded:(id)a1;
- (void)neighborhoodActivityConduit:(id)a0 splitSessionStarted:(id)a1;
- (void)neighborhoodActivityConduit:(id)a0 tvDeviceAppeared:(id)a1;
- (void)neighborhoodActivityConduit:(id)a0 tvDeviceDisappeared:(id)a1;
- (void)conversationManager:(id)a0 activityAuthorizationChangedForBundleIdentifier:(id)a1;
- (void)conversationManager:(id)a0 conversationChanged:(id)a1;
- (void)conversationManager:(id)a0 requestedEndpointWithIdentifier:(id)a1 activitySession:(id)a2 completion:(id /* block */)a3;
- (void)conversationManager:(id)a0 sharePlayAllowedChanged:(BOOL)a1;

@end
