@class NSUUID, NSString, NSDictionary;

@interface HMDCoreDataCloudKitSetupActivityLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) NSUUID *activityIdentifier;
@property (readonly, nonatomic) NSString *setupSessionIdentifier;
@property (nonatomic) long long checkAccountDurationMS;
@property (nonatomic) long long checkUserIdentityDurationMS;
@property (nonatomic) long long initializeAssetStorageDurationMS;
@property (nonatomic) long long initializeDatabaseSubscriptionDurationMS;
@property (nonatomic) long long initializeMetadataDurationMS;
@property (nonatomic) long long initializeZoneDurationMS;
@property (nonatomic) long long scheduledDurationMS;
@property (nonatomic) long long totalSetupDurationMS;
@property (nonatomic) long long phaseErrorCode;
@property (retain, nonatomic) NSString *phaseErrorDomain;
@property (retain, nonatomic) NSString *errorPhaseName;
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
- (id)initWithActivityIdentifier:(id)a0 setupSessionIdentifier:(id)a1;
- (void)setDurationForPhase:(id)a0 duration:(double)a1;
- (void)setErrorForPhase:(id)a0 error:(id)a1;

@end
