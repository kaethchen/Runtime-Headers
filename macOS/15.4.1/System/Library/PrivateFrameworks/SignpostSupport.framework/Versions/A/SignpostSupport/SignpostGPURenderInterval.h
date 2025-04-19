@class SignpostFrameLifetimeInterval;

@interface SignpostGPURenderInterval : SignpostAnimationSubInterval <SignpostOverrunChecking>

@property (weak, nonatomic) SignpostFrameLifetimeInterval *frameLifetime;
@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic, getter=isPotentiallyLong) BOOL potentiallyLong;

- (void).cxx_destruct;
- (id)initWithInterval:(id)a0;
- (id)initWithInterval:(id)a0 frameSeed:(unsigned int)a1;

@end
