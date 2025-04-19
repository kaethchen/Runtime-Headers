@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (void)_createFeedbackAssistantSymlink;
+ (BOOL)_canEnrollInBetaSoftware;
+ (void)_clearAudience;
+ (void)_clearSeedCatalog;
+ (BOOL)_currentAudienceIsSeed;
+ (BOOL)_currentCatalogIsSeed;
+ (long long)_legacyCurrentSeedProgram;
+ (id)_loadSeedAudiencesFromPlist;
+ (id)_loadSeedCatalogsFromPlist;
+ (BOOL)_removeSeedEnrollmentCookie;
+ (long long)_seedProgramForString:(id)a0;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (void)_setSeedProgramPref:(long long)a0;
+ (long long)currentSeedProgram;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (BOOL)fixUpAssetAudience;
+ (BOOL)isEnrolledInSeedProgram;
+ (id)stringForSeedProgram:(long long)a0;
+ (BOOL)unenrollFromSeedProgram;

@end
