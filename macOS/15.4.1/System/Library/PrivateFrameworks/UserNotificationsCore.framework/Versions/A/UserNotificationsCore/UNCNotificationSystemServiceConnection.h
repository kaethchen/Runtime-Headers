@class BSServiceConnection;
@protocol UNCNotificationSystemServiceListenerDelegate, BSServiceConnectionHost, UNCNotificationSystemServiceConnectionDelegate;

@interface UNCNotificationSystemServiceConnection : NSObject <UNCNotificationSystemServiceServerProtocol> {
    id<UNCNotificationSystemServiceConnectionDelegate> _connectionDelegate;
    id<UNCNotificationSystemServiceListenerDelegate> _delegate;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)badgeNumberForBundleIdentifier:(id)a0;
- (id)allBundleIdentifiersForCategories;
- (id)categoriesForBundleIdentifier:(id)a0;
- (id)categoryForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (oneway void)categoryRepositoryDidChangeCategoriesForBundleIdentifier:(id)a0;
- (id)initWithConnection:(id)a0 connectionDelegate:(id)a1 delegate:(id)a2;
- (BOOL)isApplicationForeground:(id)a0;
- (oneway void)notificationRepositoryDidDiscoverContentOnFirstUnlockForBundleIdentifier:(id)a0;
- (oneway void)notificationRepositoryDidPerformUpdates:(id)a0 forBundleIdentifier:(id)a1;
- (oneway void)pendingNotificationRepositoryDidPerformUpdates:(id)a0 forBundleIdentifier:(id)a1;
- (oneway void)removeNotificationRecordsForIdentifiers:(id)a0 bundleIdentifier:(id)a1;
- (BOOL)setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1;
- (BOOL)setBadgeString:(id)a0 forBundleIdentifier:(id)a1;
- (oneway void)setCategories:(id)a0 forBundleIdentifier:(id)a1;
- (oneway void)topicRepositoryDidChangeTopicsForBundleIdentifier:(id)a0;
- (oneway void)willPresentNotification:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
