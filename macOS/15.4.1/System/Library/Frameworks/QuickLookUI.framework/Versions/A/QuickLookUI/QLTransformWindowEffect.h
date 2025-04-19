@interface QLTransformWindowEffect : QLAnimationWindowEffect {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _initialTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _finalTransform;
}

+ (id)transformWindow:(id)a0 from:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 to:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 duration:(double)a3;

- (void)setValue:(float)a0;
- (float)animation:(id)a0 valueForProgress:(float)a1;

@end
