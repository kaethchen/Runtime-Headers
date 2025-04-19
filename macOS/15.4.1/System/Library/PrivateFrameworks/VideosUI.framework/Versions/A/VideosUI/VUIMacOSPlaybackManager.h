@class NSMutableDictionary, NSTimer, VUIVideosPlayable, NSViewController, NSObject;
@protocol VUILivePostPlayController;

@interface VUIMacOSPlaybackManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *seekCallbacks;
@property (copy, nonatomic) id /* block */ seekCompletion;
@property (retain, nonatomic) NSTimer *volumeRampTimer;
@property (nonatomic, getter=isVideoPlaybackPlaying) BOOL videoPlaybackPlaying;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic) float volume;
@property (nonatomic) BOOL isPlaylistActive;
@property (retain, nonatomic) VUIVideosPlayable *liveSportingEventVideosPlayable;
@property (retain, nonatomic) NSObject<VUILivePostPlayController> *livePostPlayController;
@property (retain, nonatomic) NSViewController *playbackContainerViewController;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)_registerNotifications;
- (id)currentDate;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })seekableTimeRange;
- (void)_playbackEngineDidFinishPlayback:(id)a0;
- (void)_playbackEngineWillStartPlayback:(id)a0;
- (void)_presentationSizeDidChange:(id)a0;
- (void)_seekableTimeRangesChanged:(id)a0;
- (id)_vuiActionDescription:(long long)a0;
- (long long)_vuiActionToTVPlaybackAction:(long long)a0;
- (void)rampToVolume:(float)a0 withDuration:(double)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 action:(long long)a1 completion:(id /* block */)a2;
- (void)setClipsMode:(BOOL)a0;
- (void)setSmartRoutingEligible:(BOOL)a0;

@end
