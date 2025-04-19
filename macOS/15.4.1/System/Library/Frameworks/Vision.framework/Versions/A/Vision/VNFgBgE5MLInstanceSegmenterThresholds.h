@interface VNFgBgE5MLInstanceSegmenterThresholds : NSObject

@property float cocoConfidenceThreshold;
@property float miyoshiConfidenceThreshold;
@property float maskThreshold;
@property float IoUThreshold;
@property float stabilityScoreThreshold;
@property float matchScoreThreshold;
@property float validMinMaskRatio;
@property float defaultValidMinimumMaskPixelCount;
@property float fillGapsAreaRatio;

- (id)initDefaultConfigRevision1;
- (id)initWithRevision:(unsigned long long)a0 error:(id *)a1;

@end
