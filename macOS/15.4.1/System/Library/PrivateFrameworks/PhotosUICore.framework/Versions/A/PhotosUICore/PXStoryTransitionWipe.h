@class PXStoryWipeTransitionConfiguration, CAMediaTimingFunction;

@interface PXStoryTransitionWipe : PXStoryConcreteTransition {
    PXStoryWipeTransitionConfiguration *_configuration;
    CAMediaTimingFunction *_animationCurve;
    double _dividerAnimationDurationFraction;
    double _reverseDividerAnimationDurationFraction;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)timeDidChange;
- (void)wasStopped;

@end
