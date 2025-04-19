@class NSView, NSButton, InlineAuthorizationViewController;
@protocol AuthorizationSheetViewControllerDelegate;

@interface AuthorizationSheetViewController : NSViewController <InlineAuthorizationViewControllerDelegate>

@property (weak, nonatomic) NSView *authorizationView;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSButton *unlockButton;
@property (readonly, nonatomic) InlineAuthorizationViewController *inlineAuthorizationViewController;
@property (weak, nonatomic) id<AuthorizationSheetViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)cancelAuthentication:(id)a0;
- (void)cancelAuthorization:(id)a0;
- (void)attemptAuthorization:(id)a0;
- (void)controllerAuthorizationDidSucceed:(id)a0;
- (id)initWithInlineAuthorizationViewController:(id)a0;

@end
