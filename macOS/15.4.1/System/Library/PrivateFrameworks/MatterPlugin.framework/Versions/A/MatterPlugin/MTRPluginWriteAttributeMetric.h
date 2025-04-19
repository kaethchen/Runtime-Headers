@class NSNumber;

@interface MTRPluginWriteAttributeMetric : MTRPluginMetric

@property int clientType;
@property (retain) NSNumber *endpointID;
@property (retain) NSNumber *clusterID;
@property (retain) NSNumber *attributeID;
@property (getter=isTimedWrite) BOOL timedWrite;

+ (id)writeAttributeMetricForDevice:(id)a0 homeID:(id)a1 clientType:(int)a2 endpointID:(id)a3 clusterID:(id)a4 attributeID:(id)a5 timedWrite:(BOOL)a6 remoteMessageID:(id)a7;

- (void).cxx_destruct;
- (id)additionalCoreAnalyticsEventDictionary;

@end
