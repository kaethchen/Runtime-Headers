@class NSNumber, GKLeaderboardChallengeDetailsPageInternal, GKLeaderboardChallengeWinComparisonPageInternal;

@interface GKLeaderboardChallengeComparisonInternal : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *completedChallengeCount;
@property (retain, nonatomic) NSNumber *completedChallengeGameCount;
@property (retain, nonatomic) GKLeaderboardChallengeDetailsPageInternal *completedChallenges;
@property (retain, nonatomic) GKLeaderboardChallengeWinComparisonPageInternal *wonChallenges;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithServerRepresentation:(id)a0;

@end
