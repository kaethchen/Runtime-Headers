@class NUBrushStroke, CIImage, NSObject;
@protocol OS_dispatch_queue;

@interface PECleanupSegmentAnalyzer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyzerQueue;
@property (retain, nonatomic) NUBrushStroke *cachedBrushStroke;
@property (retain, nonatomic) CIImage *cachedStrokeMask;
@property (nonatomic) struct CGSize { double width; double height; } cachedStrokeMaskSize;
@property (nonatomic) BOOL cachedStrokeMaskFilled;

- (id)init;
- (void).cxx_destruct;
- (void)_analyzeSegmentationResult:(id)a0 forStroke:(id)a1 treatStrokeAsFilledCircle:(BOOL)a2 maskContext:(id)a3 compositionController:(id)a4 geometry:(id)a5 usingTargetPoints:(BOOL)a6 userSettings:(id)a7 completion:(id /* block */)a8;
- (void)_analyzeStrokeMaskIntersections:(id)a0 treatStrokeAsFilledCircle:(BOOL)a1 usingMaskContext:(id)a2 useTargetPoints:(BOOL)a3 compositionController:(id)a4 geometry:(id)a5 userSettings:(id)a6 completion:(id /* block */)a7;
- (id)_brushStrokeToNormalizedSampledPointArray:(id)a0 maxPointCount:(long long)a1 originalImageSize:(struct CGSize { double x0; double x1; })a2;
- (id)_evenlySampleArray:(id)a0 maxCount:(long long)a1;
- (id)_filledRegionOfFilledStrokeImage:(id)a0 withUnfilledStrokeImage:(id)a1;
- (id)_maskForStroke:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 maskSize:(struct CGSize { double x0; double x1; })a2 filled:(BOOL)a3;
- (BOOL)_strokeAppearsToBeClosedShape:(id)a0 imageToScreenSpaceScale:(double)a1 lassoDistance:(double)a2;
- (id)_strokeToNormalizedSampledPointArray:(id)a0 maxPointCount:(long long)a1 originalImageSize:(struct CGSize { double x0; double x1; })a2 treatStrokeAsFilledCircle:(BOOL)a3;
- (void)analyzeStrokeMaskIntersections:(id)a0 inpaintMaskContext:(id)a1 compositionController:(id)a2 geometry:(id)a3 imageToScreenSpaceScale:(double)a4 userSettings:(id)a5 faceRects:(id)a6 completion:(id /* block */)a7;
- (void)hitTestSegmentation:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 inpaintMaskContext:(id)a2 compositionController:(id)a3 geometry:(id)a4 completion:(id /* block */)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleFactor:(double)a1;
- (BOOL)shouldChooseSegment:(id)a0;

@end
