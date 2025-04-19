@interface MechanismAssertionHolding : MechanismAssertion

@property (readonly, nonatomic) id object;

- (void).cxx_destruct;
- (id)additionalDescription;
- (void)dropWithReason:(id)a0;
- (id)initWithMechanism:(id)a0 object:(id)a1;

@end
