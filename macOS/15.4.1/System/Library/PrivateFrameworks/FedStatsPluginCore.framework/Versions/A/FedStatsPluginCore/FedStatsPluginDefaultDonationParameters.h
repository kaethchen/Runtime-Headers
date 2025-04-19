@class NSDictionary;

@interface FedStatsPluginDefaultDonationParameters : NSObject

@property (readonly, nonatomic) double successRateNaught;
@property (readonly, nonatomic) double successProbability;
@property (readonly, nonatomic) unsigned long long defaultExpectedCohortSize;
@property (readonly, nonatomic) NSDictionary *expectedCohortSizes;

+ (id)defaultDonationParametersWithConfiguration:(id)a0 error:(id *)a1;
+ (id)expectedCohortSizesKeyForCohortVariable:(id)a0 cohortValue:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)determineDefaultRecordCountFor:(id)a0;
- (id)distributionFor:(id)a0;
- (unsigned long long)expectedCohortSizeFor:(id)a0;
- (id)initWithEpsilon:(double)a0 delta:(double)a1 defaultExpectedCohortSize:(unsigned long long)a2 expectedCohortSizes:(id)a3;

@end
