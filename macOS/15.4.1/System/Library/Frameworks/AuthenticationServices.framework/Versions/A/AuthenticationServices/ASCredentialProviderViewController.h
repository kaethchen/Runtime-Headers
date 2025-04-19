@class ASCredentialProviderExtensionContext;

@interface ASCredentialProviderViewController : NSViewController

@property (readonly, nonatomic) ASCredentialProviderExtensionContext *extensionContext;

- (void)performPasskeyRegistrationWithoutUserInteractionIfPossible:(id)a0;
- (void)prepareCredentialListForServiceIdentifiers:(id)a0;
- (void)prepareCredentialListForServiceIdentifiers:(id)a0 requestParameters:(id)a1;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceForPasskeyRegistration:(id)a0;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)a0;
- (void)prepareInterfaceToProvideCredentialForRequest:(id)a0;
- (void)prepareOneTimeCodeCredentialListForServiceIdentifiers:(id)a0;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)a0;
- (void)provideCredentialWithoutUserInteractionForRequest:(id)a0;

@end
