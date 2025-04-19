@class NSDictionary;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect {
    NSDictionary *_settings;
    double _animationStartTime;
    double _animationCurrentTime;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)init;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)stopAnimation;
- (id)initWithSettings:(id)a0;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (double)animationCurrentTime;
- (void)applyAnimationModification;
- (void)applyEndAnimation;
- (void)applyLayerValueOnAnimation;
- (void)applySettings;
- (id)settingObjectForKey:(id)a0;
- (void)startAnimationWithView:(id)a0;

@end
