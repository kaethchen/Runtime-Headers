@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface UNUserNotificationServiceConnection : NSObject <UNUserNotificationClientProtocol, UNUserNotificationServerProtocol>

@property (retain, nonatomic) NSMutableDictionary *observersByBundleIdentifier;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidate;
- (id)badgeNumberForBundleIdentifier:(id)a0;
- (id)clearedInfoForBundleIdentifier:(id)a0;
- (void)getNotificationTopicsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_queue_addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_didReceiveNotificationResponse:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (void)_queue_removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_willPresentNotification:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)addNotificationRequest:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)deliveredNotificationsForBundleIdentifier:(id)a0;
- (void)didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (void)didReceiveNotificationResponse:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)getBadgeNumberForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationCategoriesForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationSettingsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)invalidateBundleIdentifier:(id)a0;
- (id)notificationCategoriesForBundleIdentifier:(id)a0;
- (id)notificationSettingsForBundleIdentifier:(id)a0;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)a0;
- (id)notificationTopicsForBundleIdentifier:(id)a0;
- (id)pendingNotificationRequestsForBundleIdentifier:(id)a0;
- (void)performBlockOnConnectionQueue:(id /* block */)a0;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeSimilarNotificationRequests:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)replaceContentForRequestWithIdentifier:(id)a0 bundleIdentifier:(id)a1 replacementContent:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setBadgeCount:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setBadgeString:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setNotificationCategories:(id)a0 forBundleIdentifier:(id)a1;
- (void)setNotificationRequests:(id)a0 forBundleIdentifier:(id)a1;
- (void)setNotificationRequests:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setNotificationTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setObservingUserNotifications:(BOOL)a0 forBundleIdentifier:(id)a1;
- (void)willPresentNotification:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
