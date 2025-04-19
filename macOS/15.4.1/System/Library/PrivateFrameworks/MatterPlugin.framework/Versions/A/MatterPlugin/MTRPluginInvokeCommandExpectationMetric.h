@class MTRPluginInvokeCommandMetric;

@interface MTRPluginInvokeCommandExpectationMetric : MTRPluginMetric

@property (retain) MTRPluginInvokeCommandMetric *invokeCommandMetric;

+ (id)invokeCommandExpectationMetricForMetric:(id)a0;

- (void).cxx_destruct;
- (id)remoteMessageID;
- (id)additionalCoreAnalyticsEventDictionary;
- (void)setRemoteMessageID:(id)a0;

@end
