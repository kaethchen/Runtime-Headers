@class NSNumber, NSArray;

@interface GKLeaderboardChallengeCompletedSummaryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSNumber *totalGames;
@property (retain, nonatomic) NSNumber *totalFriends;
@property (retain, nonatomic) NSArray *gameCounts;
@property (retain, nonatomic) NSArray *playerCounts;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithServerRepresentation:(id)a0;

@end
