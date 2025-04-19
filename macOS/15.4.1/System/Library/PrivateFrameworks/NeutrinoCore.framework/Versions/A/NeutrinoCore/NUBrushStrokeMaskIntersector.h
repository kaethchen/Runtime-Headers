@class CIImage, NUHistogramCalculator, NUHistogram;

@interface NUBrushStrokeMaskIntersector : NSObject {
    unsigned long long _signpost;
}

@property (readonly, nonatomic) NUHistogramCalculator *histogramCalculator;
@property (readonly, nonatomic) CIImage *brushStrokeMaskImage;
@property (readonly, nonatomic) CIImage *maskImage;
@property (readonly, nonatomic) NUHistogram *brushHistogram;
@property (readonly, nonatomic) NUHistogram *maskHistogram;
@property (readonly, nonatomic) NUHistogram *intersectionHistogram;
@property (readonly, nonatomic) CIImage *intersectionImage;
@property (readonly, nonatomic) CIImage *brushMinusMaskImage;
@property (readonly, nonatomic) double brushPercentInsideMask;
@property (readonly, nonatomic) double maskPercentInsideBrush;

- (id)init;
- (void).cxx_destruct;
- (double)calculateOverlapOfHistogram:(id)a0;
- (id)initWithBrushMask:(id)a0 mask:(id)a1 strokeScale:(struct { long long x0; long long x1; })a2;

@end
