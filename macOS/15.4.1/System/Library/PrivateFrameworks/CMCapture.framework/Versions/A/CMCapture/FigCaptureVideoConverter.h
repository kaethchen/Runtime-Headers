@class NSDictionary, NSMutableArray;

@interface FigCaptureVideoConverter : NSObject {
    struct opaqueCMFormatDescription { } *_targetFormatDescription;
    NSDictionary *_targetPixelBufferAttributes;
    struct opaqueCMFormatDescription { } *_inputFormatDescription;
    struct opaqueCMFormatDescription { } *_originalOutputFormatDescription;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    struct __CVPixelBufferPool { } *_pixelTransferBufferPool;
    struct OpaqueVTPixelRotationSession { } *_pixelRotationSession;
    struct __CVPixelBufferPool { } *_pixelRotationBufferPool;
    int _contentsRotationDegrees;
    struct OpaqueVTDecompressionSession { } *_decompressionSession;
    struct opaqueCMSampleBuffer { } *_decodedFrame;
    NSMutableArray *_decodedFrames;
    BOOL _isPassThru;
    BOOL _fitToFill;
}

+ (void)initialize;
+ (id)supportedTargetPixelFormatTypes;

- (void)dealloc;
- (id)description;
- (void)flush;
- (id)initWithTargetVideoFormatDescription:(struct opaqueCMFormatDescription { } *)a0 rotatingContentsByDegrees:(int)a1;
- (struct opaqueCMSampleBuffer { } *)_newSampleBufferForPixelBuffer:(struct __CVBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (struct opaqueCMSampleBuffer { } *)_newSampleBufferWithTargetFormatFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)copyQueuedConvertedFrame;
- (struct opaqueCMSampleBuffer { } *)newSampleBufferWithTargetFormatFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
