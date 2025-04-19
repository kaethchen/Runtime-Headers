@interface KHPinchGestureRecognizer : NSGestureRecognizer

@property (readonly, nonatomic) double velocity;

- (void)rightMouseDown:(id)a0;
- (unsigned long long)numberOfTouches;
- (struct CGPoint { double x0; double x1; })locationOfTouch:(unsigned long long)a0 inView:(id)a1;

@end
