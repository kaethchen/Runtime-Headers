@class NSString, NSDictionary, NSUUID;

@interface HMDHomePodSensorPairingLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly) BOOL pairingSuccess;
@property (readonly) unsigned long long failureReason;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStartTime:(double)a0 pairingSuccess:(BOOL)a1 failureReason:(unsigned long long)a2;

@end
