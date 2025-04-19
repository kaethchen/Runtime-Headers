@class NSString;

@interface PPSXPCMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)mailIMAPMetrics;
+ (id)allDeclMetrics;
+ (id)groupActivitiesMetrics;
+ (id)intelligencePlatformViewUpdateMetrics;
+ (id)mailCategorizationEnabledMetrics;
+ (id)mailCategorizationMetrics;
+ (id)vkDataScannerMetrics;


@end
