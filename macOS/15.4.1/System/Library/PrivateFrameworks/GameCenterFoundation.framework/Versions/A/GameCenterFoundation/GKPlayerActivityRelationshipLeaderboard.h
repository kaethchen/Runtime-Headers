@class NSArray, GKLeaderboardInternal;

@interface GKPlayerActivityRelationshipLeaderboard : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) NSArray *scores;
@property (nonatomic) long long leaderboardType;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboardInternal;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
