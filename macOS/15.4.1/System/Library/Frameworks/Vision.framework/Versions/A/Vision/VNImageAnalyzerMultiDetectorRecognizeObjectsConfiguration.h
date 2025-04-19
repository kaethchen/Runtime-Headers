@class VNDisallowedList;

@interface VNImageAnalyzerMultiDetectorRecognizeObjectsConfiguration : VNImageAnalyzerMultiDetectorAnalysisConfiguration

@property (copy, nonatomic) VNDisallowedList *disallowedList;
@property (nonatomic) float minimumDetectionConfidence;
@property (nonatomic) float nonMaximumSuppressionThreshold;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned int)analysisTypes;
- (id)initWithObservationsRecipient:(id)a0;
- (unsigned int)labelsListType;

@end
