@interface SCRLoginWindowApplication : SCRSecurityAgentApplication

- (id)focusedWindow;
- (id)_appThreadUserWindowDescription;
- (void)_layoutChanged:(id)a0;
- (id)_appThreadUserWindowPanelHasFocus;
- (BOOL)applicationNeedsWindows;
- (void)connectToApp;
- (BOOL)isLoginWindowApplication;
- (id)userWindowDescription;
- (BOOL)userWindowHasFocus;

@end
