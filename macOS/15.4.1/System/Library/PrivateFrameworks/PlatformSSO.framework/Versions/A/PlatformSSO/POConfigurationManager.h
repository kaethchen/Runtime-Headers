@class NSDate, NSString, PODaemonConnection, POKeychainHelper, POLoginConfiguration, PODeviceConfiguration, POUserConfiguration, PODirectoryServices, POConfigurationVersion;

@interface POConfigurationManager : POConfigurationCoreManager {
    PODaemonConnection *_serviceConnection;
    POUserConfiguration *_currentUserConfiguration;
    POLoginConfiguration *_currentLoginConfiguration;
    PODeviceConfiguration *_currentDeviceConfiguration;
}

@property (retain) PODirectoryServices *directoryServices;
@property (readonly) NSString *userIdentifier;
@property (retain) POConfigurationVersion *userConfigurationVersion;
@property (retain) POConfigurationVersion *loginConfigurationVersion;
@property (retain) POConfigurationVersion *deviceConfigurationVersion;
@property (retain) POKeychainHelper *keychainHelper;
@property (readonly) NSDate *tokenExpiration;
@property (readonly) NSDate *tokenReceived;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)deviceConfiguration;
- (id)currentRefreshToken;
- (id)loginConfiguration;
- (id)initWithUserName:(id)a0;
- (void)enablePlatformSSORulesIfNeeded:(id /* block */)a0;
- (void)restorePlatformSSORulesIfNeeded;
- (BOOL)removeLocalUser:(id)a0 fromLocalGroup:(id)a1;
- (BOOL)__removeDeviceConfigurationWithIdentifier:(id)a0;
- (BOOL)__removeLoginConfigurationForIdentifier:(id)a0;
- (BOOL)addLocalUser:(id)a0 toLocalGroup:(id)a1;
- (BOOL)addPlatformSSOToSearchPolicyReturningError:(id *)a0;
- (BOOL)bindTokenForUsername:(id)a0 hash:(id)a1 wrapHash:(id)a2 tokenId:(id)a3 passwordContext:(id)a4 returningError:(id *)a5;
- (id)calculateExpirationForTokens:(id)a0;
- (BOOL)createAppSSOCachePath;
- (BOOL)createOrUpdateAdminGroups:(id)a0 authorizationGroups:(id)a1 previousAuthorizationGroups:(id)a2 otherGroups:(id)a3;
- (BOOL)createPlatformSSOAdminGroupReturningError:(id *)a0;
- (BOOL)createTemporaryUser:(id)a0 passwordContext:(id)a1;
- (BOOL)createTemporaryUserLocalAccount:(id)a0;
- (unsigned long long)createUser:(id)a0 passwordContext:(id)a1 name:(id)a2 loginUserName:(id)a3 idpIdentifier:(id)a4 isAdmin:(BOOL)a5 groupMembership:(id)a6 returningCreatedUserName:(id *)a7;
- (id)currentDeviceConfiguration;
- (id)currentLoginConfiguration;
- (id)currentUserConfiguration;
- (BOOL)forceChangePasswordForUser:(id)a0 passwordContext:(id)a1 error:(id *)a2;
- (BOOL)forceChangePasswordUsingBootstrapTokenForUser:(id)a0 passwordContext:(id)a1 error:(id *)a2;
- (void)handleUpdatingGroupsAndAuthorizationForProfile:(id)a0 deviceConfiguration:(id)a1;
- (id)initWithUserName:(id)a0 directoryServices:(id)a1 sharedOnly:(BOOL)a2;
- (id)refreshTokenFromTokens:(id)a0;
- (BOOL)removeDeviceConfiguration;
- (BOOL)removeLoginConfiguration;
- (BOOL)removePlatformSSOAdminGroupReturningError:(id *)a0;
- (BOOL)removePlatformSSOFromSearchPolicyReturningError:(id *)a0;
- (BOOL)removeUserConfigurationForUserName:(id)a0;
- (BOOL)removeUserDeviceConfiguration;
- (BOOL)removeUserLoginConfiguration;
- (BOOL)resetStoredConfiguration;
- (void)resetTemporaryAccount;
- (BOOL)saveAppSSOConfiguration:(id)a0;
- (BOOL)saveCurrentUserConfigurationAndSyncToPreboot:(BOOL)a0;
- (BOOL)saveDeviceConfiguration:(id)a0;
- (BOOL)saveDeviceConfigurationSyncAllConfigToPreboot:(id)a0;
- (BOOL)saveLoginConfiguration:(id)a0;
- (BOOL)savePlatformSSOUniqueIdentifier:(id)a0 forUser:(id)a1;
- (BOOL)saveUserConfiguration:(id)a0 forUserName:(id)a1 syncToPreboot:(BOOL)a2;
- (BOOL)setGroups:(id)a0 forLocalUser:(id)a1 returningError:(id *)a2;
- (BOOL)setGroups:(id)a0 forPlatformSSOUser:(id)a1 returningError:(id *)a2;
- (BOOL)setTokens:(id)a0 extensionIdentifier:(id)a1 returningError:(id *)a2;
- (id)tokensForExtensionIdentifier:(id)a0;
- (BOOL)unbindTokenForCurrentUser;
- (BOOL)unbindTokenForUsername:(id)a0 hash:(id)a1 returningError:(id *)a2;
- (void)unbindTokensForAllUsers;
- (BOOL)updateTemporaryAccountName:(id)a0 altSecurityIdentity:(id)a1;
- (id)userConfigurationForUserName:(id)a0;
- (id)userDeviceConfiguration;

@end
