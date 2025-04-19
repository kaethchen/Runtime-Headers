@class NSString, POUISmartCardViewController;

@interface POUISmartCardDialog : NSWindowController <POUISmartCardViewControllerDelegate>

@property (retain) POUISmartCardViewController *uiSmartCardViewController;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)showWindow:(id)a0;
- (void)closeDialog;
- (id)initWithUserName:(id)a0 bind:(BOOL)a1;
- (void)presentDialogWithCompletion:(id /* block */)a0;
- (void)presentSheetInWindow:(id)a0 completion:(id /* block */)a1;
- (void)didCompleteWithResult:(unsigned long long)a0 tokenId:(id)a1 tokenHash:(id)a2 wrapTokenHash:(id)a3;

@end
