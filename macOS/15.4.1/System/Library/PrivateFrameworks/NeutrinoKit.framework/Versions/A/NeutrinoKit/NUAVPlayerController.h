@class AVVideoComposition, AVAsset, NUObservatory, AVAudioMix, NSMutableArray, AVPlayer;
@protocol NUAVPlayerControllerDelegate;

@interface NUAVPlayerController : NSObject {
    id _playerTimeObserver;
    NUObservatory *_observatory;
    struct { BOOL registeredPlayer; } _playerControllerKVOFlags;
    NSMutableArray *_playerItemObservations;
    BOOL _appliesPerFrameHDRDisplayMetadata;
}

@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) double updateInterval;
@property (readonly, nonatomic) AVAsset *videoAsset;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;
@property (readonly, nonatomic) AVAudioMix *audioMix;
@property (weak, nonatomic) id<NUAVPlayerControllerDelegate> delegate;
@property (nonatomic) BOOL loopsVideo;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentSeekTime;
@property (readonly, nonatomic) BOOL currentlySeeking;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)pause;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setRate:(float)a0;
- (void)play;
- (void)step:(long long)a0;
- (void)_removeTimeObserver;
- (void)playerItemDidReachEnd:(id)a0;
- (void)seekForward;
- (void)updateAudioMix:(id)a0;
- (void)_addPlayerItemKVO:(id)a0;
- (void)_addPlayerKVO;
- (void)_addTimeObserver;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_effectiveTimeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_loopingPlayerItemWithVideoAsset:(id)a0 videoComposition:(id)a1 audioMix:(id)a2;
- (void)_notifyExternalPlaybackChange:(BOOL)a0;
- (void)_notifyPlaybackRateChange:(float)a0;
- (void)_notifyPlaybackTimeChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_notifyPlayerStatusChange:(long long)a0;
- (id)_playerItemWithVideoAsset:(id)a0 videoComposition:(id)a1 audioMix:(id)a2;
- (id)_playerItemsWithVideoAsset:(id)a0 videoComposition:(id)a1 audioMix:(id)a2 loopsVideo:(BOOL)a3;
- (void)_removePlayerItemKVO:(id)a0;
- (void)_removePlayerItemKVO:(id)a0 removeFromArray:(BOOL)a1;
- (void)_removePlayerKVO;
- (void)addExternalPlaybackObserver:(id)a0 block:(id /* block */)a1;
- (void)addPlaybackRateObserver:(id)a0 block:(id /* block */)a1;
- (void)addPlaybackTimeObserver:(id)a0 block:(id /* block */)a1;
- (void)addPlayerStatusObserver:(id)a0 block:(id /* block */)a1;
- (void)playerItemFailedToPlayToEnd:(id)a0;
- (BOOL)prepareWithAVAsset:(id)a0 videoComposition:(id)a1 audioMix:(id)a2 loopsVideo:(BOOL)a3 seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (void)seek:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)seek:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 forceSeek:(BOOL)a3;
- (void)seek:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 forceSeek:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)seekBack;
- (void)updateAppliesPerFrameHDRDisplayMetadata:(BOOL)a0;
- (void)updateVideoComposition:(id)a0;
- (void)updateWithVideoPrepareNodeFromVideoComposition:(id)a0;

@end
