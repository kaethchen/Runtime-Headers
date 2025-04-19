@protocol VNObservationsRecipient;

@interface VNImageAnalyzerMultiDetectorAnalysisConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) id<VNObservationsRecipient> observationsRecipient;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned int)analysisTypes;
- (id)initWithObservationsRecipient:(id)a0;
- (unsigned int)labelsListType;

@end
