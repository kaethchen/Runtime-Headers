@class NSString;

@interface PPSBGProcessingCommonMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)AppResumeInferredCarryMetrics;
+ (id)BuddyDataMetrics;
+ (id)FeatureFlagMetrics;
+ (id)allDeclMetrics;
+ (id)configMetrics;
+ (id)localeMetrics;
+ (id)optInMetrics;
+ (id)timeOffsetCadence;
+ (id)timeOffsetMetrics;
+ (id)timezoneLoggingCadence;


@end
