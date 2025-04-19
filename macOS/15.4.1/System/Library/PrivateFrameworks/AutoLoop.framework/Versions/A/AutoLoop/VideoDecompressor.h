@class NSDictionary, NSCondition;

@interface VideoDecompressor : NSObject

@property (nonatomic) struct OpaqueVTDecompressionSession { } *decompressionSession;
@property struct VTDecompressionOutputCallbackRecord { void /* function */ *decompressionOutputCallback; void *decompressionOutputRefCon; } callBackRecord;
@property (retain) NSCondition *condition;
@property struct __CVBuffer { } *imageBuffer;
@property BOOL decompInProgress;
@property unsigned int pixelFormat;
@property (retain) NSDictionary *bufAttr;

- (void)dealloc;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)render:(struct opaqueCMSampleBuffer { } *)a0;
- (int)createDecompSession:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithPixelFormat:(unsigned int)a0;
- (void)processDecodedFrame:(struct __CVBuffer { } *)a0;

@end
