@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor;

@interface AVAssetWriterInputAnnotationAdaptor : NSObject {
    AVAssetWriterInput *_assetWriterInput;
    AVAssetWriterInputMetadataAdaptor *_assetWriterInputMetadataAdaptor;
}

@property (readonly, nonatomic) AVAssetWriterInput *assetWriterInput;

+ (void)initialize;
+ (struct opaqueCMFormatDescription { } *)annotationFormatDescription;
+ (id)assetWriterInputAnnotationAdaptorWithAssetWriterInput:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)appendAnnotation:(id)a0;
- (id)initWithAssetWriterInput:(id)a0;

@end
