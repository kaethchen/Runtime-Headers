@class NSString;

@interface PPSStorageMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)timezoneMetrics;
+ (id)allDeclMetrics;
+ (id)configMetrics;
+ (id)configurationMetrics;
+ (id)timeOffsetMetrics;
+ (id)timezoneLoggingCadence;


@end
