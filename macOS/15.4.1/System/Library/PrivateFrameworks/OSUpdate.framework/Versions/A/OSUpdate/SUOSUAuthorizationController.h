@interface SUOSUAuthorizationController : NSObject

@property struct AuthorizationOpaqueRef { } *authorizationForInstalling;
@property struct AuthorizationOpaqueRef { } *authorizationForModifyingPreferences;

+ (id)sharedInstance;

- (BOOL)_allowSoftwareInstallForNonAdminUserMDMInitiated:(BOOL)a0;
- (BOOL)_attemptInteractiveAuthorizationForInstalling;
- (BOOL)_attemptInteractiveAuthorizationForModifyingPreferences;
- (BOOL)_attemptNonInteractiveAuthorizationForInstallingAsStandardUser;
- (BOOL)_attemptNonInteractiveAuthorizationForInstallingMDMInitiated:(BOOL)a0;
- (BOOL)_attemptNonInteractiveAuthorizationForModifyingPreferences;
- (BOOL)_managedPreferenceForKey:(id)a0 domain:(id)a1;
- (BOOL)authorizeForModifyingPreferences;
- (BOOL)authorizeForSoftwareInstall;
- (BOOL)authorizeForSoftwareInstallMDMInitiated:(BOOL)a0;

@end
