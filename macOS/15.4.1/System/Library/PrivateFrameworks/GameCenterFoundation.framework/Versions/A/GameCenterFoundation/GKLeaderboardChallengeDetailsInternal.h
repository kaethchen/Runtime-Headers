@class NSNumber, NSArray;

@interface GKLeaderboardChallengeDetailsInternal : GKBaseLeaderboardChallengeInternal

@property (retain, nonatomic) NSNumber *rank;
@property (retain, nonatomic) NSNumber *remainingAttempts;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSNumber *participantCount;

+ (id)initWithServerFragment:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (void)updateWithServerFragment:(id)a0;

@end
