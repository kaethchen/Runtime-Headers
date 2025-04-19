@interface SCRRecoveryApplication : SCRApplication

@property (nonatomic) BOOL _didForceInitialFocus;

- (void)_initialFocusOntoApplicationIfNeeded;
- (void)applicationDidInitialize;
- (void)elementWasCreated:(id)a0;

@end
