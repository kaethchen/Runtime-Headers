@interface QCPixelFormat_KYMC8 : QCPixelFormat {
    unsigned long long _compatibilities;
}

- (id)description;
- (id)name;
- (int)pixelType;
- (unsigned long long)CGBitsPerComponent;
- (unsigned int)QTPixelFormat;
- (unsigned long long)compatibilities;
- (unsigned long long)pixelBlockWidth;
- (unsigned int)CGBitmapInfo;
- (unsigned long long)CGBitsPerPixel;
- (int)CIFormat;
- (struct _cl_image_format { unsigned int x0; unsigned int x1; })CLFormat;
- (unsigned int)openGLPixelType;
- (int)pixelColorModel;
- (unsigned long long)bitsPerBlock;
- (BOOL)isSupportedOnContext:(id)a0;
- (unsigned int)openGLInternalFormat;
- (unsigned int)openGLPixelFormat;
- (int)pixelAlpha;
- (unsigned long long)pixelBlockHeight;

@end
