@class NSString, AVPlayerItem, AVPlayerItemVideoOutput, NSConditionLock, NSObject, AVPlayer;
@protocol OS_dispatch_queue;

@interface MRAssetPlayerMovie : MRAssetPlayer <MRAssetPlayerTimeSupport, MRAudioPlayer, AVPlayerItemOutputPullDelegate> {
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    AVPlayerItemVideoOutput *_videoOutput;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _movieDuration;
    NSConditionLock *_semaphore;
    unsigned char _orientation;
    BOOL _newImageIsAvailable;
    BOOL _movieIsReadyToPlay;
    BOOL _imageIsThumbnail;
}

@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) double time;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double volume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) BOOL isMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)outputMediaDataWillChange:(id)a0;
- (void)_finishLoadingAsset:(id)a0 andVideoTrack:(id)a1 forTime:(double)a2;
- (void)_finishLoadingAsset:(id)a0 forTime:(double)a1;
- (id)_posterImage:(BOOL)a0;
- (id)initWithPath:(id)a0 size:(struct CGSize { double x0; double x1; })a1 master:(id)a2 andOptions:(id)a3;
- (void)loadForTime:(double)a0;
- (BOOL)newImageIsAvailable;
- (id)retainedByUserImageAtTime:(double)a0 displayLinkTimestamp:(struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; })a1;

@end
