@class NSString, UNCKeyedObservable;
@protocol UNCNotificationCommonServiceServerProtocol;

@interface UNSRemoteNotificationCategoryRepository : NSObject <UNSNotificationCategoryRepository> {
    id<UNCNotificationCommonServiceServerProtocol> _serviceClient;
    UNCKeyedObservable *_observable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)allBundleIdentifiers;
- (id)initWithServiceClient:(id)a0;
- (id)categoriesForBundleIdentifier:(id)a0;
- (id)categoryWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)notifyDidChangeCategoriesForBundleIdentifier:(id)a0;
- (void)setCategories:(id)a0 forBundleIdentifier:(id)a1;

@end
