@class NSString, NSDictionary, NSUUID;

@interface HMDWalletKeyAliroHealingEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property long long controllerType;
@property unsigned long long userPrivilege;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithControllerType:(long long)a0 userPrivilege:(unsigned long long)a1;

@end
