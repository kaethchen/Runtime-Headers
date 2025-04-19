@class NSString, HMDHome, HMDSharedUserInviteOwnerResponseLogEvent;

@interface HMDSharedUserInviteOwnerResponseLogEventBuilder : HMDSharedUserInviteLogEventBuilder <HMFLogging> {
    unsigned long long authenticateUserBeginTime;
    unsigned long long joiningReverseShareBeginTime;
    unsigned long long addUserToHomeBeginTime;
    HMDHome *_home;
    HMDSharedUserInviteOwnerResponseLogEvent *_responseLogEvent;
}

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
- (void)markAddUserToHomeBegin;
- (void)markAddUserToHomeEnd;
- (void)markAuthenticateUserBegin;
- (void)markAuthenticateUserEnd;
- (void)markJoiningReverseShareBegin;
- (void)markJoiningReverseShareEnd;

@end
