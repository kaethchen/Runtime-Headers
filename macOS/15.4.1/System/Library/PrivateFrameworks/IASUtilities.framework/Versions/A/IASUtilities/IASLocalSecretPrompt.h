@class NSTextField, NSString, NSImage, NSLayoutConstraint, NSSecureTextField;
@protocol IASLocalSecretDelegate;

@interface IASLocalSecretPrompt : NSWindowController

@property (weak) NSTextField *userNameLabel;
@property (weak) NSTextField *userNameTextField;
@property (weak) NSSecureTextField *passwordTextField;
@property (weak) NSTextField *messageTextField;
@property (weak) NSLayoutConstraint *messageTextTitleConstraint;
@property (weak) NSLayoutConstraint *messageTextUserNameConstraint;
@property (weak) NSLayoutConstraint *messageTextPasswordConstraint;
@property (weak) NSLayoutConstraint *titleTextUsernameConstraint;
@property (weak) NSLayoutConstraint *usernamePasswordConstraint;
@property (weak) NSLayoutConstraint *titleTextPasswordConstraint;
@property (weak) NSTextField *deprecationMessage;
@property (weak) id<IASLocalSecretDelegate> delegate;
@property (copy) NSString *userFullName;
@property (copy) NSImage *sheetIcon;
@property (copy) NSString *sheetPrompt;
@property (copy) NSString *messageText;
@property (nonatomic) BOOL shouldHideUsername;
@property (copy) NSString *localPassword;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)_updateLayout;
- (void)cancelPasswordPrompt:(id)a0;
- (void)validatePasswordPrompt:(id)a0;

@end
