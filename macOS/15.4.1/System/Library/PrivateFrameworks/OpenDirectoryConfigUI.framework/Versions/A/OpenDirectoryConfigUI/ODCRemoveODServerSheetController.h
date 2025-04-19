@class NSAlert, ODCServersViewController, SFAuthorizationView, NSView, NSProgressIndicator, NSTextField, NSDictionary, NSWindow, NSButton, ODCRemoveODServerAction;

@interface ODCRemoveODServerSheetController : NSObject {
    NSWindow *_docWindow;
    SFAuthorizationView *_authView;
    NSDictionary *_serverDict;
    ODCServersViewController *_serversViewController;
    NSWindow *_sheet;
    NSAlert *_alert;
    NSButton *_removeButton;
    NSButton *_cancelButton;
    NSView *_accessoryView;
    NSProgressIndicator *_spinner;
    NSTextField *_progressLabel;
}

@property ODCRemoveODServerAction *action;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)setControlsEnabled:(BOOL)a0;
- (void)actionDidFinish:(id)a0;
- (void)buttonHit:(id)a0;
- (id)initWithServerDict:(id)a0 modalForWindow:(id)a1 authView:(id)a2 serversViewController:(id)a3;
- (void)showErrorAlertAndReleaseSelf:(id)a0;

@end
