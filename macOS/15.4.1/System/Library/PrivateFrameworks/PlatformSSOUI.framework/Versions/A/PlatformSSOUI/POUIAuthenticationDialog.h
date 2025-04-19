@class NSString, POUIAuthenticationViewController;

@interface POUIAuthenticationDialog : NSWindowController <POUIAuthenticationViewControllerDelegate>

@property (retain) POUIAuthenticationViewController *uiAuthViewController;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)showWindow:(id)a0;
- (void)didCompleteWithResult:(unsigned long long)a0;
- (void)closeDialog;
- (id)initWithUserName:(id)a0 agentAuthProcess:(id)a1 syncPassword:(BOOL)a2;
- (void)presentDialogWithCompletion:(id /* block */)a0;
- (void)presentSheetInWindow:(id)a0 completion:(id /* block */)a1;

@end
