@interface PARenderPipeline : NSObject

- (void)computeGeometry:(id)a0 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a1 scaledInputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a2 scale:(double)a3 orientation:(long long)a4;
- (void)computeGeometry:(id)a0 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a1 scaledInputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a2 scale:(double)a3 renderType:(int)a4 orientation:(long long)a5;
- (void)computeGeometry:(id)a0 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a1 scaledInputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a2 scale:(double)a3 straightenType:(int)a4 orientation:(long long)a5 actualOrientation:(long long)a6;
- (id)newGeometryForCropOperation:(id)a0;
- (id)newGeometryForRenderDescription:(id)a0;

@end
