@class NSNumber, MTRAttributeValueWaiter, NSArray;

@interface MTRPluginInvokeCommandMetric : MTRPluginMetric

@property (retain) MTRAttributeValueWaiter *attributeValueWaiter;
@property (getter=isDeviceAtExpectedState) BOOL deviceAtExpectedState;
@property int clientType;
@property (retain) NSNumber *endpointID;
@property (retain) NSNumber *clusterID;
@property (retain) NSNumber *commandID;
@property (retain) id commandFields;
@property (retain) NSArray *expectedValues;
@property (retain) NSNumber *expectedValueInterval;
@property (getter=isTimedInvoke) BOOL timedInvoke;
@property (getter=isBatchCommand) BOOL batchCommand;

+ (id)invokeBatchCommandMetricForDevice:(id)a0 homeID:(id)a1 clientType:(int)a2 commandPath:(id)a3 commandFields:(id)a4 remoteMessageID:(id)a5;
+ (id)invokeCommandMetricForDevice:(id)a0 homeID:(id)a1 clientType:(int)a2 endpointID:(id)a3 clusterID:(id)a4 commandID:(id)a5 commandFields:(id)a6 expectedValues:(id)a7 expectedValueInterval:(id)a8 timedInvoke:(BOOL)a9 remoteMessageID:(id)a10;

- (void).cxx_destruct;
- (id)additionalCoreAnalyticsEventDictionary;

@end
