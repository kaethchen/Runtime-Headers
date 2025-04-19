@class NSTimer, NSMutableSet;

@interface WindowOcclusionTracker : NSObject {
    NSMutableSet *_trackedWindows;
    NSTimer *_waitForWindowsToSettleHandler;
    BOOL _registeredForWindowMovementNotifications;
}

- (id)init;
- (void).cxx_destruct;
- (void)checkTrackedWindowsForOcclusion;
- (void)_checkTrackedWindows;
- (void)_registerNotificationsForWindowMovement;
- (void)_removeNotificationsForWindowMovement;
- (void)_updateOnScreenWindowList;
- (void)beginTrackingOcclusionOfWindow:(id)a0 observer:(id)a1 ratioOfOcclusion:(double)a2;
- (void)stopTrackingOcclusionOfWindow:(id)a0;

@end
