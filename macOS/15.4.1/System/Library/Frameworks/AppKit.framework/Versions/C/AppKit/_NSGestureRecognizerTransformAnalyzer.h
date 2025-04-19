@interface _NSGestureRecognizerTransformAnalyzer : NSObject {
    double _lowPassTranslationMagnitudeDelta;
    double _lowPassScaleDelta;
    double _lowPassRotationDelta;
}

@property (readonly) int dominantComponent;
@property double translationWeight;
@property double pinchingWeight;
@property double rotationWeight;

- (id)init;
- (void)reset;
- (void)analyzeTouches:(id)a0;

@end
