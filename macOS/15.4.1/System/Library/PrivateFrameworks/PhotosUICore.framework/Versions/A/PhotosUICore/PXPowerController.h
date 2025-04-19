@interface PXPowerController : NSObject

@property (class, readonly, nonatomic) PXPowerController *sharedController;

@property (nonatomic) double powerAssertionStartTime;
@property (nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (readonly, nonatomic) BOOL hasPowerAssertion;
@property (readonly, nonatomic) BOOL hasBackgroundAssertion;

- (void)acquireBackgroundAssertion;
- (void)addPowerAssertionForIdentifier:(unsigned int)a0 withReason:(unsigned int)a1 completion:(id /* block */)a2;
- (unsigned int)generateAssertionIdentifier;
- (void)handleEnteringBackground;
- (void)handleEnteringForeground;
- (void)invalidateBackgroundAssertion;
- (void)removePowerAssertionForIdentifier:(unsigned int)a0 withReason:(unsigned int)a1 completion:(id /* block */)a2;

@end
