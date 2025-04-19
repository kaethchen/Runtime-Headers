@class NSDictionary, MRAnimationPathScalar;

@interface MRAnimationContext : NSObject {
    MRAnimationPathScalar *animationPath;
    double *param1;
    double *param2;
    NSDictionary *state;
}

- (void)applyToMathExpression:(id)a0 atTime:(double)a1;

@end
