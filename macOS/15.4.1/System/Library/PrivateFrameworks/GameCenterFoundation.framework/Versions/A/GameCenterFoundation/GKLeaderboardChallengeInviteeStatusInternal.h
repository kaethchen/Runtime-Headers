@class NSString;

@interface GKLeaderboardChallengeInviteeStatusInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSString *playerID;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithServerFragment:(id)a0;

@end
