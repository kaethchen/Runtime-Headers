@class NSTextField, NSString, NSPanel, NSSecureTextField, NSImage, NSLayoutConstraint, NSImageView, NSWindow;

@interface CSKAuthenticationController : NSWindowController

@property (retain, nonatomic) NSPanel *passwordAuthenticationSheet;
@property (retain, nonatomic) NSImageView *iconImageView;
@property (retain, nonatomic) NSTextField *messageTitleTextField;
@property (retain, nonatomic) NSTextField *messageDetailTextField;
@property (retain, nonatomic) NSTextField *userNameTextField;
@property (retain, nonatomic) NSSecureTextField *passwordSecureTextField;
@property (retain, nonatomic) NSTextField *passwordLabel;
@property (retain, nonatomic) NSTextField *errorTextField;
@property (retain, nonatomic) NSLayoutConstraint *topSecureTextFieldErrorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topSecureTextFieldMessageConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topErrorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topsecureTextFieldConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topPasswordConstraint;
@property (weak) NSWindow *parentWindow;
@property (retain) NSString *messageTitle;
@property (retain) NSString *messageDetail;
@property (retain) NSImage *iconImage;
@property (getter=isAuthorized) BOOL authorized;

+ (id)sharedAuthenticator;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)closeAuthenticationSheet:(id)a0;
- (void)displayAuthenticationSheetWithCompletionHandler:(id /* block */)a0;
- (id)initAuthenticationSheet:(id)a0;

@end
