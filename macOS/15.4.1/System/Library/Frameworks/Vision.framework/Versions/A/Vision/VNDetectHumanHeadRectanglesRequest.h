@class NSIndexSet, NSNumber, NSArray;

@interface VNDetectHumanHeadRectanglesRequest : VNImageBasedRequest

@property (class, readonly, copy, nonatomic) NSIndexSet *revisionsSupportingPrecisionRecallThresholdOverride;

@property (readonly, copy, nonatomic) NSNumber *precisionRecallThresholdOverride;
@property (nonatomic) float precisionRecallThreshold;
@property (readonly, nonatomic) BOOL canOverridePrecisionRecallThreshold;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)privateRevisionsSet;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)resetPrecisionRecallThreshold;

@end
