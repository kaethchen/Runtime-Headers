@class NSDictionary;

@interface MediaPlaybackCore.TimelineAssetQueueController : _TtCs12_SwiftObject <MFStateDumpable, MFStateDumpable, MFResettable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentQueueControllerItem;
    void /* unknown type, empty encoding */ playerController;
    void /* unknown type, empty encoding */ queueController;
    void /* unknown type, empty encoding */ errorController;
    void /* unknown type, empty encoding */ externalPlaybackController;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ backgroundTaskController;
    void /* unknown type, empty encoding */ playbackDefaults;
    void /* unknown type, empty encoding */ transitionController;
    void /* unknown type, empty encoding */ behavior;
    void /* unknown type, empty encoding */ reloadingWithFadeout;
    void /* unknown type, empty encoding */ deferredPlaybackRateForNextSetQueue;
    void /* unknown type, empty encoding */ playbackStallTimer;
    void /* unknown type, empty encoding */ unloadingTimer;
    void /* unknown type, empty encoding */ synchronizingToPlayer;
    void /* unknown type, empty encoding */ currentPlayerQueueItem;
    void /* unknown type, empty encoding */ chaptersObservation;
    void /* unknown type, empty encoding */ sessionID;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)a0;

@end
