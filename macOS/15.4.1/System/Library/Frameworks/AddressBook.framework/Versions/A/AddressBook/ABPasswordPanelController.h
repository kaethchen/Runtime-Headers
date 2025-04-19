@class NSTextField, NSString, NSPanel, NSSecureTextField, NSButton;

@interface ABPasswordPanelController : NSObject {
    NSPanel *_passwordPanel;
    NSTextField *_passwordPanelDescriptionTextField;
    NSTextField *_passwordPanelReasonTextField;
    NSSecureTextField *_passwordTextField;
    NSButton *_rememberPasswordInKeychainButton;
    id /* block */ _completionHandler;
}

@property BOOL alwaysSavePassword;
@property (retain) NSString *accountDescription;
@property (retain) NSString *accountTypeDescription;
@property (retain) NSString *host;
@property (retain) NSString *username;
@property (readonly) NSString *password;
@property (readonly) unsigned long long persistence;

- (id)init;
- (void).cxx_destruct;
- (id)localizedDescription;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancel:(id)a0;
- (id)localizedReason;
- (void)help:(id)a0;
- (void)changePassword:(id)a0;
- (id)passwordPanelDescription;
- (id)passwordPanelReason;
- (void)passwordSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)setPasswordPanelDescription:(id)a0;
- (void)setPasswordPanelReason:(id)a0;

@end
