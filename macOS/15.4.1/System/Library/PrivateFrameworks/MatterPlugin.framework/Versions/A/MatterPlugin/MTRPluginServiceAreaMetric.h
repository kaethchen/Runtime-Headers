@class MTRPluginInvokeCommandMetric, NSString;

@interface MTRPluginServiceAreaMetric : MTRPluginMetric <MTRPluginMetricTransformDelegate>

@property (retain) MTRPluginInvokeCommandMetric *invokeCommandMetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandPaths;
+ (id)transformInvokeCommandExpectationMetric:(id)a0;

- (void).cxx_destruct;
- (id)additionalCoreAnalyticsEventDictionary;

@end
