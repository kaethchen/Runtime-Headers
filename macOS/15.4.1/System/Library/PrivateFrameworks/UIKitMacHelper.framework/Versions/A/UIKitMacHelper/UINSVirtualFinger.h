@interface UINSVirtualFinger : NSObject {
    BOOL _touching;
    BOOL _cancelled;
    BOOL _needsScan;
    BOOL _liftTouchAfterAnimation;
    unsigned long long _lastTimestamp;
    struct CGPoint { double x; double y; } _loc;
}

@property (readonly) long long index;
@property BOOL touching;
@property BOOL cancelled;
@property (readonly) BOOL changed;
@property struct CGPoint { double x0; double x1; } location;
@property (copy) id /* block */ animationBlock;

+ (id)virtualFingerWithIndex:(long long)a0 location:(struct CGPoint { double x0; double x1; })a1;

- (void).cxx_destruct;
- (id)initWithIndex:(long long)a0;
- (struct __IOHIDEvent { } *)iohidEvent;
- (void)liftTouchAfterAnimation;
- (void)scanWithTimestamp:(unsigned long long)a0;
- (void)swipeInDirection:(struct CGPoint { double x0; double x1; })a0 distance:(double)a1 duration:(unsigned long long)a2;
- (void)swipeInDirection:(struct CGPoint { double x0; double x1; })a0 distance:(double)a1 duration:(unsigned long long)a2 autoLiftTouch:(BOOL)a3;

@end
