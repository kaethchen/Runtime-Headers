@class _TtC12SiriSharedUI25SiriSharedUIReplayUtility, NSString;

@interface SiriSharedUI.SiriSharedUIReplayUtility : NSObject {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ shouldDelayDismissal;
    void /* unknown type, empty encoding */ currentSpeechRecognized;
    void /* unknown type, empty encoding */ savedAceObjects;
    void /* unknown type, empty encoding */ storedCallback;
    void /* unknown type, empty encoding */ indexToReplayNext;
    void /* unknown type, empty encoding */ latestIndexReplayed;
    void /* unknown type, empty encoding */ viewHostingController;
    void /* unknown type, empty encoding */ resetReplayTask;
}

@property (class, nonatomic, readonly) _TtC12SiriSharedUI25SiriSharedUIReplayUtility *shared;
@property (class, nonatomic, readonly) NSString *replayOverridePathKey;

@property (nonatomic) void /* unknown type, empty encoding */ isReplaying;

- (id)init;
- (void).cxx_destruct;
- (void)received:(id)a0;
- (void)addReplayControlTo:(id)a0;
- (BOOL)hasContentAt:(struct CGPoint { double x0; double x1; })a0;
- (void)registerWithReplayCallback:(id /* block */)a0;
- (void)removeReplayControl;
- (void)replayAllWithIntervalSeconds:(unsigned long long)a0 recordingUrl:(id)a1 completion:(id /* block */)a2;
- (void)replayAtIndex:(long long)a0 recordingUrl:(id)a1;
- (BOOL)shouldSkipAutoDismissal;

@end
