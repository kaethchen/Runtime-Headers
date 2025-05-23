@class NSString;

@interface PPSRenderMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)albumAnimationMetrics;
+ (id)albumMotionMetrics;
+ (id)allDeclMetrics;
+ (id)layerCountMetrics;
+ (id)offscreenReasonMetrics;
+ (id)renderPassCountMetrics;


@end
