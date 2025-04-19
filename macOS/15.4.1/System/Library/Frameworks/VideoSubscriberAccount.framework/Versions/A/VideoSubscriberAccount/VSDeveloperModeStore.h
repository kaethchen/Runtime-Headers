@class VSPersistentContainer, NSString, VSRemoteNotifier, NSObject;
@protocol OS_dispatch_queue;

@interface VSDeveloperModeStore : NSObject <VSRemoteNotifierDelegate, VSDeveloperServiceProtocol>

@property (retain, nonatomic) VSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue;
@property (retain, nonatomic) VSRemoteNotifier *serviceChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *settingsChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *providersChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *accountStoreChangeRemoteNotifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_developerIdentityProviderInContext:(id)a0;
- (id)_identityProviderFetchRequest;
- (void)_noteProvidersDidChange;
- (void)_noteServiceDidChange;
- (void)_noteSettingsDidChange;
- (id)_nullableObjectOrNSNull:(id)a0;
- (void)_performIdentityProviderBlock:(id /* block */)a0;
- (void)addDeveloperIdentityProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(id /* block */)a0;
- (void)fetchDeveloperSettingsWithCompletionHandler:(id /* block */)a0;
- (id)legacySettingsPropertiesPath;
- (void)migrateSettingsPropertyFileIfNecessary;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)a0 completionHandler:(id /* block */)a1;
- (id)settingsPropertiesURL;
- (void)updateDeveloperSettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateExistingDeveloperIdentityProvider:(id)a0 completionHandler:(id /* block */)a1;

@end
