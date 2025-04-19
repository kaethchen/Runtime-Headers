@class NSString, GKGameRecord, GKAchievement, GKLeaderboard;

@interface GKDashboardRequest : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *leaderboardID;
@property (retain, nonatomic) NSString *leaderboardSetID;
@property (retain, nonatomic) NSString *leaderboardTitle;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (nonatomic) long long leaderboardTimeScope;
@property (nonatomic) long long leaderboardPlayerScope;
@property (retain, nonatomic) NSString *gameBundleID;
@property (retain, nonatomic) NSString *achievementID;
@property (retain, nonatomic) NSString *activityIdentifier;
@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *playerAlias;
@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (nonatomic) BOOL isArcade;
@property (nonatomic) BOOL shouldShowPlayForChallenge;
@property (nonatomic) BOOL shouldShowPlayForTurnBasedMatch;
@property (nonatomic) BOOL shouldShowQuitForTurnBasedMatch;
@property (copy, nonatomic) NSString *launchContext;
@property (nonatomic) unsigned long long deepLinkDestination;

- (void).cxx_destruct;

@end
