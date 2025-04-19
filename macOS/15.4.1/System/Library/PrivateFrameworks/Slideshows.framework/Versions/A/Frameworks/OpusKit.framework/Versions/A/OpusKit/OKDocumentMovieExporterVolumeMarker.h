@interface OKDocumentMovieExporterVolumeMarker : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) double volume;
@property (nonatomic) double fadeDuration;
@property (nonatomic) BOOL isFade;
@property (nonatomic) double currentDuckLevel;

@end
