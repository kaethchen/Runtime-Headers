@class NSString, NSMutableSet;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCAutoBugCaptureEventConsumer : NSObject <MPCPlaybackEngineEventConsumer>

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (readonly, nonatomic) NSMutableSet *reportedBugSignatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)autoBugCaptureWithSubType:(id)a0 context:(id)a1 triggerThresholdValues:(id)a2 events:(id)a3;
- (BOOL)shouldReportError:(id)a0;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;

@end
