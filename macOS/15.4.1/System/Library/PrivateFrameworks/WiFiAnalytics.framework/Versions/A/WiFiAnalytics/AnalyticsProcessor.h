@class LinkChangePolicyHandler, NSDateFormatter, AnalyticsStoreMOHandler, DeploymentMetricHandler, RoamPolicyStore;

@interface AnalyticsProcessor : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler;
@property (retain, nonatomic) LinkChangePolicyHandler *linkChangePolicyHandler;
@property (retain, nonatomic) RoamPolicyStore *roamPolicyHandler;
@property (retain, nonatomic) DeploymentMetricHandler *deploymentMetricHandler;
@property (nonatomic) unsigned long long testDateDiffDays;
@property (nonatomic) unsigned long long deploymentMetricDiffDays;
@property (retain, nonatomic) NSDateFormatter *dateFormatterWAMessage;
@property (nonatomic) unsigned long long numRoamSamples;

+ (id)analyticsProcessorWithPersistentContainer:(id)a0;
+ (id)formattedMACAddressNotation:(id)a0 octetCount:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)processMetricKnownNetworkEvent:(id)a0;
- (void)processMetricClientAssociation:(id)a0;
- (id)updateRoamPoliciesAndSummarizeAnalyticsForNetwork:(id)a0 maxAgeInDays:(unsigned long long)a1;
- (void)ageOutAnalytics:(double)a0;
- (id)formattedNotation:(id)a0 octetCount:(unsigned long long)a1;
- (id)getDateFromDateString:(id)a0;
- (struct { long long x0; long long x1; long long x2; })getPolicyHandlersConfig;
- (BOOL)initPolicyHandlers;
- (id)initWithPersistentContainer:(id)a0;
- (void)performPruneBasedOnStoreSizeAndSave;
- (void)performPruneTestBSSes:(id)a0;
- (void)processDatapathMetricStream:(id)a0 withDate:(id)a1;
- (void)processMetricAssociationFailure:(id)a0;
- (void)processMetricBeaconCache:(id)a0;
- (void)processMetricDiagnosticState:(id)a0;
- (void)processMetricFault:(id)a0;
- (void)processMetricHistoricalNetworkQuality:(id)a0;
- (void)processMetricIpV4Latency:(id)a0;
- (void)processMetricLinkChange:(id)a0;
- (void)processMetricLinkTest:(id)a0;
- (void)processMetricNetworkGeotag:(id)a0;
- (void)processMetricParsedBeaconInfo:(id)a0;
- (void)processMetricRecovery:(id)a0;
- (void)processMetricRoamStatus:(id)a0;
- (void)processMetricWiFiStats:(id)a0;
- (void)processWAMessageMetric:(id)a0 data:(id)a1 andSave:(BOOL)a2;
- (void)releaseBackgroundProcessingMOC;
- (BOOL)saveAndResetManagedObjectContext;
- (void)setPolicyHandlersConfig:(struct { long long x0; long long x1; long long x2; })a0;
- (void)storeMetricStreamFragment:(id)a0 withDate:(id)a1;
- (BOOL)unpackRssiSnrCCAFromRssiMetricField:(id)a0 unpackedRssi:(id *)a1 unpackedCca:(id *)a2 unpackedSnr:(id *)a3;

@end
