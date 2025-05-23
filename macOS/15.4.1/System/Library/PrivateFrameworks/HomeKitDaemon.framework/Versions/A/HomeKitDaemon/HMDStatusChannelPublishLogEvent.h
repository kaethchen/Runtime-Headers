@class NSString, NSDictionary, NSUUID;

@interface HMDStatusChannelPublishLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) NSString *channelPrefix;
@property (readonly, nonatomic) BOOL isRetry;
@property (readonly, nonatomic) long long count;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)denominatorEvent;

- (void).cxx_destruct;
- (id)initWithChannelPrefix:(id)a0 isRetry:(BOOL)a1;
- (id)initWithChannelPrefix:(id)a0 isRetry:(BOOL)a1 count:(long long)a2;

@end
