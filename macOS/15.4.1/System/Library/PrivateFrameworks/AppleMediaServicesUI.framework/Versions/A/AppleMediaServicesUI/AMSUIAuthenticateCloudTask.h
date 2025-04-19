@class AMSAuthenticateRequest, NSViewController, CDPStateUIController;

@interface AMSUIAuthenticateCloudTask : AMSTask

@property (retain) CDPStateUIController *cdpUIController;
@property (retain) AMSAuthenticateRequest *authRequest;
@property (retain) NSViewController *presentingViewController;

- (void).cxx_destruct;
- (id)_serviceContextWithResults:(id)a0 parentViewController:(id)a1;
- (id)initWithAuthRequest:(id)a0 presentingViewController:(id)a1;
- (id)performAuthenticate;

@end
