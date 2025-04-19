@class NSAlert, NSView, SFAuthorizationView, ODCServersViewController, NSTextField, NSSecureTextField, NSProgressIndicator, ODCUnbindFromADAction, NSButton, NSWindow;

@interface ODCUnbindFromADSheetController : NSObject {
    NSWindow *_docWindow;
    SFAuthorizationView *_authView;
    ODCServersViewController *_serversViewController;
    NSWindow *_sheet;
    NSAlert *_alert;
    NSButton *_removeButton;
    NSButton *_cancelButton;
    NSView *_accessoryView;
    NSTextField *_adminName;
    NSSecureTextField *_adminPass;
    NSProgressIndicator *_spinner;
    NSTextField *_progressLabel;
}

@property ODCUnbindFromADAction *action;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)setControlsEnabled:(BOOL)a0;
- (void)actionDidFinish:(id)a0;
- (void)buttonHit:(id)a0;
- (id)initModalForWindow:(id)a0 authView:(id)a1 serversViewController:(id)a2;
- (void)showErrorAlertAndReleaseSelf:(id)a0;

@end
