@interface PEGlobalSettings : NSObject

@property (nonatomic) BOOL smartCopyPasteReviewUIEnabled;
@property (nonatomic) double smartCopyPasteSimilarityGatingThreshold;
@property (nonatomic) BOOL smartCopyPasteGateOnCaptureTime;
@property (nonatomic) BOOL affectManuallyEditedSlidersOnly;
@property (nonatomic) BOOL fetchAndSendScenePrintsForSliderNet;
@property (nonatomic) BOOL synchronousStylesCopyPaste;
@property (nonatomic) BOOL synchronousLivePhotoStylesCopyPaste;
@property (nonatomic) BOOL shouldUseFlipAnimationForValuePlatter;
@property (nonatomic) long long targetPointsFillStrategy;
@property (nonatomic) double retouchTargetPointCoverageThreshold;
@property (nonatomic) double cleanupLassoDistance;
@property (nonatomic) double cleanupLassoHeadTailFraction;
@property (nonatomic) double cleanupLassoHeadTailMaxLength;
@property (nonatomic) double cleanupFilledCoverageRatio;
@property (nonatomic) double cleanupShortStrokeLengthThreshold;
@property (nonatomic) double cleanupShortStrokeAngleThreshold;
@property (nonatomic) BOOL skipOnDemandSegmentationOnFaces;
@property (nonatomic) double retouchStrokeIntersectionPercentage;
@property (nonatomic) double subjectExclusionMaskHitRadius;

+ (id)globalSettings;

- (id)init;
- (void)_setInitialValues;
- (BOOL)existingBoolValueForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (double)existingFloatValueForKey:(id)a0 withDefaultValue:(double)a1;
- (long long)existingIntegerValueForKey:(id)a0 withDefaultValue:(long long)a1;

@end
