@class NSString, MPCPlaybackEngineEvent;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCPlaybackEngineLoggingConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    struct _MPCLoggingConsumerChartState { long long command; long long session; long long container; long long item; long long asset; long long task; } _chartState;
    struct _MPCLoggingConsumerChartStatus { BOOL userExpectsAudio; BOOL waitingInteruptEnd; long long timeControlStatus; } _chartStatus;
}

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (retain, nonatomic) MPCPlaybackEngineEvent *lastTimeControlStatusEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_logAccountEvent:(id)a0 subscription:(id)a1 cursor:(id)a2;
- (id)_playbackBarWithElapsedTime:(double)a0 duration:(double)a1;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;

@end
