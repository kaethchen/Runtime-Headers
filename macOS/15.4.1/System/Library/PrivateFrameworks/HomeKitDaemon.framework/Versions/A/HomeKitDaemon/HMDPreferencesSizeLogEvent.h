@class NSString, NSDictionary, NSUUID;

@interface HMDPreferencesSizeLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *preferencesKey;
@property (readonly) unsigned long long preferencesSize;
@property (readonly) unsigned long long eventTrigger;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithApplicationID:(id)a0 preferencesKey:(id)a1 preferencesSize:(unsigned long long)a2 eventTrigger:(unsigned long long)a3;

@end
