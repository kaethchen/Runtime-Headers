@interface QLWarpingWindowEffect : QLAnimationWindowEffect

@property (copy) id /* block */ setupBlock;
@property (copy) id /* block */ pointBlock;

+ (id)warpingEffectForWindow:(id)a0 duration:(double)a1;

- (void).cxx_destruct;
- (void)setValue:(float)a0;
- (id)prepare;
- (float)animation:(id)a0 valueForProgress:(float)a1;

@end
