@class NSString, NSExtension;
@protocol _ASCredentialAuthenticationViewControllerDelegate, ASCredentialRequest;

@interface _ASCredentialAuthenticationViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate> {
    id<ASCredentialRequest> _credentialRequest;
    NSExtension *_extension;
}

@property (weak, nonatomic) id<_ASCredentialAuthenticationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)extension;
- (void)_finishWithCredential:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_finishWithOneTimeCodeCredential:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_finishWithPasskeyAssertionCredential:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_finishWithPasskeyRegistrationCredential:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_nonUIRequestDidRequireUserInteraction;
- (void)_requestDidFailWithError:(id)a0 completion:(id /* block */)a1;
- (id)initWithExtension:(id)a0 credentialIdentity:(id)a1;
- (id)initWithExtension:(id)a0 oneTimeCodeCredentialRequest:(id)a1;
- (id)initWithExtension:(id)a0 passkeyAssertionRequest:(id)a1;
- (id)initWithExtension:(id)a0 passkeyRegistrationRequest:(id)a1 forConditionalRegistration:(BOOL)a2;
- (void)prepareToCompleteOneTimeCodeRequestWithHostContext:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)prepareToCompleteRequestWithHostContext:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)prepareToCompleteRequestWithHostContext:(id)a0 passkeyAssertionCredential:(id)a1 completion:(id /* block */)a2;
- (void)prepareToCompleteRequestWithHostContext:(id)a0 passkeyRegistrationCredential:(id)a1 completion:(id /* block */)a2;

@end
