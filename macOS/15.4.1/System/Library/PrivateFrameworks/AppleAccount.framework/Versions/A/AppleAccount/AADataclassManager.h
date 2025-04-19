@class ACAccountStore;
@protocol AAAccountStoreProxyProtocol;

@interface AADataclassManager : NSObject

@property (class, readonly) AADataclassManager *sharedManager;

@property (retain, nonatomic) ACAccountStore *store;
@property (retain, nonatomic) id<AAAccountStoreProxyProtocol> storeProxy;

+ (id)dataclassBundleMap;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountStore:(id)a0;
- (BOOL)_appStatusRestrictsProvisioningForDataclass:(id)a0;
- (void)_buildAutoEnableableDataclassesAndActionsForAccount:(id)a0 dataclassesForEnablement:(id)a1 completion:(id /* block */)a2;
- (id)_filteredDataclassesForAccountClass:(id)a0;
- (BOOL)_hideDataclassWhenAppRemoved:(id)a0;
- (BOOL)_isDataclassSupportedForCurrentRegion:(id)a0;
- (BOOL)_isRestrictedForDataclass:(id)a0 account:(id)a1;
- (id)_nonVisibleServiceDataclass;
- (BOOL)_shouldProvisionNotesForAccount:(id)a0;
- (BOOL)_shouldProvisionRemindersForAccount:(id)a0;
- (BOOL)_shouldShowDataclassWhenAppIsRemoved:(id)a0;
- (BOOL)_shouldVerifyAccountSave;
- (id)_userVisibleDataclasses;
- (id)allowListedDataclassesForAppleAccountClassBasic;
- (id)allowListedDataclassesForAppleAccountClassFull;
- (id)appBundleIdentifierForDataclass:(id)a0;
- (BOOL)canAutoEnableDataclass:(id)a0 forAccount:(id)a1;
- (id)denyListedMacOSDataclasses;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForAccount:(id)a0 completion:(id /* block */)a1;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForDataclasses:(id)a0 fromAccount:(id)a1 completion:(id /* block */)a2;
- (id)filterDataclassesForPossibleAutoEnablementForAccount:(id)a0;
- (id)filteredServerProvidedFeatures:(id)a0 forAccount:(id)a1;
- (BOOL)isDataclassActionSafeForAutoEnablement:(id)a0;
- (BOOL)isSystemAppMCRestrictedOrRemovedForDataclass:(id)a0 forAccount:(id)a1;
- (BOOL)isSystemAppRestrictedOrRemovedForDataclass:(id)a0;
- (BOOL)policyRestrictsDataclass:(id)a0;
- (BOOL)shouldProvisionDataclass:(id)a0 forAccount:(id)a1;

@end
