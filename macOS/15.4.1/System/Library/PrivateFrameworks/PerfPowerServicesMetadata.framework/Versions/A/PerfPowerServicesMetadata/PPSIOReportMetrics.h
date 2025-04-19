@class NSString;

@interface PPSIOReportMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)ans2Msp0Metrics;
+ (id)allDeclMetrics;
+ (id)amcStatsPerfCountersMetrics;
+ (id)aop2PowerMetrics;
+ (id)dcpScanoutStatsMetrics;
+ (id)ispIspEventsMetrics;
+ (id)pmpDcsFloorMetrics;
+ (id)pmpPmcAveFloorMetrics;
+ (id)pmpPmcDispFloorMetrics;
+ (id)pmpSocFloorMetrics;
+ (id)socStatsDeviceStatesMetrics;
+ (id)socStatsEventsMetrics;
+ (id)socStatsIdsFuseMetrics;
+ (id)socStatsOprtpMetrics;
+ (id)socStatsPmgrCountersMetrics;


@end
