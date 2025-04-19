@class NSString, SignpostEvent;

@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval>

@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) BOOL isGeneratedInterval;
@property (readonly, nonatomic) SignpostEvent *beginEvent;
@property (readonly, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) unsigned long long startMachContinuousTime;
@property (readonly, nonatomic) unsigned long long endMachContinuousTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)durationMs;
- (id)initWithInterval:(id)a0;
- (float)durationSeconds;
- (double)startMs;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)durationNanoseconds;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (id)initWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 timebaseRatio:(double)a2;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;

@end
