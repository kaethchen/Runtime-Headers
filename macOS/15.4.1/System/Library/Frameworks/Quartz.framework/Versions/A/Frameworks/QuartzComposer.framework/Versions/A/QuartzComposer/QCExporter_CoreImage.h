@class CIFilter;

@interface QCExporter_CoreImage : QCImageExporter {
    CIFilter *_ciMatrixFilter;
    BOOL _flipped;
}

- (void)dealloc;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;
- (id)_createTransformedCIImage:(id)a0 transformation:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)createRepresentationOfType:(id)a0 withProvider:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
- (void)deleteImageTexture:(const struct CIImageProviderTextureInfoStruct { unsigned long long x0; unsigned long long x1; struct _CGLContextObject *x2; struct _CGLPixelFormatObject *x3; unsigned int x4; } *)a0 name:(unsigned int)a1 userInfo:(id)a2;
- (unsigned int)provideImageTexture:(const struct CIImageProviderTextureInfoStruct { unsigned long long x0; unsigned long long x1; struct _CGLContextObject *x2; struct _CGLPixelFormatObject *x3; unsigned int x4; } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 userInfo:(id)a2;
- (id)supportedRepresentationTypes;

@end
