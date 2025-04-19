@class NSString, NSNumber;

@interface GKLeaderboardChallengeParticipantInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *formattedScoreValue;
@property (retain, nonatomic) NSNumber *scoreValue;
@property (retain, nonatomic) NSNumber *attemptCount;
@property (retain, nonatomic) NSNumber *rank;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithServerFragment:(id)a0;

@end
