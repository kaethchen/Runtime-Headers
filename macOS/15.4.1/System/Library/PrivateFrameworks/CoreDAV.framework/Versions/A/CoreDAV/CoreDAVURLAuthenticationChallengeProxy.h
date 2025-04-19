@class NSString, NSURLAuthenticationChallenge;

@interface CoreDAVURLAuthenticationChallengeProxy : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLAuthenticationChallenge *_proxiedChallenge;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (id)sender;
- (void)cancelAuthenticationChallenge:(id)a0;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (id)initWithChallenge:(id)a0 completionHandler:(id /* block */)a1;

@end
