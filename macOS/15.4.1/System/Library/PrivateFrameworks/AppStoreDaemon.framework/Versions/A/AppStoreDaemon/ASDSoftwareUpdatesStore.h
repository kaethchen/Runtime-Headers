@class ASDServiceBroker, NSObject;
@protocol OS_dispatch_queue;

@interface ASDSoftwareUpdatesStore : ASDBaseClient {
    ASDServiceBroker *_serviceBroker;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}

+ (id)registerBadgeCountNotificationBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasEntitlement;
- (BOOL)autoUpdateEnabled;
- (BOOL)confirmAgentRequestedUpdateAll;
- (void)getUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)refreshUpdateCountWithCompletionBlock:(id /* block */)a0;
- (void)refreshUpdatesWithCompletionBlock:(id)a0 completionBlock:(id /* block */)a1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(id /* block */)a0;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)a0;
- (void)reloadManagedUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)setAutoUpdateEnabled:(BOOL)a0;
- (void)shouldUseModernUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)updateAllWithOrder:(id)a0 completionBlock:(id /* block */)a1;

@end
