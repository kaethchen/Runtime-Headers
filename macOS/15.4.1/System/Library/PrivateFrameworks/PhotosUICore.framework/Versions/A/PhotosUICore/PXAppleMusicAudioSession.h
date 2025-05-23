@class NSString, NSObject;
@protocol OS_dispatch_queue, PXAppleMusicPlayerController;

@interface PXAppleMusicAudioSession : PXAudioSession <PXChangeObserver>

@property (readonly, nonatomic) NSString *playerClientIdentifier;
@property (retain, nonatomic) id<PXAppleMusicPlayerController> playerController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) BOOL stateQueue_isPreparingToPlay;
@property (nonatomic) BOOL stateQueue_hasSeekedOrPlayed;
@property (nonatomic) BOOL stateQueue_shouldPlayWhenPrepared;
@property (nonatomic) long long stateQueue_playerPlaybackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)pause;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)play;
- (void)prepareToPlay;
- (void)_updateStatus;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)performFinalCleanup;
- (void)_ensureCurrentPlayerClient;
- (void)_handlePlayerPreparedToPlay:(BOOL)a0 error:(id)a1;
- (void)_handlePlayerTransactionDeclinedWithError:(id)a0;
- (void)_stateQueue_handlePlayerPreparedToPlay:(BOOL)a0 error:(id)a1;
- (void)_stateQueue_pause;
- (void)_stateQueue_play;
- (void)_stateQueue_playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_stateQueue_prepareToPlayIfNeeded;
- (void)_stateQueue_updateState;
- (void)_updateContentLoudness;
- (void)_updatePlayerVolume;
- (void)desiredPlayerVolumeDidChange;
- (void)errorDidChange;
- (id)initWithAsset:(id)a0 volume:(float)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 queue:(id)a3 audioSessionDelegate:(id)a4;
- (id)initWithAsset:(id)a0 volume:(float)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 queue:(id)a3 audioSessionDelegate:(id)a4 playerController:(id)a5;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
