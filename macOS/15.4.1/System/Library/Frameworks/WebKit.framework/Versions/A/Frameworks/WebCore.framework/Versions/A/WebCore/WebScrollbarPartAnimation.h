@interface WebScrollbarPartAnimation : NSObject {
    void *_scrollbar;
    struct RetainPtr<NSScrollerImp> { void *m_ptr; } _scrollerImp;
    int _featureToAnimate;
    double _startValue;
    double _endValue;
    double _duration;
    struct RetainPtr<NSTimer> { void *m_ptr; } _timer;
    struct RetainPtr<NSDate> { void *m_ptr; } _startDate;
    struct RefPtr<WebCore::CubicBezierTimingFunction, WTF::RawPtrTraits<WebCore::CubicBezierTimingFunction>, WTF::DefaultRefDerefTraits<WebCore::CubicBezierTimingFunction>> { struct CubicBezierTimingFunction *m_ptr; } _timingFunction;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)setDuration:(double)a0;
- (void)setCurrentProgress:(id)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setEndValue:(double)a0;
- (id)initWithScrollbar:(void *)a0 featureToAnimate:(int)a1 animateFrom:(double)a2 animateTo:(double)a3 duration:(double)a4;
- (void)setStartValue:(double)a0;

@end
