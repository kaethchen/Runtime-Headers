@class NSString;
@protocol MTLTexture;

@interface VFXCaptureDeviceOutputConsumerSource : VFXTextureSource <VFXCaptureDeviceOutputConsumer> {
    struct __CVMetalTextureCache { } *_textureCache;
    struct __CVBuffer { } *_pixelBuffer;
    id<MTLTexture> _mtlTexture;
    BOOL _containsAlpha;
    BOOL _isFront;
    unsigned long long _width;
    unsigned long long _height;
}

@property (nonatomic) BOOL automaticallyAdjustsVideoMirroring;
@property (nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)a0;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)connectToProxy:(struct __CFXImageProxy { } *)a0;
- (void)setPixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)containsAlpha;
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct __CFXTextureSampler { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; unsigned char x8; int x9; unsigned long long x10; } *)a1 nextFrameTime:(double *)a2 status:(struct { BOOL x0; BOOL x1; } *)a3;
- (void)setPixelBuffer:(struct __CVBuffer { } *)a0 fromDevice:(id)a1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 fromDevice:(id)a1;
- (void)discardVideoData;

@end
