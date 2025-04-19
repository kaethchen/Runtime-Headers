@interface NSOpenGLPixelBuffer : NSObject {
    struct _CGLPBufferObject { } *_CGLPBuffer;
}

@property (readonly) struct _CGLPBufferObject { } *CGLPBufferObj;
@property (readonly) int pixelsWide;
@property (readonly) int pixelsHigh;
@property (readonly) unsigned int textureTarget;
@property (readonly) unsigned int textureInternalFormat;
@property (readonly) int textureMaxMipMapLevel;

+ (void)initialize;
+ (id)openGLPixelBufferWithCGLPBufferObj:(struct _CGLPBufferObject { } *)a0;

- (void)dealloc;
- (id)initWithCGLPBufferObj:(struct _CGLPBufferObject { } *)a0;
- (id)initWithTextureTarget:(unsigned int)a0 textureInternalFormat:(unsigned int)a1 textureMaxMipMapLevel:(int)a2 pixelsWide:(int)a3 pixelsHigh:(int)a4;

@end
