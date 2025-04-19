@class NSImageView, NSTextField, NSView, NSSecureTextField, NSWindow;

@interface DKAdminAuthorizationWindowController : NSWindowController

@property (weak) NSTextField *messageTextField;
@property (weak) NSTextField *informationTextField;
@property (weak) NSImageView *imageView;
@property (weak) NSView *authorizationPluginView;
@property (retain) NSView *nameAndPasswordView;
@property (retain) NSWindow *parentWindow;
@property (weak) NSTextField *userNameTextField;
@property (weak) NSSecureTextField *passwordTextField;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)cancelClicked:(id)a0;
- (void)updateView;
- (void)eraseClicked:(id)a0;

@end
