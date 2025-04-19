@interface FUFlightPageController : NSPageController

@property BOOL canSwipe;

- (void)scrollWheel:(id)a0;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)a0;

@end
