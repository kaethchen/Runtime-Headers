@class SFPasswordAsstView, NSWindow, NSTextField;

@interface SFPasswordAssistantInspectorController : NSObject {
    NSWindow *_baseWindow;
    NSWindow *_passwordAssistantPanel;
    SFPasswordAsstView *_passwordAssistantView;
    NSTextField *_originalPassword;
    NSTextField *_newPassword;
    NSTextField *_verifyPassword;
    NSTextField *_extOriginalPassword;
    NSTextField *_extNewPassword;
    NSTextField *_extVerifyPassword;
}

- (void)dealloc;
- (id)init;
- (void)windowDidEndSheet:(id)a0;
- (id)baseWindow;
- (void)baseWindowWillClose:(id)a0;
- (void)closePasswordAssistantPanel;
- (void)loadOurNib;
- (id)newPasswordField;
- (void)ourPanelWillClose:(id)a0;
- (id)passwordAssistantPanel;
- (void)setBaseWindow:(id)a0;
- (void)setNewPasswordField:(id)a0;
- (void)setOriginalPasswordField:(id)a0;
- (void)setVerifyPasswordField:(id)a0;
- (void)showPasswordAssistantPanel:(id)a0;

@end
