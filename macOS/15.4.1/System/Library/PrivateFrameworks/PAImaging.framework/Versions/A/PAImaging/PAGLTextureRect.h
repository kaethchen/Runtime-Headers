@protocol PAPixelFormat;

@interface PAGLTextureRect : PAGLTexture {
    struct PFIntSize_st { unsigned long long width; unsigned long long height; } _size;
}

@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) id<PAPixelFormat> pixelFormat;

- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })a0 context:(id)a1;
- (unsigned int)createWithContext:(id)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)_copyTexSubImageFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 context:(id)a2;
- (void)_framebufferBlitCopyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 context:(id)a2;
- (int)_glInternalFormatFromPixelFormat:(id)a0 glFormat:(unsigned int *)a1 glType:(unsigned int *)a2;
- (BOOL)_shouldUseFBOBlitTextureCopy;
- (void)attachToFramebuffer:(id)a0 atPoint:(unsigned int)a1 context:(id)a2;
- (void)copyRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 fromBuffer:(id)a1 atPoint:(struct PFIntPoint_st { long long x0; long long x1; })a2 context:(id)a3;
- (void)copyRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 toBuffer:(id)a1 atPoint:(struct PFIntPoint_st { long long x0; long long x1; })a2 context:(id)a3;
- (void)copyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 context:(id)a2;
- (void)copyTexture:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2 context:(id)a3;
- (void)detachFromFramebuffer:(id)a0 atPoint:(unsigned int)a1 context:(id)a2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 device:(id)a2;
- (BOOL)setPurgeable:(BOOL)a0 context:(id)a1;
- (BOOL)setUnpurgeable:(BOOL)a0 context:(id)a1;
- (void)writeData:(const void *)a0 context:(id)a1;

@end
