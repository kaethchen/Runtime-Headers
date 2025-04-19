@class NSString;

@interface PPSANEMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)ANEStatusMetrics;
+ (id)allDeclMetrics;
+ (id)compileMetrics;
+ (id)inferenceMetrics;
+ (id)modelLoadMetrics;
+ (id)modelUnLoadMetrics;
+ (id)newInstanceModelLoadMetrics;
+ (id)newInstanceModelUnLoadMetrics;


@end
