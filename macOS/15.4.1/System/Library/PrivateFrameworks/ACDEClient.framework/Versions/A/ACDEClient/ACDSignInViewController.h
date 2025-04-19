@class NSTextField, NSImageView, NSString, NSProgressIndicator, NSButton;
@protocol ACDESignInDialogDelegate;

@interface ACDSignInViewController : ACDBaseViewController <ACDESignInDialogProtocol>

@property (nonatomic) NSTextField *userNameField;
@property (nonatomic) NSTextField *passwordField;
@property (nonatomic) NSTextField *titleField;
@property (nonatomic) NSTextField *descriptionField;
@property (nonatomic) NSButton *rememberMeButton;
@property (nonatomic) NSButton *signinButton;
@property (nonatomic) NSButton *cancelButton;
@property (nonatomic) NSProgressIndicator *progressIndicator;
@property (nonatomic) NSButton *forgotIDButton;
@property (nonatomic) NSButton *forgotPasswordButton;
@property (nonatomic) NSImageView *logoImageView;
@property id<ACDESignInDialogDelegate> delegate;
@property (retain, nonatomic) NSString *requestedUserName;
@property (readonly) NSString *userNameString;
@property NSString *passwordString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)cancel:(id)a0;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)showHelp:(id)a0;
- (id)passwordFormatter;
- (void)forgotPassword:(id)a0;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)signIn:(id)a0;
- (BOOL)canSignIn;
- (void)createAppleID:(id)a0;
- (BOOL)deletePasswordFromKeychain;
- (void)disableControls:(BOOL)a0;
- (void)fetchKeychainPasswordForUser:(id)a0;
- (void)forgotAppleID:(id)a0;
- (void)rememberPassword:(id)a0;
- (void)setMessage:(id)a0 type:(unsigned long long)a1;
- (id)userNameFormatter;
- (void)validateSignInButton;

@end
