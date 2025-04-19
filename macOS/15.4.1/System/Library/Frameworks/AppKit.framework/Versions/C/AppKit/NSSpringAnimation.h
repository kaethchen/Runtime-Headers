@class CASpringAnimation, CAMediaTimingFunction;

@interface NSSpringAnimation : NSAnimation {
    CASpringAnimation *_animation;
}

@property double mass;
@property double stiffness;
@property double damping;
@property double velocity;
@property (retain) CAMediaTimingFunction *timingFunction;

- (void)dealloc;
- (float)currentValue;
- (double)durationForEpsilon:(double)a0;
- (id)initWithDuration:(double)a0;

@end
