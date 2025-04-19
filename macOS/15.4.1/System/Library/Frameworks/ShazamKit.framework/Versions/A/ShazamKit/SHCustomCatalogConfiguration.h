@interface SHCustomCatalogConfiguration : SHCatalogConfiguration

@property (class, readonly) double maximumSearchableQuerySignatureDuration;
@property (class, readonly) double minimumQuerySignatureDurationForTracking;

@property long long numHistogramBuckets;
@property float scoreThreshold;
@property float queryThreshold;
@property long long boundingBox;
@property float frequencyPenaltyMultiplier;
@property BOOL forwardPassOnly;
@property BOOL singlePassOnly;
@property BOOL refineStartEnd;
@property long long algorithm;
@property long long density;
@property BOOL supportsSignatureTracking;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
