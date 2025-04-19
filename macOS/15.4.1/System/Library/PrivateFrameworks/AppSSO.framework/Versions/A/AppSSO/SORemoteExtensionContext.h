@class SOExtensionViewService, NSString, NSMapTable, ASAuthorizationProviderExtensionLoginManager, SOExtensionServiceConnection;
@protocol ASAuthorizationProviderExtensionAuthorizationRequestHandler, POExtensionRegistrationProtocol, ASAuthorizationProviderExtensionRegistrationHandler;

@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext> {
    SOExtensionServiceConnection *_extensionServiceConnection;
    id<ASAuthorizationProviderExtensionAuthorizationRequestHandler, POExtensionRegistrationProtocol> _extensionAuthorizationRequestHandler;
    id /* block */ _finishAuthorizationCompletion;
    NSMapTable *_requests;
}

@property (copy) id /* block */ registrationCompletion;
@property (copy) id /* block */ rotationCompletion;
@property (weak) SOExtensionViewService *viewService;
@property (readonly, nonatomic) id<ASAuthorizationProviderExtensionAuthorizationRequestHandler, ASAuthorizationProviderExtensionRegistrationHandler, POExtensionRegistrationProtocol> extensionViewController;
@property (readonly, nonatomic) ASAuthorizationProviderExtensionLoginManager *extensionLoginManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)finishAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)_disableAppSSOInCFNetwork;
- (id)authorizationRequestHandlerWithRequestParameters:(id)a0 error:(id *)a1;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)beginDeviceRegistrationUsingOptions:(long long)a0 extensionData:(id)a1 completion:(id /* block */)a2;
- (void)beginUserRegistrationUsingUserName:(id)a0 authenticationMethod:(int)a1 options:(long long)a2 extensionData:(id)a3 completion:(id /* block */)a4;
- (BOOL)canOpenURL:(id)a0;
- (void)canPerformRegistrationCompletion:(id /* block */)a0;
- (void)completeFinishAuthorization:(id)a0 error:(id)a1;
- (id)extensionAuthorizationRequestHandlerWithError:(id *)a0;
- (id)findRequestForIdentifier:(id)a0;
- (id)hostContextWithError:(id *)a0;
- (void)keyWillRotateForKeyType:(long long)a0 keyProxyEndpoint:(id)a1 extensionData:(id)a2 completion:(id /* block */)a3;
- (void)protocolVersionCompletion:(id /* block */)a0;
- (void)registrationDidCancelWithCompletion:(id /* block */)a0;
- (void)registrationDidCompleteWithCompletion:(id /* block */)a0;
- (void)removeRequestForIdentifier:(id)a0;
- (void)saveRequest:(id)a0 forIdentifier:(id)a1;
- (void)supportedDeviceEncryptionAlgorithmsCompletion:(id /* block */)a0;
- (void)supportedDeviceSigningAlgorithmsCompletion:(id /* block */)a0;
- (void)supportedGrantTypesCompletion:(id /* block */)a0;
- (void)supportedUserSecureEnclaveKeySigningAlgorithmsCompletion:(id /* block */)a0;
- (id)synchronousHostContextWithError:(id *)a0;

@end
