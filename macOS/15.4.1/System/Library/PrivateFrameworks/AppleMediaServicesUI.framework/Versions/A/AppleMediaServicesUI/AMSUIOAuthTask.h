@class NSViewController, NSString, NSURL, ASWebAuthenticationSessionCallback;

@interface AMSUIOAuthTask : AMSTask <ASWebAuthenticationPresentationContextProviding>

@property (retain) NSURL *oAuthURL;
@property (retain) ASWebAuthenticationSessionCallback *callback;
@property (retain) NSViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)performTask;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (id)initWithOAuthURL:(id)a0 customScheme:(id)a1 presentingViewController:(id)a2;
- (id)initWithOAuthURL:(id)a0 host:(id)a1 path:(id)a2 presentingViewController:(id)a3;

@end
