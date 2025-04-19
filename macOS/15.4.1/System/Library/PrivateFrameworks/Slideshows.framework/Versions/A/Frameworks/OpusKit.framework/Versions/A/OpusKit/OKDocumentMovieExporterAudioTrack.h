@class NSMutableArray;

@interface OKDocumentMovieExporterAudioTrack : NSObject

@property (retain, nonatomic) NSMutableArray *audioItems;
@property (retain, nonatomic) NSMutableArray *volumeMarkers;
@property (nonatomic) double volume;

- (void)dealloc;
- (id)init;

@end
