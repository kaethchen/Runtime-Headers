@class NSString, UNCNotificationCoreServiceClientImpl;
@protocol UNCNotificationCoreServiceClientDelegate;

@interface UNCNotificationCoreServiceClient : NSObject <UNCNotificationRepositoryObserver, UNSNotificationCategoryRepositoryObserver, UNCNotificationCommonServiceServerProtocol> {
    UNCNotificationCoreServiceClientImpl *_client;
}

@property (weak, nonatomic) id<UNCNotificationCoreServiceClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)badgeNumberForBundleIdentifier:(id)a0;
- (void)removeNotificationRecordsWithNonPushTriggerForBundleIdentifier:(id)a0;
- (void)removeStoreForBundleIdentifier:(id)a0;
- (id)allBundleIdentifiersForCategories;
- (id)allBundleIdentifiersForNotifications;
- (id)categoriesForBundleIdentifier:(id)a0;
- (id)categoryForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)categoryRepository:(id)a0 didChangeCategoriesForBundleIdentifier:(id)a1;
- (oneway void)categoryRepositoryDidChangeCategoriesForBundleIdentifier:(id)a0;
- (id)notificationRecordForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)notificationRecordsForBundleIdentifier:(id)a0;
- (void)notificationRepository:(id)a0 didPerformUpdates:(id)a1 forBundleIdentifier:(id)a2;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)a0;
- (void)removeInvalidNotificationRecordsForBundleIdentifier:(id)a0;
- (oneway void)removeNotificationRecordsForIdentifiers:(id)a0 bundleIdentifier:(id)a1;
- (void)removeSimilarNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (void)saveNotificationRecord:(id)a0 targetRevisionNumber:(id)a1 shouldRepost:(BOOL)a2 forBundleIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)saveNotificationRequest:(id)a0 shouldRepost:(BOOL)a1 apsMessageTimestamp:(id)a2 forBundleIdentifier:(id)a3;
- (void)setBadgeCount:(long long)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setBadgeString:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)setCategories:(id)a0 forBundleIdentifier:(id)a1;

@end
