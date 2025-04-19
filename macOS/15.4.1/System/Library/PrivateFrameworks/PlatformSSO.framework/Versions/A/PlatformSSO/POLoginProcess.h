@class POTokenHelper, PODirectoryServices, POAuthPluginProcess;

@interface POLoginProcess : POLoginProcessBase

@property (retain, nonatomic) PODirectoryServices *directoryServices;
@property (retain, nonatomic) POTokenHelper *tokenHelper;
@property (readonly, nonatomic) POAuthPluginProcess *systemAuthPluginProcess;

- (void).cxx_destruct;
- (BOOL)localUserExists;
- (unsigned int)handlePlatformSSOSmartCardLogin;
- (unsigned int)authenticateTemporaryPasswordUser;
- (unsigned int)authenticateTemporarySmartCardUser;
- (unsigned int)continueWithTokenUnlock;
- (void)createConfigurationManager;
- (unsigned int)createNewPasswordUser;
- (unsigned int)createNewSmartCardUser;
- (unsigned int)handleAuthenticationIsRequired;
- (unsigned int)handleAuthenticationShouldBeAttempted;
- (unsigned int)handleContinueFileVaultUnlock;
- (unsigned int)handlePlatformSSOLogin;
- (unsigned int)handlePlatformSSOPasswordLogin;
- (unsigned int)handleTokenAuthAfterBuiltInAuthenticate;
- (id)initWithCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 engine:(struct __OpaqueAuthorizationEngine { } *)a1 authenticationCallback:(id /* block */)a2;
- (id)initWithCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 engine:(struct __OpaqueAuthorizationEngine { } *)a1 authenticationCallback:(id /* block */)a2 tokenHelper:(id)a3 directoryServices:(id)a4;
- (BOOL)isPlatformSSOEnabled;
- (unsigned int)performLogin;
- (void)saveValuesInContextForPasswordAuth;
- (void)saveValuesInContextForSmartCardAuth;
- (void)setErrorMessageForResult:(unsigned long long)a0 policyError:(BOOL)a1;
- (void)setSystemAuthPluginProcess:(id)a0;
- (BOOL)shouldContinueFileVaultUnlockTokenUnlock;
- (BOOL)shouldCreateNewUser;

@end
