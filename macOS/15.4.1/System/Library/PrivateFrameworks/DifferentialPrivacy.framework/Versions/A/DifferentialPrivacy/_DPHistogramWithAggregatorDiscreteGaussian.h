@class NSString, _DPSymmetricRAPPORWithOHE;

@interface _DPHistogramWithAggregatorDiscreteGaussian : NSObject <_DPPrivacyBudgetAnalysis>

@property (readonly, nonatomic) double sigma;
@property (readonly, nonatomic) _DPSymmetricRAPPORWithOHE *rappor;
@property (readonly, nonatomic) double squaredL2Sensitivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
