@class HMDUserActivityType3Policy;

@interface HMDUserActivityType3Detector : HMDUserActivityStateDetector <HMDUserActivityType3PolicyDelegate>

@property (readonly, nonatomic) HMDUserActivityType3Policy *policy;

+ (unsigned long long)contributorType;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)evaluateAndSetInitialReport;
- (id)initWithDataSource:(id)a0 policy:(id)a1;
- (void)policyDidUpdateType3State;
- (void)setLatestReportWithReason:(unsigned long long)a0;

@end
