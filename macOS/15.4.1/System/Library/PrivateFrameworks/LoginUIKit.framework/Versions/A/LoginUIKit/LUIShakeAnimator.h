@class NSView, NSLayoutConstraint;

@interface LUIShakeAnimator : NSAnimation {
    NSView *_originalView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startViewFrame;
    double _amplitude;
    NSLayoutConstraint *_centerXConstraint;
    double _centerXConstraintConstant;
}

+ (void)shakeView:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setView:(id)a0;
- (id)initWithView:(id)a0;
- (void)setCurrentProgress:(float)a0;

@end
