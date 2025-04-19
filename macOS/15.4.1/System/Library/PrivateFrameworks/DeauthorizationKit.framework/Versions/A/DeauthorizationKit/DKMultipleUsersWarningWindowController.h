@class NSImageView, NSTextField, NSView, NSButton, NSWindow;

@interface DKMultipleUsersWarningWindowController : NSWindowController

@property (weak) NSTextField *messageTextField;
@property (weak) NSTextField *informationTextField;
@property (weak) NSImageView *imageView;
@property (weak) NSTextField *userNameField;
@property (weak) NSTextField *passwordField;
@property (weak) NSTextField *passwordTitleField;
@property void *mMechanismRef;
@property (weak) NSView *authorizationPluginView;
@property (retain) NSView *nameAndPasswordView;
@property (weak) NSButton *cancelButton;
@property (weak) NSButton *switchUserButton;
@property (weak) NSButton *authorizationLogOutButton;
@property (retain) NSWindow *parentWindow;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)cancelClicked:(id)a0;
- (void)authenticate;
- (void)_showError:(int)a0;
- (struct AuthorizationValue { unsigned long long x0; void *x1; } *)AuthorizationValueFromString:(const char *)a0;
- (id)StringFromAuthorizationValue:(struct AuthorizationValue { unsigned long long x0; void *x1; } *)a0;
- (void)logoutClicked:(id)a0;
- (void)showError:(int)a0 orWarning:(int)a1;
- (void)switchUser:(id)a0;
- (void)updateViewLayout;

@end
