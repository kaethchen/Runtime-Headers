@interface HMDHomeEventsGenerated : NSObject

+ (id)accessorySettingsTopicsForAccessory:(id)a0 homeUUID:(id)a1;
+ (id)accessoryTopicsForAccessory:(id)a0 homeUUID:(id)a1;
+ (id)allTopics;
+ (id)clientIndexToHomeTopicsForHomeUUID:(id)a0;
+ (id)expandedTopicsWithTopics:(id)a0 homeManager:(id)a1;
+ (id)forwardingTopicsWithTopics:(id)a0 forHomeRouterWithUUID:(id)a1;
+ (id)homeInfoIndexForHomeUUID:(id)a0;
+ (id)indexTopicForTopicSuffix:(id)a0 indexName:(id)a1;
+ (id)topicMap;
+ (id)upstreamClientTopicForTopic:(id)a0;
+ (id)upstreamHomeAndAccessoryTopicsForTopic:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2;
+ (id)upstreamHomeTopicForTopic:(id)a0 homeUUID:(id)a1;
+ (id)upstreamTopicsForTopic:(id)a0;

@end
