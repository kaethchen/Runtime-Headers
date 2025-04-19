@class NSString, NSDictionary, NSUUID;

@interface HMDLaunchEvent : HMMDatedLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic, getter=isFirstLaunchAfterBoot) BOOL firstLaunchAfterBoot;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFirstLaunchAfterBoot:(BOOL)a0;

@end
