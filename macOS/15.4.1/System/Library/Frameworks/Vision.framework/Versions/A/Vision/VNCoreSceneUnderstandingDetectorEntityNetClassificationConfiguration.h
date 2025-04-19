@class VNDisallowedList;

@interface VNCoreSceneUnderstandingDetectorEntityNetClassificationConfiguration : VNCoreSceneUnderstandingDetectorFeatureConfiguration

@property (retain) VNDisallowedList *disallowedList;
@property float minimumConfidence;
@property unsigned long long maximumClassifications;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservationsRecipient:(id)a0;

@end
