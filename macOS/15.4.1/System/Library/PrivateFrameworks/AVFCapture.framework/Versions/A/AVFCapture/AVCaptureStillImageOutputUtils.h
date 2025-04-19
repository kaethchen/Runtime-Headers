@class NSDictionary;

@interface AVCaptureStillImageOutputUtils : NSObject {
    NSDictionary *_outputSettings;
    long long _imageOrientation;
    BOOL _imageMirrored;
    unsigned int _imageDataFormatType;
    struct { int width; int height; } _transferDimensions;
    unsigned int _transferPixelFormatType;
    struct opaqueCMFormatDescription { } *_sourceFormatDescription;
    struct __CVPixelBufferPool { } *_cvRotationBufferPool;
    struct OpaqueVTPixelRotationSession { } *_vtPixelRotationSession;
    struct __CVPixelBufferPool { } *_cvTransferBufferPool;
    struct OpaqueVTPixelTransferSession { } *_vtPixelTransferSession;
    struct OpaqueVTCompressionSession { } *_vtCompressionSession;
}

@property (copy, nonatomic) NSDictionary *outputSettings;
@property (nonatomic) long long imageOrientation;
@property (nonatomic, getter=isImageMirrored) BOOL imageMirrored;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (struct opaqueCMSampleBuffer { } *)_copyDecompressedSampleBufferFromBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)_copyTransformedSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forceClean:(BOOL)a1 error:(id *)a2;
- (id)_encodeTransform:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_exifOrientationWithRotationDegrees:(unsigned int)a0 imageMirrored:(BOOL)a1;
- (void)_getRotationDegrees:(int *)a0 imageMirrored:(BOOL *)a1 fromEXIFOrientation:(int)a2;
- (struct opaqueCMSampleBuffer { } *)_newOrientationModifiedBufferForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 withRotationDegrees:(unsigned int)a1 imageMirrored:(BOOL)a2 errorOut:(int *)a3;
- (id)_rotationTransform:(struct opaqueCMSampleBuffer { } *)a0;
- (id)_transferTransform:(struct opaqueCMSampleBuffer { } *)a0;
- (void)clean;
- (struct opaqueCMSampleBuffer { } *)copyTransformedSampleBufferWithSettings:(id)a0 orientation:(long long)a1 mirrored:(BOOL)a2 sample:(struct opaqueCMSampleBuffer { } *)a3 forceClean:(BOOL)a4 error:(id *)a5;

@end
