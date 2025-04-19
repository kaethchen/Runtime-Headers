@interface QCConverter_YUV422 : QCImageBufferConverter {
    float _YCbCr_To_RGB[2][3][3];
    float _RGB_To_YCbCr[2][3][3];
    unsigned int _shader;
    int _lastColorspace;
}

- (void)dealloc;
- (void)finalize;
- (void)_finalize_QCConverter_YUV422;
- (id)createPixelBufferFromImageBuffer:(id)a0 withFormat:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
- (id)createTextureBufferFromImageBuffer:(id)a0 withFormat:(id)a1 target:(unsigned int)a2 transformation:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 colorSpace:(struct CGColorSpace { } *)a5 options:(id)a6;
- (id)initWithImageManager:(id)a0;
- (id)supportedPixelBufferFormatsForFormat:(id)a0;
- (id)supportedTextureBufferFormatsForFormat:(id)a0;
- (BOOL)supportsCropping;

@end
