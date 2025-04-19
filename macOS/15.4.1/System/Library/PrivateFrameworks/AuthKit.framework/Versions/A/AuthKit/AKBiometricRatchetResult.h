@class AKRatchetState;

@interface AKBiometricRatchetResult : NSObject

@property (readonly, copy, nonatomic) AKRatchetState *ratchetState;
@property (nonatomic) unsigned long long armingMethod;

- (void).cxx_destruct;
- (id)initWithRatchetState:(id)a0 armingMethod:(unsigned long long)a1;

@end
