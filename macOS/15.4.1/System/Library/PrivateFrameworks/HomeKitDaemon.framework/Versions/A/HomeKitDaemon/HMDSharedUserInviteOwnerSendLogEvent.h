@interface HMDSharedUserInviteOwnerSendLogEvent : HMDSharedUserInviteLogEvent

@property (nonatomic) long long createShareMS;
@property (nonatomic) long long addUserToShareMS;
@property (nonatomic) long long sendInvitationMS;
@property (nonatomic) BOOL userAlreadyAddedToShare;
@property (nonatomic) long long totalInvitationCreateAndSendMS;

- (id)coreAnalyticsEventName;
- (id)initWithHome:(id)a0;
- (id)coreAnalyticsEventDictionary;
- (unsigned long long)coreAnalyticsEventOptions;

@end
