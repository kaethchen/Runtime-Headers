@class NSString, NSXPCConnection;

@interface POServiceLoginManagerConnection : NSObject <POServiceLoginManagerProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property unsigned int uid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)_connectToService;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)a0;
- (id)initWithUid:(unsigned int)a0;
- (void)isUserRegisteredWithCompletion:(id /* block */)a0;
- (void)rotateKeyForKeyType:(long long)a0 completion:(id /* block */)a1;
- (void)attestKey:(long long)a0 pending:(BOOL)a1 clientDataHash:(id)a2 completion:(id /* block */)a3;
- (void)completeRotationKeyForKeyType:(long long)a0 completion:(id /* block */)a1;
- (void)deviceRegistrationsNeedsRepairWithCompletion:(id /* block */)a0;
- (void)isDeviceRegisteredWithCompletion:(id /* block */)a0;
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
