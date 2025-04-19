@class NSString, NSArray, NSDictionary;

@interface FCPuzzlesConfiguration : NSObject

@property (readonly, nonatomic) BOOL puzzlesEnabled;
@property (readonly, nonatomic) BOOL puzzlesArchiveAPIEnabled;
@property (readonly, nonatomic) BOOL puzzleLeaderboardsEnabled;
@property (readonly, nonatomic) NSString *puzzleHubTagID;
@property (readonly, nonatomic) NSString *puzzleFullArchiveTagID;
@property (readonly, nonatomic) NSArray *puzzleTypes;
@property (readonly, nonatomic) long long autoEnableNotificationMinimumPlayCount;
@property (readonly, nonatomic) double autoEnableNotificationPlayTimeInterval;
@property (readonly, nonatomic) double autoDisableNotificationEngagementInterval;
@property (readonly, nonatomic) double progressUpdateTimeInterval;
@property (readonly, nonatomic) double badgingUpdateQuiesenceInterval;
@property (readonly, nonatomic) NSDictionary *difficultyDescriptions;
@property (readonly, nonatomic) long long numberOfHistoryPuzzlesToPrewarm;
@property (readonly, nonatomic) double puzzleHistoryPrewarmTimeInterval;
@property (readonly, nonatomic) double puzzlesPrewarmTimeInterval;
@property (readonly, nonatomic) double puzzlesEngineRefreshTimeInterval;
@property (readonly, nonatomic) double puzzlesCacheLifetime;
@property (readonly, nonatomic) double recentPuzzlesCacheLifetime;
@property (readonly, nonatomic) double streakCheckLocalTimeInterval;
@property (readonly, nonatomic) long long streakNotificationDeliveryLocalTime;
@property (readonly, nonatomic) long long streakLapseNotificationMinimumStreakCount;
@property (readonly, nonatomic) NSString *streakNotificationTitle;
@property (readonly, nonatomic) NSString *streakNotificationBodyOneStreak;
@property (readonly, nonatomic) NSString *streakNotificationBodyTwoStreaks;
@property (readonly, nonatomic) NSString *streakNotificationBodyMultipleStreaks;
@property (readonly, nonatomic) NSDictionary *puzzleFullArchiveMenuOptionsConfigByPuzzleTypeID;
@property (readonly, nonatomic) NSDictionary *puzzleTypeLeaderboards;
@property (readonly, nonatomic) NSDictionary *puzzleRanksByPuzzleTypeID;
@property (readonly, nonatomic) BOOL allowLowerProgressOnCompletedPuzzles;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0 storefrontID:(id)a1 defaultSupportedStorefronts:(id)a2;

@end
