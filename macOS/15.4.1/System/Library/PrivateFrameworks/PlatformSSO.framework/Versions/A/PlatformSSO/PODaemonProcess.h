@class PODirectoryServices, NSString, NSTimer, POUserGroupManager, SOConfigurationHost, POConfigurationManager, NSXPCConnection;

@interface PODaemonProcess : PODaemonCoreProcess <PODaemonProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (class, retain) NSTimer *syncTimer;
@property (class) BOOL syncPending;

@property BOOL dataVaultInitialized;
@property (retain) PODirectoryServices *directoryServices;
@property (retain) POUserGroupManager *userGroupManager;
@property (retain, nonatomic) POConfigurationManager *configurationManager;
@property (retain, nonatomic) SOConfigurationHost *configurationHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setSyncPending:(BOOL)a0;
+ (id)_prebootSyncQueue;
+ (void)setSyncTimer:(id)a0;
+ (BOOL)syncPending;
+ (id)syncTimer;

- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (void)connectionInvalidated;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (void)_enablePlatformSSORuleForLogin:(id /* block */)a0;
- (void)_syncStorageKit;
- (void)_configurationChanged:(BOOL *)a0 removedExtensionIdentifier:(id *)a1;
- (void)_disablePlatformSSORuleForLogin:(id /* block */)a0;
- (void)_disablePlatformSSORuleForScreensaver:(id /* block */)a0;
- (void)_enablePlatformSSORuleForScreensaver:(id /* block */)a0;
- (void)_handlePrebootDataWithDeviceContiguratonData:(id)a0;
- (void)_notifyAgentconfigurationChanged:(BOOL)a0 removedExtensionIdentifier:(id)a1;
- (BOOL)_removeDeviceConfigurationForIdentifer:(id)a0 syncToPreboot:(BOOL)a1 error:(id *)a2;
- (BOOL)_removeLoginConfigurationForIdentifer:(id)a0 syncToPreboot:(BOOL)a1 error:(id *)a2;
- (BOOL)_removeUserConfigurationForIdentifier:(id)a0 syncToPreboot:(BOOL)a1 error:(id *)a2;
- (BOOL)_saveDeviceConfiguration:(id)a0 identifer:(id)a1 syncToPreboot:(BOOL)a2 error:(id *)a3;
- (BOOL)_saveLoginConfiguration:(id)a0 identifer:(id)a1 syncToPreboot:(BOOL)a2 error:(id *)a3;
- (BOOL)_saveUserConfigurationData:(id)a0 forIdentifier:(id)a1 syncToPreboot:(BOOL)a2 error:(id *)a3;
- (BOOL)_saveUserLoginStateList:(id)a0 error:(id *)a1;
- (BOOL)_setupPrebootKeys;
- (BOOL)_updateGroupForRight:(id)a0 newGroup:(id)a1;
- (void)addLocalUser:(id)a0 toLocalGroup:(id)a1 completion:(id /* block */)a2;
- (void)addPlatformSSOToSearchPolicyWithCompletion:(id /* block */)a0;
- (void)bindTokenForUsername:(id)a0 hash:(id)a1 wrapHash:(id)a2 tokenId:(id)a3 passwordContext:(id)a4 completion:(id /* block */)a5;
- (void)changePasswordForUser:(id)a0 passwordContext:(id)a1 secureToken:(id)a2 secureTokenPasswordContext:(id)a3 completion:(id /* block */)a4;
- (void)changePasswordUsingBootstrapTokenForUser:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)createAppSSOCachePathWithCompletion:(id /* block */)a0;
- (void)createOrUpdateAdminGroups:(id)a0 authorizationGroups:(id)a1 previousAuthorizationGroups:(id)a2 otherGroups:(id)a3 completion:(id /* block */)a4;
- (void)createOrUpdateUser:(id)a0 completion:(id /* block */)a1;
- (void)createPlatformSSOAdminGroupWithCompletion:(id /* block */)a0;
- (void)createTemporaryUser:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)createUser:(id)a0 passwordContext:(id)a1 name:(id)a2 loginUserName:(id)a3 idpIdentifier:(id)a4 isAdmin:(BOOL)a5 groupMembership:(id)a6 completion:(id /* block */)a7;
- (void)disablePlatformSSORules:(id /* block */)a0;
- (void)enablePlatformSSORules:(id /* block */)a0;
- (void)findUserWithName:(id)a0 completion:(id /* block */)a1;
- (void)getAllUsersWithCompletion:(id /* block */)a0;
- (void)handleAuthRights;
- (void)handleConfigurationChanged;
- (void)handleMigration:(BOOL)a0;
- (void)handlePrebootData;
- (void)handleStartup;
- (void)migrateConfiguration:(BOOL)a0 completion:(id /* block */)a1;
- (void)notifyStorageKit;
- (void)removeDeviceConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)removeLocalUser:(id)a0 fromLocalGroup:(id)a1 completion:(id /* block */)a2;
- (void)removeLoginConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)removePlatformSSOAdminGroupWithCompletion:(id /* block */)a0;
- (void)removePlatformSSOFromSearchPolicyWithCompletion:(id /* block */)a0;
- (void)removePlatformSSOUser:(id)a0 completion:(id /* block */)a1;
- (void)removePrebootDirectory;
- (void)removeUserConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeUserWithName:(id)a0 completion:(id /* block */)a1;
- (void)resetStoredConfigurationWithCompletion:(id /* block */)a0;
- (void)resetTemporaryAccount;
- (void)resetTemporaryAccount:(id /* block */)a0;
- (void)saveAltSecurityIdentity:(id)a0 forIdentifier:(id)a1;
- (void)saveAppSSOConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)saveDeviceConfiguration:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)saveDeviceConfigurationSyncAllConfigToPreboot:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)saveLoginConfiguration:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)savePlatformSSOUniqueIdentifier:(id)a0 forUser:(id)a1 completion:(id /* block */)a2;
- (void)saveUserConfiguration:(id)a0 forIdentifier:(id)a1 syncToPreboot:(BOOL)a2 completion:(id /* block */)a3;
- (void)saveUserConfigurationData:(id)a0 forIdentifier:(id)a1 syncToPreboot:(BOOL)a2 completion:(id /* block */)a3;
- (void)setGroups:(id)a0 forLocalUser:(id)a1 completion:(id /* block */)a2;
- (void)setGroups:(id)a0 forPlatformSSOUser:(id)a1 completion:(id /* block */)a2;
- (void)unbindTokenForAllUsersWithCompletion:(id /* block */)a0;
- (void)unbindTokenForUsername:(id)a0 hash:(id)a1 completion:(id /* block */)a2;
- (void)updateTemporaryAccountName:(id)a0 altSecurityIdentity:(id)a1 completion:(id /* block */)a2;

@end
