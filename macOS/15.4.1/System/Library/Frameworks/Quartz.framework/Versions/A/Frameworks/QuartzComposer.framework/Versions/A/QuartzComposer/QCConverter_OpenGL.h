@interface QCConverter_OpenGL : QCImageBufferConverter

- (id)createTextureBufferFromImageBuffer:(id)a0 withFormat:(id)a1 target:(unsigned int)a2 transformation:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 colorSpace:(struct CGColorSpace { } *)a5 options:(id)a6;
- (id)supportedTextureBufferFormatsForFormat:(id)a0;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;

@end
