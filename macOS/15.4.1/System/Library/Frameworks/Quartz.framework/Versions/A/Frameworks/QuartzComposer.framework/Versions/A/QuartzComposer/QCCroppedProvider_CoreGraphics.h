@interface QCCroppedProvider_CoreGraphics : QCCroppedImageProvider

- (id)createPixelBufferForManager:(id)a0 withFormat:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
- (id)supportedPixelBufferFormatsForManager:(id)a0;
- (BOOL)supportsColorMatching;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;

@end
