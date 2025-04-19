@class NSTextField, NSWindow, NSString, NSButton, NSSecureTextField;

@interface CloudConfigClassicAuthWindowController : NSWindowController <NSTextFieldDelegate>

@property (retain) NSTextField *promptField;
@property (retain) NSButton *okButton;
@property (retain) NSButton *cancelButton;
@property (retain) NSTextField *userNameField;
@property (retain) NSSecureTextField *pwdField;
@property NSWindow *parentWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)windowDidLoad;
- (id)getPassword;
- (id)getUserName;
- (void)resetWithParentWindow:(id)a0 prompt:(id)a1;
- (void)sheetAction:(id)a0;
- (void)syncControls;

@end
