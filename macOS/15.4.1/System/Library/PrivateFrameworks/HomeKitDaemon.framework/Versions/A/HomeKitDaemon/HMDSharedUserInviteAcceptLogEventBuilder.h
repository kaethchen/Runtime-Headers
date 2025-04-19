@class NSString, HMDHomeManager, HMDSharedUserInviteAcceptLogEvent;

@interface HMDSharedUserInviteAcceptLogEventBuilder : HMDSharedUserInviteLogEventBuilder <HMFLogging> {
    unsigned long long joinOwnerShareBeginTime;
    unsigned long long createMKFCKSharedUserDataRootBeginTime;
    unsigned long long createReverseShareBeginTime;
    unsigned long long addUserToShareBeginTime;
    unsigned long long sendAcceptanceToOwnerBeginTime;
    unsigned long long discoverPrimaryResidentBeginTime;
    unsigned long long residentSyncBeginTime;
}

@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) HMDSharedUserInviteAcceptLogEvent *acceptLogEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)isReady;
- (void)submit;
- (void)markCreatedHome;
- (id)initWithHomeUUID:(id)a0 homeManager:(id)a1 sessionIdentifier:(id)a2 invitationType:(unsigned long long)a3 invitationAge:(double)a4 invitationSource:(unsigned long long)a5 logEventSubmitter:(id)a6 wifiManager:(id)a7 currentUpTicksBlock:(id /* block */)a8 submissionTimerFactory:(id /* block */)a9;
- (id)initWithHomeUUID:(id)a0 homeManager:(id)a1 sessionIdentifier:(id)a2 invitationType:(unsigned long long)a3 invitationAge:(double)a4 invitationSource:(unsigned long long)a5 wifiManager:(id)a6;
- (void)markAddUserBegin;
- (void)markAddUserEnd;
- (void)markCreateMKFCKSharedUserDataRootBegin;
- (void)markCreateMKFCKSharedUserDataRootEnd;
- (void)markCreateReverseShareBegin;
- (void)markCreateReverseShareEnd;
- (void)markDiscoverPrimaryResidentBegin;
- (void)markDiscoverPrimaryResidentEnd;
- (void)markJoinOwnerShareBegin;
- (void)markJoinOwnerShareEnd;
- (void)markResidentSyncBegin;
- (void)markResidentSyncEnd;
- (void)markSendAcceptanceToOwnerBegin;
- (void)markSendAcceptanceToOwnerEnd;

@end
