@interface HMAccessoryEventTopic : NSObject

+ (id)filterTopicsReplacingWithIndex:(id)a0;
+ (unsigned long long)suffixIDFromTopicSuffix:(id)a0;
+ (id)topicFromSuffixID:(unsigned long long)a0 homeUUID:(id)a1 accessoryUUID:(id)a2;
+ (id)topicPrefixWithHomeUUID:(id)a0 accessoryUUID:(id)a1;

@end
