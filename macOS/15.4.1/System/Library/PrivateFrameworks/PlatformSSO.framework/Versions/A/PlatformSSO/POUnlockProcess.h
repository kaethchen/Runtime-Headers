@class POTokenHelper, PODirectoryServices, POAuthPluginProcess;

@interface POUnlockProcess : POLoginProcessBase

@property (retain, nonatomic) PODirectoryServices *directoryServices;
@property (retain, nonatomic) POTokenHelper *tokenHelper;
@property (nonatomic) unsigned int loginUserUid;
@property (readonly, nonatomic) POAuthPluginProcess *userAuthPluginProcess;
@property (readonly, nonatomic) POAuthPluginProcess *systemAuthPluginProcess;

- (void).cxx_destruct;
- (unsigned int)handlePlatformSSOPasswordUnlock;
- (unsigned int)continueWithTokenUnlock;
- (void)createConfigurationManager;
- (void)findUidForUser;
- (unsigned int)handleAuthenticationForNonConsoleUser;
- (unsigned int)handleAuthenticationIsRequired;
- (unsigned int)handleAuthenticationShouldBeAttempted;
- (unsigned int)handlePSSOv1AuthAfterBuiltInAuthenticate;
- (unsigned int)handlePasswordAuthenticationForTemporaryUser;
- (unsigned int)handlePlatformSSOSmartCardUnlock;
- (unsigned int)handlePlatformSSOTouchIDUnlock;
- (unsigned int)handlePlatformSSOUnlock;
- (unsigned int)handlePlatformSSOUserSecureEnclaveKeyUnlock;
- (unsigned int)handleSmartCardAuthenticationForTemporaryUser;
- (unsigned int)handleTokenAuthAfterBuiltInAuthenticate;
- (id)initWithCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 engine:(struct __OpaqueAuthorizationEngine { } *)a1 authenticationCallback:(id /* block */)a2;
- (id)initWithCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 engine:(struct __OpaqueAuthorizationEngine { } *)a1 authenticationCallback:(id /* block */)a2 tokenHelper:(id)a3 directoryServices:(id)a4;
- (BOOL)isPlatformSSOEnabled;
- (void)notifyAgentForNoCredentialAuth;
- (void)notifyAgentForPasswordAuth;
- (void)notifyAgentForSmartCardAuth;
- (void)notifyAgentForTokenAuth;
- (unsigned int)performUnlock;
- (void)setErrorMessageForResult:(unsigned long long)a0 policyError:(BOOL)a1;
- (BOOL)unlockIsForCurrentUser;
- (BOOL)unlockIsForTemporaryUser;

@end
