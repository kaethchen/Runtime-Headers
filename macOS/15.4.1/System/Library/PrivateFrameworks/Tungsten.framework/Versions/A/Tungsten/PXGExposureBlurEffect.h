@class PXGExposureBlurKernel;

@interface PXGExposureBlurEffect : PXGOffscreenEffect {
    PXGExposureBlurKernel *_kernel;
}

@property (nonatomic) double radius;
@property (nonatomic) double exposure;
@property (nonatomic) double multiplier;

- (void).cxx_destruct;
- (id)kernel;
- (id)initWithEntityManager:(id)a0;

@end
