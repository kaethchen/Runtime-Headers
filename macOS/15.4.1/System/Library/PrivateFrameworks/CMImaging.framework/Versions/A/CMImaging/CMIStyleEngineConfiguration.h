@interface CMIStyleEngineConfiguration : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (nonatomic) unsigned long long linearSystemType;
@property (nonatomic) unsigned long long linearSystemOrder;
@property (nonatomic) unsigned long long linearSystemSolver;
@property (nonatomic) unsigned int weightPlaneCount;
@property (nonatomic) void /* unknown type, empty encoding */ spotlightCount;
@property (nonatomic) BOOL inputIsLinear;
@property (nonatomic) BOOL outputShouldBeLinear;
@property (nonatomic) BOOL inputThumbnailIsLinear;
@property (nonatomic) BOOL inputThumbnailForLearningIsLinear;
@property (nonatomic) BOOL inputThumbnailForLearningWeightsIsLinear;
@property (nonatomic) BOOL inputThumbnailForIntegrationIsLinear;
@property (nonatomic) BOOL inputThumbnailForResidualCorrectionIsLinear;
@property (nonatomic) BOOL targetThumbnailIsLinear;
@property (nonatomic) BOOL targetThumbnailForLearningIsLinear;
@property (nonatomic) BOOL targetThumbnailForResidualCorrectionIsLinear;
@property (nonatomic) BOOL createAndSolveGlobalLinearSystem;
@property (nonatomic) float globalLinearSystemMixFactor;
@property (nonatomic) BOOL inputCoefficientsF16;
@property (nonatomic) BOOL outputCoefficientsF16;
@property (nonatomic) BOOL fastStyleApplication;
@property (nonatomic) BOOL applyDithering;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } linearSystemPriorMatrix;
@property (nonatomic) BOOL useBicubicIntegration;
@property (nonatomic) BOOL shouldFlushCVMTLTextureCacheAfterProcessing;
@property (nonatomic) BOOL shouldFlushCVMTLBufferCacheAfterProcessing;
@property (nonatomic) unsigned long long filterForInputLearningThumbnailCreation;
@property (nonatomic) unsigned long long filterForInputLearningWeightsThumbnailCreation;
@property (nonatomic) unsigned long long filterForInputIntegrationThumbnailCreation;
@property (nonatomic) unsigned long long filterForInputResidualCorrectionThumbnailCreation;
@property (nonatomic) unsigned long long filterForTargetLearningThumbnailCreation;
@property (nonatomic) unsigned long long filterForTargetResidualCorrectionThumbnailCreation;
@property (nonatomic) BOOL applySyntheticNoise;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
