@class NSString, NSNumber;

@interface GKLeaderboardChallengeWinComparisonInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *playerWinCount;
@property (retain, nonatomic) NSNumber *otherPlayerWinCount;

+ (id)initWithServerFragment:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
