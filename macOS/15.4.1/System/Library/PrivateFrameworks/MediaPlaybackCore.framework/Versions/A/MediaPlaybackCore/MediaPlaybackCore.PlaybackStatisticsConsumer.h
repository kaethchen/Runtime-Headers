@class NSString;

@interface MediaPlaybackCore.PlaybackStatisticsConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    void /* unknown type, empty encoding */ playbackEngine;
    void /* unknown type, empty encoding */ subscription;
}

@property (class, nonatomic, readonly) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;

@end
