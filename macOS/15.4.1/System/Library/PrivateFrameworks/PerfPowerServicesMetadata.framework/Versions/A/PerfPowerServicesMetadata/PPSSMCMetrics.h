@class NSString;

@interface PPSSMCMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)allDeclMetrics;
+ (id)smcInstantKeyValueMetrics;
+ (id)smcInstantLookUpMetrics;
+ (id)smcMetrics;
+ (id)smcPowerDeliveryCLVRMetrics;


@end
