@interface POLoginUserCore : NSObject

- (id)init;
- (unsigned int)performPlatformSSOAuthenticate:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 engine:(struct __OpaqueAuthorizationEngine { } *)a1 authenticationCallback:(id /* block */)a2;
- (BOOL)bypassLoginPolicyForUserName:(id)a0 volume:(id)a1 contextData:(id)a2;

@end
