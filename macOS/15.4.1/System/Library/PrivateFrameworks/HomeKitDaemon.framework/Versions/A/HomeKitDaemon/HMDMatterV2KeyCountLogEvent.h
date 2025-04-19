@class NSString, NSDictionary, NSUUID;

@interface HMDMatterV2KeyCountLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) unsigned long long numV2Keys;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithDictionary:(id)a0;
- (id)initWithConfigurationDataSource:(id)a0;
- (id)initWithHomeUUID:(id)a0 numV2Keys:(unsigned long long)a1;
- (id)serializedMetrics;

@end
