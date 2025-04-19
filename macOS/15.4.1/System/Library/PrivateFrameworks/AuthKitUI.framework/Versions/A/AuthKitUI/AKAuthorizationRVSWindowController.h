@class AKAuthorizationRVSBootstrapper, AKCredentialRequestContext;

@interface AKAuthorizationRVSWindowController : AKPromptWindowController <AKAuthorizationRVSServiceDelegate>

@property (retain, nonatomic) AKAuthorizationRVSBootstrapper *helper;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) AKCredentialRequestContext *credentialRequestContext;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)_setupWithCompletion:(id /* block */)a0;
- (void)callCompletionWithAuthorization:(id)a0 error:(id)a1;
- (void)presentPromptWithCompletion:(id /* block */)a0;

@end
