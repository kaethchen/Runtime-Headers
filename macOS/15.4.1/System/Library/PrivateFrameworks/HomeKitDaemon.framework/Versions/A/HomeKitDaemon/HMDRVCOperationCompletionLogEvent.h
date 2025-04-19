@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDRVCOperationCompletionLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSNumber *totalOperationalTime;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithErrorCode:(id)a0 totalOperationalTime:(id)a1;

- (void).cxx_destruct;

@end
