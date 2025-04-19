@interface VNHomeAppFaceAnalyzerMultiDetectorBase : VNFaceAnalyzerMultiDetectorBase

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCropRectForInputFace:(id)a0 imageBuffer:(id)a1 options:(id)a2 error:(id *)a3;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)prepare_vImageBufferForCVPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
