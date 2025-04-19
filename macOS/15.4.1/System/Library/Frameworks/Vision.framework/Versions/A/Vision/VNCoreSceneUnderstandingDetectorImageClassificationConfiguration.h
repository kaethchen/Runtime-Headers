@class VNDisallowedList;

@interface VNCoreSceneUnderstandingDetectorImageClassificationConfiguration : VNCoreSceneUnderstandingDetectorFeatureConfiguration

@property (retain) VNDisallowedList *disallowedList;
@property float minimumConfidence;
@property unsigned long long maximumLeafClassifications;
@property unsigned long long maximumHierarchicalClassifications;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservationsRecipient:(id)a0;

@end
