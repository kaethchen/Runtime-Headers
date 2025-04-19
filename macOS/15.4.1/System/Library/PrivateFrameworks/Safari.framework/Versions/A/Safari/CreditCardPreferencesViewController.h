@class NSWindow, NSString, NSViewController, SecureWindowLockPolicyEnforcer, AuthorizationSheetViewController, CreditCardDataEditor;

@interface CreditCardPreferencesViewController : NSViewController <AuthorizationSheetViewControllerDelegate, SecureWindow, CreditCardDataEditorDelegate> {
    NSViewController *_currentViewController;
}

@property (readonly, nonatomic) CreditCardDataEditor *creditCardDataEditor;
@property (readonly, nonatomic) AuthorizationSheetViewController *authorizationSheetViewController;
@property (readonly, nonatomic) SecureWindowLockPolicyEnforcer *lockPolicyEnforcer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSWindow *windowToSecure;
@property (readonly, nonatomic) BOOL windowToSecureIsMainWindow;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (id)windowWillReturnFieldEditor:(id)a0 toObject:(id)a1;
- (void)_dismissSheet;
- (void)_installViewController:(id)a0;
- (void)_refreshAuthorizationSheetViewController;
- (void)authorizationSheetViewControllerDidSucceed:(id)a0;
- (void)authorizationSheetViewControllerWasCancelled:(id)a0;
- (void)creditCardDataEditorDidFinish:(id)a0;
- (void)lockFromPolicyEnforcer:(id)a0;

@end
