@class NSDictionary;

@interface MediaPlaybackCore.PlayerController : _TtCs12_SwiftObject <MFPlayerConfigurable, MFResettable, MFStateDumpable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ userActionTimeout;
    void /* unknown type, empty encoding */ currentItemTransition;
    void /* unknown type, empty encoding */ playbackCoordinatorObservation;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ playerID;
    void /* unknown type, empty encoding */ audioSessionController;
    void /* unknown type, empty encoding */ applicationMusicPlayerTransitionOptions;
    void /* unknown type, empty encoding */ coordinatedPlaybackSuspension;
    void /* unknown type, empty encoding */ playbackStartSubscription;
    void /* unknown type, empty encoding */ behavior;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ fsm;
    void /* unknown type, empty encoding */ playerObserver;
    void /* unknown type, empty encoding */ playerSubscription;
    void /* unknown type, empty encoding */ systemObserver;
    void /* unknown type, empty encoding */ systemSubscription;
    void /* unknown type, empty encoding */ nextItemTracksChangeSubscription;
    void /* unknown type, empty encoding */ userEventsMonitor;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ leaseController;
    void /* unknown type, empty encoding */ previousItemID;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;
@property (nonatomic) float relativeVolume;
@property (nonatomic) BOOL airPlayLocalPlaybackEnabled;
@property (nonatomic) float airPlayLocalPlaybackVolume;

- (void)setAudioOutputDeviceUniqueID:(id)a0;
- (void)resetWithReason:(id)a0;
- (void)setApplicationMusicPlayerTransitionType:(long long)a0 duration:(double)a1;
- (void)setSpatializationFormat:(long long)a0;
- (void)setAudioOutputContext:(id)a0;

@end
