@class NSString, AVPlayer, NSArray;

@interface MRAudioPlayer : NSObject <MRAudioPlayer, MRAudioDucker> {
    NSArray *_audioItems;
}

@property (readonly) AVPlayer *avPlayer;
@property (readonly) double duration;
@property (nonatomic) double localTime;
@property (readonly) double currentVolume;
@property (nonatomic) BOOL shouldBePlaying;
@property (nonatomic) double volume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) BOOL isMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double duckLevel;
@property (nonatomic) double duckInDuration;
@property (nonatomic) double duckOutDuration;
@property (nonatomic) double parentDuration;
@property (nonatomic) long long priority;
@property (readonly) double currentDuckLevel;

- (void)dealloc;
- (void)resyncAudioItem;
- (id)initWithAudioItems:(id)a0 andAudioPlaylist:(id)a1;
- (void)processWithDuckLevel:(double)a0;
- (void)syncVolumeToAudioPlaylist:(id)a0;

@end
