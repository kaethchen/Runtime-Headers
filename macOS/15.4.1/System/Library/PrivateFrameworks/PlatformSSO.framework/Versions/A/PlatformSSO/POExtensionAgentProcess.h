@class SOConfigurationHost, NSString, NSXPCConnection, POKeychainHelper, NSMutableDictionary, POConfigurationManager, NSObject, NSMutableArray, NSNumber, POAgentAuthenticationProcess;

@interface POExtensionAgentProcess : NSObject <POServiceLoginManagerProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (retain) POConfigurationManager *configurationManager;
@property (retain) POAgentAuthenticationProcess *agentProcess;
@property (retain) NSMutableArray *keyProxies;
@property (retain) NSObject *authenticationObserver;
@property (copy) id /* block */ authenticationCompletion;
@property (retain) SOConfigurationHost *configurationHost;
@property (retain) POKeychainHelper *keychainHelper;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *pendingEncryptionKey;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *pendingSigningKey;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *pendingUserSEPKey;
@property (retain) NSNumber *pendingEncryptionAlgorithm;
@property (retain) NSNumber *pendingSigningAlgorithm;
@property (retain) NSNumber *pendingUserSEPSigningAlgorithm;
@property (retain) NSMutableDictionary *_analytics;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (void)connectionInvalidated;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)a0;
- (id)bundleIdentiferForXPCConnection:(id)a0;
- (void)isUserRegisteredWithCompletion:(id /* block */)a0;
- (void)rotateKeyForKeyType:(long long)a0 completion:(id /* block */)a1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)_keyForKeyType:(long long)a0 error:(id *)a1;
- (void)addEvent:(id)a0 forKeyType:(long long)a1;
- (void)attestKey:(long long)a0 pending:(BOOL)a1 clientDataHash:(id)a2 completion:(id /* block */)a3;
- (void)completeRotationKeyForKeyType:(long long)a0 completion:(id /* block */)a1;
- (void)deviceRegistrationsNeedsRepairWithCompletion:(id /* block */)a0;
- (id)identityForKeyType:(long long)a0;
- (id)initWithXPCConnection:(id)a0 authenticationProcess:(id)a1;
- (void)invalidateAllKeyProxies;
- (BOOL)isCallerCurrentSSOExtension;
- (void)isDeviceRegisteredWithCompletion:(id /* block */)a0;
- (BOOL)isURL:(id)a0 validForProfile:(id)a1;
- (id)keyProxyEndpointForKeyType:(long long)a0;
- (void)loginConfigurationWithCompletion:(id /* block */)a0;
- (void)loginUserNameWithCompletion:(id /* block */)a0;
- (void)registrationTokenWithCompletion:(id /* block */)a0;
- (void)resetDeviceKeysWithCompletion:(id /* block */)a0;
- (void)resetUserSecureEnclaveKeyWithCompletion:(id /* block */)a0;
- (void)secIdentityProxyEndpointForKeyType:(long long)a0 completion:(id /* block */)a1;
- (void)secKeyProxyEndpointForKeyType:(long long)a0 completion:(id /* block */)a1;
- (void)setCertificateData:(id)a0 keyType:(long long)a1 completion:(id /* block */)a2;
- (void)setLoginConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)setLoginUserName:(id)a0 completion:(id /* block */)a1;
- (void)setRegistrationToken:(id)a0 completion:(id /* block */)a1;
- (void)setSsoTokens:(id)a0 completion:(id /* block */)a1;
- (void)setUserLoginConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)ssoTokensWithCompletion:(id /* block */)a0;
- (void)userLoginConfigurationWithCompletion:(id /* block */)a0;
- (void)userRegistrationsNeedsRepairWithCompletion:(id /* block */)a0;

@end
