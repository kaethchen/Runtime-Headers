@interface AppStoreKit.PlaybackCoordinator : NSObject {
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ visibilityTracker;
    void /* unknown type, empty encoding */ playableViews;
    void /* unknown type, empty encoding */ visiblePlayableIds;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ playbackCoalescingWaitTime;
    void /* unknown type, empty encoding */ playbackWorkItem;
}

- (id)init;
- (void).cxx_destruct;
- (void)applicationDidResignActiveWithNotification:(id)a0;
- (void)windowDidChangeOcclusionStateWithNotification:(id)a0;

@end
