@class NSString, AFWatchdogTimer, SOMediaNowPlayingObserver, NSObject;
@protocol SRUIFStateFeedbackProviding, OS_dispatch_queue, SRUIFStateFeedbackManagerDelegate;

@interface SRUIFStateFeedbackManager : NSObject <SOMediaNowPlayingListening> {
    id<SRUIFStateFeedbackProviding> _provider;
    id<SRUIFStateFeedbackManagerDelegate> _delegate;
    BOOL _stateFeedbackNeeded;
    AFWatchdogTimer *_delayToneTimer;
    NSString *_responseMode;
    NSObject<OS_dispatch_queue> *_nowPlayingObserverQueue;
    SOMediaNowPlayingObserver *_nowPlayingObserver;
    long long _nowPlayingState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)nowPlayingObserver:(id)a0 playbackStateDidChangeFrom:(long long)a1 to:(long long)a2 lastPlayingDate:(id)a3;
- (void)didTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)audioPlaybackRequestDidStartForRequest:(id)a0;
- (void)didTransitionFromState:(long long)a0 toState:(long long)a1 event:(long long)a2 machAbsoluteTransitionTime:(double)a3;
- (void)didUpdateEstimatedEndOfUserInput:(unsigned long long)a0;
- (id)initWithStateFeedbackProvider:(id)a0 delegate:(id)a1;
- (void)siriSessionDidEnd;
- (void)_cancelFeedback;
- (void)_cancelFeedbackWithCompletion:(id /* block */)a0;
- (void)_playDelayFeedback;
- (void)_playSuccessFeedback;
- (void)_scheduleDelayToneFor:(double)a0;
- (void)cancelFeedbackWithCompletion:(id /* block */)a0;
- (void)didUpdateSpeechEndEstimate:(unsigned long long)a0;
- (void)playAudioPlaybackRequest:(id)a0 completion:(id /* block */)a1;
- (void)updateResponseMode:(id)a0;

@end
