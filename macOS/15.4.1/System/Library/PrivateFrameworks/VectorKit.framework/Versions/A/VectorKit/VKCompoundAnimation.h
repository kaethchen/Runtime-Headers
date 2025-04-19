@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (double)duration;
- (void)setDuration:(double)a0;
- (BOOL)running;
- (id)initWithAnimations:(id)a0;
- (void)stopAnimation:(BOOL)a0;
- (void)setRunsForever:(BOOL)a0;
- (void)onTimerFired:(double)a0;
- (BOOL)runsForever;
- (void)startWithRunner:(id)a0;
- (BOOL)timed;

@end
