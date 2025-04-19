@interface VFXKeyframeAnimation : CAKeyframeAnimation {
    struct __CFXKeyframedAnimation { } *_cfxAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)keyPath;
- (double)duration;
- (void)setDuration:(double)a0;
- (id)values;
- (void)setRepeatCount:(float)a0;
- (BOOL)autoreverses;
- (id)fillMode;
- (BOOL)isRemovedOnCompletion;
- (float)repeatCount;
- (double)repeatDuration;
- (void)setAdditive:(BOOL)a0;
- (void)setAutoreverses:(BOOL)a0;
- (void)setFillMode:(id)a0;
- (void)setKeyPath:(id)a0;
- (void)setKeyTimes:(id)a0;
- (void)setRemovedOnCompletion:(BOOL)a0;
- (void)setSpeed:(float)a0;
- (void)setTimeOffset:(double)a0;
- (void)setTimingFunction:(id)a0;
- (void)setTimingFunctions:(id)a0;
- (void)setValues:(id)a0;
- (float)speed;
- (id)timingFunction;
- (id)timingFunctions;
- (BOOL)additive;
- (id)biasValues;
- (id)continuityValues;
- (BOOL)cumulative;
- (BOOL)isAdditive;
- (BOOL)isCumulative;
- (id)keyTimes;
- (void)setBiasValues:(id)a0;
- (void)setContinuityValues:(id)a0;
- (void)setCumulative:(BOOL)a0;
- (void)setRepeatDuration:(double)a0;
- (void)setTensionValues:(id)a0;
- (id)tensionValues;
- (double)timeOffset;
- (float)fadeOutDuration;
- (float)fadeInDuration;
- (void)setFadeInDuration:(float)a0;
- (void)setFadeOutDuration:(float)a0;
- (id)animationEvents;
- (void)_convertToCA;
- (BOOL)commitsOnCompletion;
- (void)setAnimationEvents:(id)a0;
- (void)setCommitsOnCompletion:(BOOL)a0;
- (void)_clearCFXCache;
- (struct __CFXKeyframedAnimation { } *)cfxAnimation;
- (void)setCfxAnimation:(struct __CFXKeyframedAnimation { } *)a0;

@end
