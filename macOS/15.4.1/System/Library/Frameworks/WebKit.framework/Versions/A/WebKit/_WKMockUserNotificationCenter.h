@class NSObject;
@protocol OS_dispatch_queue;

@interface _WKMockUserNotificationCenter : NSObject {
    NSObject<OS_dispatch_queue> *m_queue;
    BOOL m_hasPermission;
    struct RetainPtr<NSString> { void *m_ptr; } m_bundleIdentifier;
    struct RetainPtr<NSMutableArray> { void *m_ptr; } m_notifications;
    struct RetainPtr<NSNumber> { void *m_ptr; } m_appBadge;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)a0;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)setNotificationCategories:(id)a0;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)notificationSettings;
- (id)_internalInitWithBundleIdentifier:(id)a0;
- (id)getAppBadgeForTesting;

@end
