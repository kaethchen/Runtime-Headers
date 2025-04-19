@class ASCAgentProxy;

@interface ASAuthorizationWebBrowserPublicKeyCredentialManager : NSObject {
    ASCAgentProxy *_agentProxy;
}

@property (readonly, nonatomic) long long authorizationStateForPlatformCredentials;

- (id)init;
- (void).cxx_destruct;
- (void)corePlatformCredentialsForRelyingParty:(id)a0 completionHandler:(id /* block */)a1;
- (void)platformCredentialsForRelyingParty:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAuthorizationForPublicKeyCredentials:(id /* block */)a0;

@end
