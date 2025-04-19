@class NSString, NSDictionary, NSUUID;

@interface HMDMediaGroupSetupLatencyLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, copy, nonatomic) NSString *requestType;
@property (readonly, copy, nonatomic) NSString *systemUUID;
@property (readonly, copy, nonatomic) NSString *deviceRole;
@property (readonly, nonatomic) unsigned long long totalDurationMS;
@property (readonly, copy, nonatomic) NSString *errorStage;
@property (readonly, copy) NSString *setupSessionIdentifier;
@property (readonly, nonatomic) unsigned long long setupRequestOption;
@property (readonly, nonatomic) unsigned long long totalDurationSinceAccessorySetupStartMS;
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
- (id)initWithRequestType:(id)a0 systemUUID:(id)a1 deviceRole:(id)a2 totalDurationMS:(unsigned long long)a3 setupSessionIdentifier:(id)a4 setupRequestOption:(unsigned long long)a5 totalDurationSinceAccessorySetupStartMS:(unsigned long long)a6 errorStage:(id)a7;

@end
