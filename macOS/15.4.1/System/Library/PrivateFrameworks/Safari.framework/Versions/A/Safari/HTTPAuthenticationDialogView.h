@class NSTextField, NSString, ButtonPlus, NSButton;
@protocol HTTPAuthenticationDialogViewDelegate;

@interface HTTPAuthenticationDialogView : NSView <TabDialogView>

@property (weak, nonatomic) ButtonPlus *logInButton;
@property (weak, nonatomic) ButtonPlus *cancelButton;
@property (weak, nonatomic) NSTextField *title;
@property (weak, nonatomic) NSTextField *securityLabel;
@property (weak, nonatomic) id<HTTPAuthenticationDialogViewDelegate> delegate;
@property (weak, nonatomic) NSTextField *userNameTextField;
@property (weak, nonatomic) NSTextField *passwordTextField;
@property (weak, nonatomic) NSButton *rememberThisPasswordCheckbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)_setUpButtons;
- (void)fadeInWithCompletionHandler:(id /* block */)a0;
- (void)fadeOutWithCompletionHandler:(id /* block */)a0;
- (void)logInButtonPressed:(id)a0;
- (void)setUpUsingConfiguration:(id)a0;

@end
