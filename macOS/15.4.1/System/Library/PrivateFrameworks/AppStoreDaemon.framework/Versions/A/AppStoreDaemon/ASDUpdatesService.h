@class NSString, ASDServiceBroker, NSObject;
@protocol OS_dispatch_queue;

@interface ASDUpdatesService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    int _storeChangedNotificationToken;
}

@property (class, readonly) BOOL isAutomaticUpdateAuthorizationEnabled;
@property (class, readonly) BOOL areAllAppsAuthorizedForAutomaticUpdates;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultService;
+ (id)registerBadgeCountNotificationBlock:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)autoUpdateEnabled;
- (BOOL)confirmAgentRequestedUpdateAll;
- (void)getManagedUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)getUpdateMetricsEventsWithCompletionBlock:(id /* block */)a0;
- (void)getUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)refreshUpdateCountWithCompletionBlock:(id /* block */)a0;
- (void)refreshUpdateForApp:(long long)a0;
- (void)refreshUpdatesWithCompletionBlock:(id)a0 completionBlock:(id /* block */)a1;
- (id)reloadFromServer;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(id /* block */)a0;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)a0;
- (void)reloadManagedUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)requestAutomaticUpdateAuthorizationIfNecessaryForProcessHandle:(id)a0 completion:(id /* block */)a1;
- (void)setAutoUpdateEnabled:(BOOL)a0;
- (void)shouldUseModernUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)updateAllWithOrder:(id)a0 completionBlock:(id /* block */)a1;

@end
