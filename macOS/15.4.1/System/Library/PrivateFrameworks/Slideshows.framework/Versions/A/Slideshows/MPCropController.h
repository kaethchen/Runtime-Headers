@class MPDocument, NSRecursiveLock;

@interface MPCropController : NSObject {
    id _delegate;
    MPDocument *_authoredDocument;
    NSRecursiveLock *_cropLock;
}

+ (id)sharedController;
+ (void)releaseSharedController;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)_applyCropToSlidesInEffectContainersWithArguments:(id)a0;
- (void)applyAnimatedCropToBreakSlide:(id)a0 withOptions:(id)a1;
- (void)applyAnimatedCropToSlide:(id)a0 withOptions:(id)a1;
- (void)applyAnimatedCropToSlide:(id)a0 withOptions:(id)a1 centeredAt:(struct CGPoint { double x0; double x1; })a2 alwaysZoomIn:(BOOL)a3;
- (void)applyAnimatedCropWithROIsToSlide:(id)a0 withOptions:(id)a1;
- (void)applyCropToSlide:(id)a0 inDocument:(id)a1 withOptions:(id)a2;
- (void)applyCropToSlide:(id)a0 withOptions:(id)a1;
- (void)applyCropToSlidesInEffectContainers:(id)a0 inDocument:(id)a1 withOptions:(id)a2;
- (void)applyMultiFaceAnimatedCropToSlide:(id)a0 withOptions:(id)a1;
- (void)applyStationaryCropToSlide:(id)a0 withOptions:(id)a1;
- (void)batchCrop:(id)a0;
- (struct CGPoint { double x0; double x1; })checkFarApartROIs:(id)a0 withImageSize:(struct CGSize { double x0; double x1; })a1 visibleAspectRatio:(double)a2 roiCenter:(struct CGPoint { double x0; double x1; })a3;
- (void)cropSlidesForLayerGroup:(id)a0 inDocument:(id)a1 withOptions:(id)a2;
- (void)cropSlidesInDocument:(id)a0 withOptions:(id)a1;
- (double)durationOfSlide:(id)a0;
- (void)setupWithDocument:(id)a0 andOptions:(id)a1;

@end
