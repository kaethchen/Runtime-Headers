@interface UserNotificationsCore.NotificationCoreServiceConnection : NSObject <UNCNotificationCoreServiceServerProtocol> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ notificationRepository;
    void /* unknown type, empty encoding */ categoryRepository;
    void /* unknown type, empty encoding */ delegate;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)badgeNumberForBundleIdentifier:(id)a0;
- (void)removeNotificationRecordsWithNonPushTriggerForBundleIdentifier:(id)a0;
- (void)removeStoreForBundleIdentifier:(id)a0;
- (id)allBundleIdentifiersForCategories;
- (id)allBundleIdentifiersForNotifications;
- (id)categoriesForBundleIdentifier:(id)a0;
- (id)categoryForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)categoryRepositoryDidChangeCategoriesForBundleIdentifier:(id)a0;
- (id)notificationRecordForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)notificationRecordsForBundleIdentifier:(id)a0;
- (void)notificationRepositoryDidPerformUpdates:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)a0;
- (void)removeInvalidNotificationRecordsForBundleIdentifier:(id)a0;
- (void)removeNotificationRecordsForIdentifiers:(id)a0 bundleIdentifier:(id)a1;
- (void)removeSimilarNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (void)saveNotificationRecord:(id)a0 targetRevisionNumber:(id)a1 shouldRepost:(id)a2 forBundleIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)saveNotificationRequest:(id)a0 shouldRepost:(id)a1 apsMessageTimestamp:(id)a2 forBundleIdentifier:(id)a3;
- (void)setBadgeCount:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setBadgeString:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setCategories:(id)a0 forBundleIdentifier:(id)a1;

@end
