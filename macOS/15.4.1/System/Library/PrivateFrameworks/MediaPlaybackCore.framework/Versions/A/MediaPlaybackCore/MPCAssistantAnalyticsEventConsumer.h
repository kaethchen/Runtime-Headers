@class NSString, MPCPlaybackEngine, NSObject, NSUserDefaults;
@protocol MPCPlaybackEngineEventStreamSubscription, OS_dispatch_queue;

@interface MPCAssistantAnalyticsEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSString *_lastSiriReferenceIdentifierForPlaybackStart;
    NSUserDefaults *_mobileipodDefaults;
}

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_handleAssetLoadEnd:(id)a0 cursor:(id)a1;
- (id)_validateAndBuildContextWithEvent:(id)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;

@end
