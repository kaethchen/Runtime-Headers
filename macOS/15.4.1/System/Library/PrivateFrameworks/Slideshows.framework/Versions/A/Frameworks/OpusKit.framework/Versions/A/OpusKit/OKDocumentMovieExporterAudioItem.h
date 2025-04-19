@class AVAsset;

@interface OKDocumentMovieExporterAudioItem : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (retain) AVAsset *avAsset;

- (void)dealloc;

@end
