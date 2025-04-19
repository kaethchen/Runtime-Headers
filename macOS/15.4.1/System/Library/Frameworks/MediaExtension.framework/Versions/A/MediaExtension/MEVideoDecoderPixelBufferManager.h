@class NSDictionary;

@interface MEVideoDecoderPixelBufferManager : NSObject

@property struct OpaqueVTVideoDecoderSession { } *decoderSession;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;

- (void).cxx_destruct;
- (struct __CVBuffer { } *)createPixelBufferAndReturnError:(id *)a0;
- (id)getPixelBufferAttributes;
- (void)registerCustomPixelFormat:(id)a0;

@end
