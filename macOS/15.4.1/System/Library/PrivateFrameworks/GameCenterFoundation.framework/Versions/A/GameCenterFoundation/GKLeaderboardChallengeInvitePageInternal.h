@class NSArray, NSString;

@interface GKLeaderboardChallengeInvitePageInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *invites;
@property (retain, nonatomic) NSString *nextURL;

+ (id)initWithServerFragment:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
