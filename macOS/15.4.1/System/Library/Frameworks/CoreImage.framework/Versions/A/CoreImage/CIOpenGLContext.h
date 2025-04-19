@interface CIOpenGLContext : CIContext {
    struct CIOpenGLContextPrivate { } *_glPriv;
}

+ (id)contextWithCGLContext:(struct _CGLContextObject { } *)a0 pixelFormat:(struct _CGLPixelFormatObject { } *)a1 options:(id)a2;
+ (id)contextWithCGLContext:(struct _CGLContextObject { } *)a0 pixelFormat:(struct _CGLPixelFormatObject { } *)a1;
+ (id)contextWithCGLSContext:(void *)a0 pixelFormat:(void *)a1;
+ (id)contextWithCGLSContext:(void *)a0 pixelFormat:(void *)a1 options:(id)a2;

- (id)initWithCGLContext:(struct _CGLContextObject { } *)a0 pixelFormat:(struct _CGLPixelFormatObject { } *)a1;
- (id)initWithCGLContext:(struct _CGLContextObject { } *)a0 pixelFormat:(struct _CGLPixelFormatObject { } *)a1 options:(id)a2;
- (id)initWithCGLSContext:(void *)a0 pixelFormat:(void *)a1;
- (id)initWithCGLSContext:(void *)a0 pixelFormat:(void *)a1 options:(id)a2;

@end
