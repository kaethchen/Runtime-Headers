@class NSDictionary;

@interface MERAWProcessorPixelBufferManager : NSObject

@property struct OpaqueVTRAWProcessingPluginSession { } *processingSession;
@property struct __CVPixelBufferPool { } *pool;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;

- (void)dealloc;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)createPixelBufferAndReturnError:(id *)a0;
- (id)getPixelBufferAttributes;

@end
