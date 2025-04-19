@class NSString, NSNumber, NSArray;

@interface GKLeaderboardChallengeInternal : GKBaseLeaderboardChallengeInternal

@property (retain, nonatomic) NSString *leaderboardID;
@property (retain, nonatomic) NSNumber *attemptLimit;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *creatorPlayerID;
@property (nonatomic) double scheduledDuration;
@property (retain, nonatomic) NSString *challengeDefinitionID;
@property (retain, nonatomic) NSString *durationCode;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSArray *invitees;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithServerRepresentation:(id)a0;

@end
