@class NSString, UNCKeyedObservable, NSObject;
@protocol UNCNotificationRepositorySettingsProvider, UNCNotificationCommonServiceServerProtocol, UNCNotificationRepositoryDelegate;

@interface UNCRemoteNotificationRepository : NSObject <UNCNotificationRepository> {
    NSObject<UNCNotificationCommonServiceServerProtocol> *_serviceClient;
    UNCKeyedObservable *_observable;
}

@property (weak, nonatomic) id<UNCNotificationRepositoryDelegate> delegate;
@property (weak, nonatomic) id<UNCNotificationRepositorySettingsProvider> settingsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performMigration;
- (id)badgeNumberForBundleIdentifier:(id)a0;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)setBadgeCount:(long long)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setBadgeString:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)allBundleIdentifiers;
- (id)initWithServiceClient:(id)a0;
- (void)removeNotificationRecordsWithNonPushTriggerForBundleIdentifier:(id)a0;
- (void)removeStoreForBundleIdentifier:(id)a0;
- (id)_coreServiceClientOrNilWithWarningForSelector:(SEL)a0;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (id)notificationRecordForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)notificationRecordsForBundleIdentifier:(id)a0;
- (void)notificationSourcesDidInstall:(id)a0;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)notifyDidDiscoverContentOnFirstUnlockForBundleIdentifier:(id)a0;
- (void)notifyDidPerformUpdates:(id)a0 forBundleIdentifier:(id)a1;
- (void)performValidation;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)a0;
- (void)removeInvalidNotificationRecordsForBundleIdentifier:(id)a0;
- (void)removeNotificationRecordsForIdentifiers:(id)a0 bundleIdentifier:(id)a1;
- (void)removeSimilarNotificationRecords:(id)a0 bundleIdentifier:(id)a1;
- (void)saveNotificationRecord:(id)a0 shouldRepost:(BOOL)a1 forBundleIdentifier:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)saveNotificationRecord:(id)a0 targetRevisionNumber:(id)a1 shouldRepost:(BOOL)a2 forBundleIdentifier:(id)a3 withCompletionHandler:(id /* block */)a4;
- (void)saveNotificationRequest:(id)a0 shouldRepost:(BOOL)a1 apsMessageTimestamp:(id)a2 forBundleIdentifier:(id)a3;
- (void)saveNotificationRequest:(id)a0 shouldRepost:(BOOL)a1 withMessage:(id)a2 forBundleIdentifier:(id)a3;

@end
