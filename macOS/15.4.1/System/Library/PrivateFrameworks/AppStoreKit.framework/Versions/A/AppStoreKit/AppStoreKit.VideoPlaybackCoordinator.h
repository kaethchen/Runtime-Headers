@interface AppStoreKit.VideoPlaybackCoordinator : NSObject {
    void /* unknown type, empty encoding */ visibilityTracker;
    void /* unknown type, empty encoding */ videoViews;
    void /* unknown type, empty encoding */ playbackQueue;
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ playbackCoalescingWaitTime;
    void /* unknown type, empty encoding */ metricsPipeline;
    void /* unknown type, empty encoding */ playbackWorkItem;
    void /* unknown type, empty encoding */ _isGlobalAutoPlayEnabled;
    void /* unknown type, empty encoding */ isAutoPlayEnabled;
    void /* unknown type, empty encoding */ isAutoPlayActive;
    void /* unknown type, empty encoding */ shouldLoopAutoPlayback;
    void /* unknown type, empty encoding */ shouldLoopSingleVideo;
    void /* unknown type, empty encoding */ currentPlaybackIndex;
    void /* unknown type, empty encoding */ _activeVideo;
}

- (id)init;
- (void).cxx_destruct;
- (void)applicationDidResignActiveWithNotification:(id)a0;
- (void)didChangeAutoPlayVideoSetting:(id)a0;
- (void)windowDidChangeOcclusionStateWithNotification:(id)a0;

@end
