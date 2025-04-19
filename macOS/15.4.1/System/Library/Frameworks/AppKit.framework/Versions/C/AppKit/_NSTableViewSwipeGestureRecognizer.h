@interface _NSTableViewSwipeGestureRecognizer : NSPanGestureRecognizer

@property BOOL isTrackingSwipe;

- (void)setState:(long long)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;

@end
