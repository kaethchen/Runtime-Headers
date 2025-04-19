@class NSString, NSDate;

@interface GKLeaderboardChallengeInviteeInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *fromPlayerID;
@property (retain, nonatomic) NSDate *invitedDate;
@property (retain, nonatomic) NSString *status;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithServerFragment:(id)a0;

@end
