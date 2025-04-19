@interface HMDSharedUserInviteAcceptLogEvent : HMDSharedUserInviteLogEvent

@property (nonatomic) long long joinOwnerShareMS;
@property (nonatomic) long long createMKFCKSharedUserDataRootMS;
@property (nonatomic) long long createReverseShareMS;
@property (nonatomic) long long addUserToShareMS;
@property (nonatomic) long long sendAcceptanceToOwnerMS;
@property (nonatomic) long long totalInvitationAcceptanceMS;
@property (nonatomic) long long MKFCKSharedHomeLandMS;
@property (nonatomic) long long processSharedHomeRecordMS;
@property (nonatomic) long long createHomeMS;
@property (nonatomic) long long discoverPrimaryResidentMS;
@property (nonatomic) long long residentSyncRequestMS;
@property (nonatomic) long long residentSyncDataReceivedMS;
@property (nonatomic) long long sharedUserTotalMS;

- (id)coreAnalyticsEventName;
- (id)coreAnalyticsEventDictionary;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithHomeUUID:(id)a0;

@end
