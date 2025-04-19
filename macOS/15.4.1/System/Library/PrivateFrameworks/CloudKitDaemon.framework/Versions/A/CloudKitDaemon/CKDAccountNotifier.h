@class NSOperationQueue, NSMapTable;

@interface CKDAccountNotifier : NSObject

@property (nonatomic) int accountChangedToken;
@property (retain, nonatomic) NSMapTable *notificationHandlers;
@property (retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue;
@property (getter=isWarmingUp) BOOL warmingUp;

+ (id)sharedNotifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_accountChangeNotificationOperation:(BOOL)a0;
- (void)postAccountChangedNotificationToClients;
- (void)postAccountChangedNotificationWithAccountID:(id)a0 changeType:(long long)a1;
- (void)registerObserver:(id)a0 forAccountChangeNotification:(id /* block */)a1;
- (void)unregisterObserverForAccountChangeNotification:(id)a0;

@end
