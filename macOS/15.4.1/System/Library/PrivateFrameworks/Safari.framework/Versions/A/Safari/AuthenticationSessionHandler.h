@class AuthenticationSession;

@interface AuthenticationSessionHandler : NSObject <ASWebAuthenticationSessionWebBrowserSessionHandling> {
    AuthenticationSession *_currentSession;
}

- (void).cxx_destruct;
- (void)beginHandlingWebAuthenticationSessionRequest:(id)a0;
- (void)cancelWebAuthenticationSessionRequest:(id)a0;

@end
