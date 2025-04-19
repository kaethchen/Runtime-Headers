@class QLAnimationWindowEffect;

@interface QLWindowAnimation : NSAnimation {
    QLAnimationWindowEffect *_windowEffect;
}

@property (readonly) QLAnimationWindowEffect *windowEffect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (float)currentValue;
- (void)setCurrentProgress:(float)a0;
- (void)discardWindowEffect;
- (float)_valueForProgress:(double)a0;
- (id)initWithDuration:(double)a0 animationTarget:(id)a1;

@end
