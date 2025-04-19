@interface SCRRecoveryOSAgentApplication : SCRSystemApplication

- (id)menuBar;
- (BOOL)applicationNeedsWindows;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)isPreLoginApp;

@end
