@class AVPlayerItem;

@interface MRAudioItem : NSObject

@property (readonly) AVPlayerItem *avPlayerItem;
@property (readonly) double startTime;
@property (readonly) double duration;
@property double localTimeOffset;
@property float volume;
@property double fadeInDuration;
@property double fadeOutDuration;
@property float duckLevel;
@property double duckInDuration;
@property double duckOutDuration;

- (void)dealloc;
- (void)gotoTime:(double)a0;
- (id)initWithURL:(id)a0 startTime:(double)a1 andDuration:(double)a2;
- (void)syncVolumeToSong:(id)a0;
- (float)volumeAtTime:(double)a0;

@end
