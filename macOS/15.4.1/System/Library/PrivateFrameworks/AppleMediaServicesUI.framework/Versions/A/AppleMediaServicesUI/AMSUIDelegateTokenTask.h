@class AMSProcessInfo, NSViewController;

@interface AMSUIDelegateTokenTask : AMSDelegateTokenTask

@property (readonly) NSViewController *presentingViewController;
@property (retain) AMSProcessInfo *processInfo;

- (void).cxx_destruct;
- (id)perform;
- (id)authenticateTaskWithRequest:(id)a0;
- (id)initWithDelegateAuthenticateRequest:(id)a0 account:(id)a1 presentingViewController:(id)a2;
- (id)initWithDelegateAuthenticateRequest:(id)a0 account:(id)a1 processInfo:(id)a2 presentingViewController:(id)a3;

@end
