@interface NSDragEventTracker : NSEventTracker

@property struct CGPoint { double x; double y; } location;
@property double gestureAmount;
@property long long stage;
@property BOOL wantsRightMouseEvents;
@property BOOL routesScrollWheelEventsToWindow;
@property unsigned long long discardEventMask;
@property double movementThreshold;
@property double timeoutThreshold;

- (void)dealloc;
- (id)init;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)trackEvent:(id)a0 usingHandler:(id /* block */)a1;

@end
