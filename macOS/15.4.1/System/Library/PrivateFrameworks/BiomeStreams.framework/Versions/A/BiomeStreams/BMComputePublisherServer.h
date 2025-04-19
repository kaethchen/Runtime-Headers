@class NSObject, NSXPCListener, BMComputeSubscriptionMarkerManager, NSXPCInterface, NSString, NSMutableArray, BMComputePublisherStorage;
@protocol OS_dispatch_queue, BMComputePublisherServerDelegate, OS_xpc_event_publisher;

@interface BMComputePublisherServer : NSObject <BMComputePublisher, NSXPCListenerDelegate>

@property (copy, nonatomic) id /* block */ activationCompletion;
@property (readonly, nonatomic) NSMutableArray *subscriptions;
@property (readonly, nonatomic) NSXPCInterface *interface;
@property (readonly, weak, nonatomic) id<BMComputePublisherServerDelegate> delegate;
@property (readonly, nonatomic) BMComputePublisherStorage *systemStorage;
@property (readonly, nonatomic) BMComputePublisherStorage *userStorage;
@property (readonly, nonatomic) BMComputePublisherStorage *storage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_xpc_event_publisher> *publisher;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) BMComputeSubscriptionMarkerManager *subscriptionMarkerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)subscribe:(id)a0;
- (void)_addSubscription:(id)a0;
- (void)_handlePublisherAction:(unsigned int)a0 token:(unsigned long long)a1 descriptor:(id)a2;
- (void)_removeActiveSubscriptionMarkersForSubscription:(id)a0;
- (void)_removeSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (void)_removeSubscriptionWithToken:(unsigned long long)a0;
- (id)initWithQueue:(id)a0 domain:(unsigned long long)a1 delegate:(id)a2;
- (id)initWithQueue:(id)a0 listener:(id)a1 domain:(unsigned long long)a2 delegate:(id)a3 computePublisherStreamName:(id)a4;
- (void)receiveInputForSubscription:(id)a0 streamIdentifier:(id)a1 storeEvent:(id)a2;
- (id)subscriptionsForStream:(id)a0;
- (void)unsubscribeWithIdentifier:(id)a0;

@end
