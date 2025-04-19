@interface ImageProcessor_VSA : ImageProcessor_Ext

- (long long)postprocessFrameWithScaler:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1 waitForCompletion:(BOOL)a2;
- (BOOL)shouldCropOutputFrame:(struct __CVBuffer { } *)a0;
- (BOOL)useScalerForPostprocessOutput:(struct __CVBuffer { } *)a0;

@end
