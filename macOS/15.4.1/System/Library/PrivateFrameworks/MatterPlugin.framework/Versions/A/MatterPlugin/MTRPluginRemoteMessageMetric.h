@class MTRPluginPBMHeader;

@interface MTRPluginRemoteMessageMetric : MTRPluginMetric

@property (retain) MTRPluginPBMHeader *messageHeader;

+ (id)remoteIncomingRequestMessageMetric:(id)a0;
+ (id)remoteOutgoingRequestMessageMetric:(id)a0;

- (void).cxx_destruct;
- (id)additionalCoreAnalyticsEventDictionary;

@end
