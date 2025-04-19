@class NSWindow;

@interface WebWindowScaleAnimation : NSAnimation {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _finalFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _realFrame;
    NSWindow *_window;
    struct RetainPtr<NSAnimation> { void *m_ptr; } _subAnimation;
    double _hintedDuration;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)currentValue;
- (void)setDuration:(double)a0;
- (void)setCurrentProgress:(float)a0;
- (void)setWindow:(id)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (double)additionalDurationNeededToReachFinalFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentFrame;
- (id)initWithHintedDuration:(double)a0 window:(id)a1 initalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)setSubAnimation:(id)a0;

@end
