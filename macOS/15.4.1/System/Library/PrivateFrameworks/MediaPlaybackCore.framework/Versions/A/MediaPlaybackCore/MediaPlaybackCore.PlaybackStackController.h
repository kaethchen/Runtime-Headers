@class NSDictionary, NSString;

@interface MediaPlaybackCore.PlaybackStackController : _TtCs12_SwiftObject <MFPlayerConfigurable, MFStackModeConfigurable, MFAudioSessionControlling, MFResettable, MFStateDumpable> {
    void /* unknown type, empty encoding */ queueController;
    void /* unknown type, empty encoding */ playerController;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ assetQueueController;
    void /* unknown type, empty encoding */ errorController;
    void /* unknown type, empty encoding */ backgroundTaskController;
    void /* unknown type, empty encoding */ currentSetQueueIdentifier;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;
@property (nonatomic, readonly) long long renderingMode;
@property (nonatomic, readonly) NSString *modeDescription;
@property (nonatomic, readonly) BOOL isModeSolo;
@property (nonatomic, readonly) BOOL isModeShared;
@property (nonatomic, readonly) BOOL isModeManagedSession;
@property (nonatomic) float relativeVolume;
@property (nonatomic) BOOL airPlayLocalPlaybackEnabled;
@property (nonatomic) float airPlayLocalPlaybackVolume;

- (void)setAudioOutputDeviceUniqueID:(id)a0;
- (void)resetWithReason:(id)a0;
- (void)activateAudioSessionWithCompletion:(id /* block */)a0;
- (void)deactivateAudioSessionIfIdle:(long long)a0;
- (void)setApplicationMusicPlayerTransitionType:(long long)a0 duration:(double)a1;
- (void)setInhibitSpeechDetection:(BOOL)a0;
- (void)setSpatializationFormat:(long long)a0;
- (void)setupForManagedSessionWithAudioSession:(id)a0;
- (void)setupForShared;
- (void)setupForSolo;
- (void)updateAudioSessionWithConfiguration:(id)a0;
- (void)setAudioOutputContext:(id)a0;

@end
