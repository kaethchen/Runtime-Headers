@class NSString, NSDictionary, NSArray, NSDate, GKScoreInternal, GKPlayerInternal;

@interface GKLeaderboardInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned long long maxRange;
@property (retain, nonatomic) NSString *recordID;
@property (retain, nonatomic) NSString *ascResourceID;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *baseLeaderboardID;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *leaderboardSetIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *lastSubmittedDate;
@property (retain, nonatomic) NSDictionary *icons;
@property (nonatomic) unsigned long long releaseState;
@property (nonatomic) unsigned int overallRank;
@property (nonatomic) unsigned int overallRankCount;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short friendRankCount;
@property (nonatomic) unsigned int maxRank;
@property (retain, nonatomic) NSArray *scores;
@property (retain, nonatomic) GKScoreInternal *playerScore;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *nextStartDate;
@property (nonatomic) double duration;
@property (retain, nonatomic) GKPlayerInternal *creator;
@property (retain, nonatomic) NSString *context;
@property (nonatomic) BOOL supportsChallenges;
@property (copy, nonatomic) NSString *activityIdentifier;
@property (retain, nonatomic) NSDictionary *activityProperties;
@property (copy, nonatomic) NSString *leaderboardDescription;

+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
