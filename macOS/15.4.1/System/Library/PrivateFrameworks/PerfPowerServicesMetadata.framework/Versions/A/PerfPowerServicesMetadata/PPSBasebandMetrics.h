@class NSString;

@interface PPSBasebandMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventMetrics;
+ (id)subsystem;
+ (id)BBMessageLite;
+ (id)BBReport;
+ (id)SmartDataMode;
+ (id)BBMsgAll;
+ (id)SleepWakeABM;
+ (id)allDeclMetrics;
+ (id)histogramMetrics;
+ (id)messageMetricDump;
+ (id)messageTriggerDump;
+ (id)telephonyActivity;
+ (id)telephonyRegistration;


@end
