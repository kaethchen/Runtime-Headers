@interface SSPommesRanker : NSObject

@property (nonatomic) float estimatedMaxPommesL1Score;

+ (id)sharedPommesRanker;
+ (long long)CalendarL1Compare:(id)a0 to:(id)a1 queryTime:(double)a2;
+ (long long)MailL1Compare:(id)a0 to:(id)a1;
+ (long long)BaseL1Compare:(id)a0 to:(id)a1;
+ (long long)BaseL2Compare:(id)a0 to:(id)a1;
+ (long long)MailL2Compare:(id)a0 to:(id)a1;
+ (long long)SettingsL2Compare:(id)a0 to:(id)a1;

- (void)sortAndFilterRankedItems:(id)a0 maxCount:(long long)a1 bundleID:(id)a2 userQuery:(id)a3 queryID:(long long)a4 privateQuery:(BOOL)a5 currentTime:(double)a6;
- (void)updateScoresForItems:(id)a0 withSectionBundle:(id)a1 userQuery:(id)a2 queryID:(long long)a3 currentTime:(double)a4 collectL2Signals:(BOOL)a5 keyboardLanguage:(id)a6 onlyEmbeddingResults:(BOOL)a7 isCardSearch:(BOOL)a8;

@end
