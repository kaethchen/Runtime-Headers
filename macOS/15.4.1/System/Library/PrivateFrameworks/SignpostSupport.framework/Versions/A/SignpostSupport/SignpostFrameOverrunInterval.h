@class SignpostFrameLifetimeInterval;

@interface SignpostFrameOverrunInterval : SignpostAnimationSubInterval

@property (nonatomic) unsigned long long overrunType;
@property (nonatomic) unsigned long long overrunClass;
@property (readonly, nonatomic) SignpostFrameLifetimeInterval *frameLifetime;

- (void).cxx_destruct;
- (id)initWithFrameLifetime:(id)a0 startMCT:(unsigned long long)a1 endMCT:(unsigned long long)a2 timebaseRatio:(double)a3 class:(unsigned long long)a4;

@end
