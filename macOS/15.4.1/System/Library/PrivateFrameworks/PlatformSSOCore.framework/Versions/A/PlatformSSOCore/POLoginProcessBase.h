@class NSString, LAContext, POConfigurationCoreManager, PODeviceConfiguration;

@interface POLoginProcessBase : NSObject

@property (nonatomic) struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *engineCallback;
@property (nonatomic) struct __OpaqueAuthorizationEngine { } *engine;
@property (copy, nonatomic) id /* block */ builtinAuthenticate;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) LAContext *credentialContext;
@property (retain, nonatomic) LAContext *smartCardContext;
@property (retain, nonatomic) LAContext *biometricContext;
@property (readonly, nonatomic) BOOL isSmartCardAuth;
@property (readonly, nonatomic) BOOL isLAAuth;
@property (retain, nonatomic) POConfigurationCoreManager *configurationManager;
@property (readonly, nonatomic) PODeviceConfiguration *deviceConfiguration;
@property (nonatomic) BOOL registrationCompleted;

- (void).cxx_destruct;
- (BOOL)checkPolicyIfPlatformSSOAccount;
- (BOOL)createPasswordCredentialContext;
- (BOOL)checkForUserNameAndDeviceRegistration;
- (BOOL)checkIfUserIsRegistered;
- (BOOL)checkPolicyForAuthBypass:(unsigned long long)a0;
- (id)contextStringWithoutNULL:(const char *)a0;
- (void)createBiometricCredentialContext;
- (void)createConfigurationManager;
- (BOOL)createSmartCardCredentialContext;
- (id)initWithCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 engine:(struct __OpaqueAuthorizationEngine { } *)a1 authenticationCallback:(id /* block */)a2;
- (void)saveValuesInContextForTokenAuth:(id)a0 tokenId:(id)a1;
- (void)setContextBool:(BOOL)a0 withFlags:(unsigned int)a1 forKey:(const char *)a2;
- (BOOL)setContextData:(char *)a0 withSize:(unsigned long long)a1 withFlags:(unsigned int)a2 forKey:(const char *)a3;
- (void)setContextString:(id)a0 withFlags:(unsigned int)a1 forKey:(const char *)a2;
- (void)setContextStringWithNULL:(id)a0 withFlags:(unsigned int)a1 forKey:(const char *)a2;
- (id)contextNSData:(const char *)a0;
- (id)hintNSData:(const char *)a0;
- (id)hintString:(const char *)a0;

@end
