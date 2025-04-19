@class NSString, NSDictionary, NSUUID;

@interface HMDHouseholdHomeDataChangedLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)incrementCountWithValue:(unsigned long long)a0;
- (id)initAsBecamePrimaryEventWithCount:(unsigned long long)a0 homeUUID:(id)a1;
- (id)initAsInsertEventForModelName:(id)a0 count:(unsigned long long)a1 homeUUID:(id)a2;
- (id)initAsUpdateEventForModelName:(id)a0 propertyName:(id)a1 count:(unsigned long long)a2 homeUUID:(id)a3;
- (id)initWithChangeType:(long long)a0 count:(unsigned long long)a1 modelName:(id)a2 propertyName:(id)a3 homeUUID:(id)a4;
- (id)serializedLogEvent;

@end
