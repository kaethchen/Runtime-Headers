@class NSUUID, NSString, NSDictionary;

@interface HMDSharedUserInviteLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (retain) NSUUID *sessionIdentifier;
@property unsigned long long invitationType;
@property (nonatomic) unsigned long long invitationAge;
@property (nonatomic) unsigned long long invitationAgeSeconds;
@property (nonatomic) unsigned long long invitationSource;
@property (nonatomic) BOOL iCloudSignedIn;
@property (nonatomic) BOOL manateeAvailable;
@property (nonatomic) BOOL networkAvailable;
@property (nonatomic) BOOL IDSAvailable;
@property (nonatomic) long long IDSRegistrationStatus;
@property (nonatomic) long long IDSRegistrationError;
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
- (id)initWithHomeUUID:(id)a0;

@end
