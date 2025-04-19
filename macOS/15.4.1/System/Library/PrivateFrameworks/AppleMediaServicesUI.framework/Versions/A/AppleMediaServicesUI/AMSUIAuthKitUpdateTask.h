@class NSWindow, NSViewController;

@interface AMSUIAuthKitUpdateTask : AMSAuthKitUpdateTask

@property (readonly, getter=getPresentingViewController) NSViewController *presentingViewController;
@property (readonly) NSWindow *presentingWindow;

- (void).cxx_destruct;
- (unsigned long long)_authenticationType;
- (void)_configureAuthKitContext:(id)a0;
- (id)_createAuthKitContext;
- (id)_createAuthKitController;
- (id)_setAppIconImageOnUIProvider:(id)a0;
- (id)initWithAccount:(id)a0 presentingViewController:(id)a1 options:(id)a2;
- (id)initWithAccount:(id)a0 presentingWindow:(id)a1 options:(id)a2;

@end
