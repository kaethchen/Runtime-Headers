@interface RKImaging : NSObject

+ (void)initialize;
+ (id)sharedImaging;

- (id)_cpuContext;
- (id)_cpuQueue;
- (id)newCPUContext;
- (id)newRenderContextForOpenGLContext:(id)a0;
- (id)textureForPreviewCIImage:(id)a0 size:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a1 colorSpace:(struct CGColorSpace { } *)a2 device:(id)a3;
- (id)textureForPreviewImage:(id)a0 size:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a1 device:(id)a2;

@end
