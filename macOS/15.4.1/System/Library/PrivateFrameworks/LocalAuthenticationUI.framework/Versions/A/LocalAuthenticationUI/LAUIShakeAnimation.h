@class NSView, NSLayoutConstraint;

@interface LAUIShakeAnimation : NSAnimation {
    NSView *_targetView;
    NSLayoutConstraint *_centerXConstraint;
    double _amplitude;
}

- (void).cxx_destruct;
- (void)setCurrentProgress:(float)a0;
- (void)shake;
- (id)initWithTargetView:(id)a0 centerXConstraint:(id)a1;

@end
