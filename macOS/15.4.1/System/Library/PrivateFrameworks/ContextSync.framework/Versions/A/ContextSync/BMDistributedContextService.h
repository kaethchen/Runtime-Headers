@class NSString, BMDistributedContextEventTranslation, IDSService, NSMutableDictionary, NSObject, NSXPCListener, NSUserDefaults, BMDistributedContextSubscriptionManager;
@protocol OS_dispatch_queue, BMDistributedContextSubscriptionStorage;

@interface BMDistributedContextService : NSObject <NSXPCListenerDelegate, IDSServiceDelegate, BMDistributedContextServerProtocol>

@property (retain, nonatomic) IDSService *localService;
@property (retain, nonatomic) IDSService *internetService;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSUserDefaults *subscriptionDefaults;
@property (retain, nonatomic) id<BMDistributedContextSubscriptionStorage> subscriptionStorage;
@property (retain, nonatomic) BMDistributedContextSubscriptionManager *subscriptionManager;
@property (retain, nonatomic) NSMutableDictionary *subscriptionSinks;
@property (retain, nonatomic) BMDistributedContextEventTranslation *eventTranslator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *biomeQueue;
@property (nonatomic) BOOL rebootNotificationDelivered;
@property (retain, nonatomic) NSMutableDictionary *lockedUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)distributedContextManager;
+ (id)stringForIDSDeviceType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)connection:(id)a0 devicesChanged:(id)a1;
- (void)teardownOneOffSubscriptionWithIdentifier:(id)a0 fromSubscribingDevice:(id)a1;
- (void)assertLocalSubscriptionsToDevice:(id)a0 shouldSendIfNoSubscriptions:(BOOL)a1;
- (void)cancelSubscriptionForIdentifier:(id)a0;
- (void)contextChanged:(id)a0 forSubscriptionWithIdentifier:(id)a1;
- (id)devicesWithDeviceType:(long long)a0;
- (void)handleIncomingContextChangeMessage:(id)a0 forDevice:(id)a1;
- (id)idsDeviceForDeviceUUID:(id)a0;
- (void)initializeSinksForRemoteDSLIdentifiers;
- (void)loadSubscriptions;
- (void)logMetricsForMessage:(id)a0 andContext:(id)a1 fromDevice:(id)a2;
- (void)logMetricsForSubscription:(id)a0 uponReboot:(BOOL)a1;
- (void)registerForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 withOptions:(unsigned long long)a3 forDeviceTypes:(long long)a4 withErrorHandler:(id /* block */)a5;
- (void)registerForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 withOptions:(unsigned long long)a3 forDevices:(id)a4 withErrorHandler:(id /* block */)a5;
- (BOOL)registerForUpdates:(id)a0 withIdentifier:(id)a1 withOptions:(unsigned long long)a2 forDeviceTypes:(long long)a3 withError:(id *)a4;
- (BOOL)registerForUpdates:(id)a0 withIdentifier:(id)a1 withOptions:(unsigned long long)a2 forDevices:(id)a3 withError:(id *)a4;
- (BOOL)registerRemoteDSLSubscription:(id)a0 withRemoteIdentifier:(id)a1 withOptions:(unsigned long long)a2 forDevices:(id)a3;
- (id)registerSinkWithIdentifier:(id)a0 withDSL:(id)a1;
- (void)removeAllSubscriptionsForDeadRemoteDevice:(id)a0;
- (void)removeSubscriptionWithIdentifier:(id)a0 fromSubscribingDevice:(id)a1;
- (void)saveRemoteSubscription:(id)a0 fromDevice:(id)a1;
- (BOOL)sendIDSMessageWithContent:(id)a0 asWaking:(BOOL)a1 toDevice:(id)a2 error:(id *)a3;
- (void)subscribeToBiomeWithRemoteDSL:(id)a0 forRemoteIdentifier:(id)a1;
- (BOOL)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDeviceTypes:(long long)a2 withError:(id *)a3;
- (BOOL)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDevices:(id)a2 withError:(id *)a3;
- (void)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 forDeviceTypes:(long long)a3 withErrorHandler:(id /* block */)a4;
- (void)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 forDevices:(id)a3 withErrorHandler:(id /* block */)a4;
- (BOOL)unregisterRemoteDSLSubscription:(id)a0 withRemoteIdentifier:(id)a1 forDevices:(id)a2;
- (void)updateSubscriptionsAfterUnlock;

@end
