@class NSArray, SignpostFrameLifetimeInterval;

@interface SignpostUpdateSequenceInterval : SignpostAnimationSubInterval <SignpostOverrunChecking> {
    BOOL _isLong;
}

@property (weak, nonatomic) SignpostFrameLifetimeInterval *frameLifetime;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSArray *commits;
@property (readonly, nonatomic, getter=isImplicit) BOOL implicit;
@property (readonly, nonatomic, getter=isPotentiallyLong) BOOL potentiallyLong;

- (void).cxx_destruct;
- (id)initWithInterval:(id)a0 isLong:(BOOL)a1;
- (id)initWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 timebaseRatio:(double)a2;

@end
