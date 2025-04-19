@protocol MTLResidencySet;

@interface CMIMetalResourceCache : NSObject {
    struct __CVMetalTextureCache { } *_textureCache;
    struct __CVMetalBufferCache { } *_bufferCache;
    id<MTLResidencySet> _residencySet;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)flush;
- (id)initWithMetalDevice:(id)a0;
- (id)getBufferFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)getTextureFromPixelBuffer:(struct __CVBuffer { } *)a0 planeIndex:(int)a1 pixelFormat:(unsigned long long)a2 usage:(unsigned long long)a3;
- (void)makeResidentOnCommandBuffer:(id)a0;

@end
