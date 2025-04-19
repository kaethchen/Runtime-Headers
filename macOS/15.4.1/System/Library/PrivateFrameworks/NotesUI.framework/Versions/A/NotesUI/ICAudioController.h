@class AVPlayer, AVAsset, NSObject, ICAttachment;

@interface ICAudioController : NSObject

@property (class, readonly, nonatomic) ICAudioController *sharedAudioController;

@property (retain, nonatomic) AVPlayer *currentPlayer;
@property (retain, nonatomic) ICAttachment *currentAttachment;
@property (retain, nonatomic) AVAsset *currentAsset;
@property (retain, nonatomic) NSObject *playbackTimeObserver;
@property (nonatomic) double pendingSeekTime;
@property (nonatomic) BOOL registeredForRemoteControlEvents;
@property (readonly, nonatomic) BOOL isPlaying;

+ (void)pauseIfPlaying;

- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)play;
- (void)playerItemDidPlayToEndTime:(id)a0;
- (void)play:(id)a0;
- (void)updateNowPlayingInfo;
- (void)togglePlayPause;
- (void)skipAheadByInterval:(double)a0 completion:(id /* block */)a1;
- (void)attachmentWillBeDeletedNotification:(id)a0;
- (void)notifyPaused;
- (void)notifyPlaying;
- (void)notifyStopped;
- (void)prepareToPlayAttachment:(id)a0;
- (void)prepareToPlayAttachment:(id)a0 completion:(id /* block */)a1;
- (void)registerForRemoteControlEvents;
- (long long)remoteChangePlaybackPosition:(id)a0;
- (long long)remoteChangeRate:(id)a0;
- (long long)remotePause:(id)a0;
- (long long)remotePlay:(id)a0;
- (long long)remoteSkipBackward:(id)a0;
- (long long)remoteSkipForward:(id)a0;
- (long long)remoteStop:(id)a0;
- (long long)remoteTogglePlayPause:(id)a0;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;
- (void)skipBackByInterval:(double)a0 completion:(id /* block */)a1;
- (void)unregisterForRemoteControlEvents;
- (void)updateTime:(double)a0 duration:(double)a1;

@end
