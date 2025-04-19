@interface SCRSecurityAgentApplication : SCRSystemApplication

@property (nonatomic) BOOL _didForceInitialFocus;

- (void)_initialFocusOntoApplicationIfNeeded;
- (void)applicationDidInitialize;
- (void)elementWasCreated:(id)a0;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)isPreLoginApp;
- (BOOL)isSecureApplication;
- (BOOL)isSecurityAgentApplication;

@end
