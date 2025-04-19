@interface WebScrollbarPartAnimationMac : NSAnimation {
    void *_scroller;
    int _featureToAnimate;
    double _startValue;
    double _endValue;
}

- (void)invalidate;
- (void)setCurrentProgress:(float)a0;
- (void)startAnimation;
- (void)setEndValue:(double)a0;
- (id)initWithScroller:(void *)a0 featureToAnimate:(int)a1 animateFrom:(double)a2 animateTo:(double)a3 duration:(double)a4;
- (void)setStartValue:(double)a0;

@end
