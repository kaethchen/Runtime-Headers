@class NSString;

@interface PPSGenerativeFunctionMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)allDeclMetrics;
+ (id)appleDiffusionMetrics;
+ (id)assetLoadMetrics;
+ (id)fileResidentRatioMetrics;
+ (id)handwritingModelInferenceMetrics;
+ (id)handwritingModelLoadMetrics;
+ (id)mmExecuteRequestMetrics;
+ (id)optInMetrics;
+ (id)smartReplySessionMetrics;
+ (id)summarizationMetrics;
+ (id)tgiExecuteRequestMetrics;


@end
