@interface HMFPowerAssertion : HMFAssertion

@property (nonatomic) unsigned int identifier;

- (id)initWithName:(id)a0;
- (void)invalidate;
- (void)_cleanUpPowerAssertion;
- (id)initWithName:(id)a0 timeout:(double)a1;

@end
