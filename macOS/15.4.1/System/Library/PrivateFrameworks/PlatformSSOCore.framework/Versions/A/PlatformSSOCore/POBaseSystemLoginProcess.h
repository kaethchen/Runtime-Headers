@class POTokenHelper, POAuthPluginCoreProcess;

@interface POBaseSystemLoginProcess : POLoginProcessBase

@property (retain, nonatomic) POTokenHelper *tokenHelper;
@property (readonly, nonatomic) POAuthPluginCoreProcess *coreAuthPluginProcess;

- (void).cxx_destruct;
- (void)createConfigurationManager;
- (unsigned int)handleAuthenticationIsRequired;
- (unsigned int)handleAuthenticationShouldBeAttempted;
- (unsigned int)handlePlatformSSOLogin;
- (unsigned int)handleTokenAuthAfterBuiltInAuthenticate;
- (id)initWithCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 engine:(struct __OpaqueAuthorizationEngine { } *)a1 authenticationCallback:(id /* block */)a2;
- (unsigned int)performLogin;
- (void)setErrorMessageForResult:(unsigned long long)a0 policyError:(BOOL)a1;
- (BOOL)isUserInBackoff;
- (unsigned int)attemptTokenUnlock;
- (id)initWithCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 engine:(struct __OpaqueAuthorizationEngine { } *)a1 authenticationCallback:(id /* block */)a2 tokenHelper:(id)a3;
- (void)setCoreAuthPluginProcess:(id)a0;

@end
