@interface MPSongInternal : NSObject

@property (nonatomic) double duration;
@property (nonatomic) double startTime;
@property (nonatomic) double audioVolume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) BOOL assetLogging;

@end
