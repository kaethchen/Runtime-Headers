@class NSString, NSDictionary, NSUUID;

@interface HMDResidentStatusChannelPublishLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) long long publishReason;
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

+ (id)denominatorEvent:(id)a0;

- (id)initWithHomeUUID:(id)a0 publishReason:(long long)a1;
- (id)initWithHomeUUID:(id)a0 publishReason:(long long)a1 count:(long long)a2;

@end
