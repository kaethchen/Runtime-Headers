@class NSString, OFPropertyAnimationLayer, CAPropertyAnimation, NSTimer;

@interface OFPropertyAnimation : NSObject {
    NSString *_animationKey;
    OFPropertyAnimationLayer *_layer;
    CAPropertyAnimation *_propertyAnimation;
    NSTimer *_timer;
    id /* block */ _progressBlock;
    id /* block */ _completionBlock;
}

+ (id)animateWithDuration:(double)a0 rootLayer:(id)a1 animation:(id /* block */)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)interpolateValueForKey:(id)a0 animation:(id /* block */)a1 progress:(double)a2;

- (void)dealloc;
- (id)init;
- (void)cancel;
- (void)_cleanup;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)handleTimer:(id)a0;
- (double)animatedFloat;
- (struct CGPoint { double x0; double x1; })animatedPoint;
- (void)setDestinationAnimatedFloat:(double)a0;
- (void)setDestinationAnimatedPoint:(struct CGPoint { double x0; double x1; })a0;

@end
