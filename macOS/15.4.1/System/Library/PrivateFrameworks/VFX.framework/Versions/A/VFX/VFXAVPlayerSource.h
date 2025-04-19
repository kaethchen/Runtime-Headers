@class AVPlayer, AVPlayerItemVideoOutput;
@protocol MTLTexture;

@interface VFXAVPlayerSource : VFXTextureSource {
    AVPlayer *_player;
    AVPlayerItemVideoOutput *_videoOutput;
    struct __CVMetalTextureCache { } *_textureCache;
    struct __CVBuffer { } *_pixelBuffer;
    id<MTLTexture> _mtlTexture;
    unsigned long long _texturePixelFormat;
    unsigned char _videoSourceFormat;
    unsigned long long _width;
    unsigned long long _height;
}

@property (retain, nonatomic) AVPlayer *player;

- (void)dealloc;
- (id)init;
- (void)connectToProxy:(struct __CFXImageProxy { } *)a0;
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct __CFXTextureSampler { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; unsigned char x8; int x9; unsigned long long x10; } *)a1 nextFrameTime:(double *)a2 status:(struct { BOOL x0; BOOL x1; } *)a3;
- (void)unregisterPlayer:(id)a0;
- (void)registerPlayer:(id)a0;
- (void)discardVideoData;
- (void)setVideoSourceFormat:(unsigned char)a0;

@end
