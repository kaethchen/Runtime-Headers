@class NSDictionary;

@interface MediaPlaybackCore.InternalPlayerController : _TtCs12_SwiftObject <MFResettable, MFStateDumpable, MFStateDumpable, MFResettable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ targetRate;
    void /* unknown type, empty encoding */ targetStartTime;
    void /* unknown type, empty encoding */ timeOfPreviousRewindOnInterruption;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ scanningSubscription;
    void /* unknown type, empty encoding */ lastFullyDownloadedPlayerItem;
    void /* unknown type, empty encoding */ reportedResumePlaybackTime;
    void /* unknown type, empty encoding */ preSetQueueItem;
    void /* unknown type, empty encoding */ pendingSeek;
    void /* unknown type, empty encoding */ preferredRate;
    void /* unknown type, empty encoding */ hasPrerolled;
    void /* unknown type, empty encoding */ actionAtQueueEnd;
    void /* unknown type, empty encoding */ contentItemIDAtQueueEnd;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)a0;

@end
