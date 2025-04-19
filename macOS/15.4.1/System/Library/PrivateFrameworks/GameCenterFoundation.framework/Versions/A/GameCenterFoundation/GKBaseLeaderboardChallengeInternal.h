@class NSString, NSDate;

@interface GKBaseLeaderboardChallengeInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *challengeID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (void)updateWithServerResponse:(id)a0;

@end
