@class HMDHome, HMDSharedUserInviteOwnerSendLogEvent, NSString;

@interface HMDSharedUserInviteOwnerSendLogEventBuilder : HMDSharedUserInviteLogEventBuilder <HMFLogging> {
    unsigned long long createShareBeginTime;
    unsigned long long addUserToShareBeginTime;
    unsigned long long sendInvitationBeginTime;
}

@property (readonly, weak) HMDHome *home;
@property (readonly) HMDSharedUserInviteOwnerSendLogEvent *inviteLogEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)isReady;
- (void)cancel;
- (void)submit;
- (id)initWithHome:(id)a0 sessionIdentifier:(id)a1 invitationType:(unsigned long long)a2 invitationAge:(double)a3 invitationSource:(unsigned long long)a4;
- (id)initWithHome:(id)a0 sessionIdentifier:(id)a1 invitationType:(unsigned long long)a2 invitationAge:(double)a3 invitationSource:(unsigned long long)a4 logEventSubmitter:(id)a5 currentUpTicksBlock:(id /* block */)a6 submissionTimerFactory:(id /* block */)a7;
- (void)markAddUserBegin;
- (void)markAddUserEnd;
- (void)markCreateShareBegin;
- (void)markCreateShareEnd;
- (void)markSendInviteBegin;
- (void)markSendInviteEnd;
- (void)markUserAlreadyAddedToShare;

@end
