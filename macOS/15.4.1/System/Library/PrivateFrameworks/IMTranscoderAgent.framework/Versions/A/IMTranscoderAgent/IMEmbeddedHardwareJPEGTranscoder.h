@interface IMEmbeddedHardwareJPEGTranscoder : NSObject

@property (nonatomic) double targetJPEGCompressionValue;

- (id)initWithImageData:(id)a0 imageSource:(struct CGImageSource { } *)a1;
- (BOOL)scaleImageToFitLargestDimension:(id)a0 outputData:(id *)a1;

@end
