@class AVAssetReaderTrackOutput, AVAssetReaderOutputMetadataAdaptor;

@interface AVAssetReaderOutputAnnotationAdaptor : NSObject <AVAssetReaderOutputAdaptor> {
    AVAssetReaderTrackOutput *_trackOutput;
    AVAssetReaderOutputMetadataAdaptor *_assetReaderOutputMetadataAdaptor;
}

@property (readonly, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput;

+ (id)assetReaderOutputAnnotationAdaptorWithAssetReaderTrackOutput:(id)a0;

- (void)dealloc;
- (id)init;
- (id)initWithAssetReaderTrackOutput:(id)a0;
- (int)addExtractionForOutput:(id)a0 figAssetReader:(struct OpaqueFigAssetReader { } *)a1 options:(id)a2 withOutputExtactionID:(int *)a3;
- (id)nextAnnotation;

@end
