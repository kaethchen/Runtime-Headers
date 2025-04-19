@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKScoreInternal *score;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboard;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)titleText;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
