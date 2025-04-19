@interface SDPommesFeature : NSObject

+ (BOOL)isSafariBundle:(id)a0;
+ (BOOL)isCalendarBundle:(id)a0;
+ (BOOL)isMailBundle:(id)a0;
+ (BOOL)isMessagesBundle:(id)a0;
+ (BOOL)isSettingsBundle:(id)a0;
+ (BOOL)usingPommesRankingForClientBundle:(id)a0;
+ (BOOL)isEventsBundle:(id)a0;
+ (BOOL)isPhotosBundle:(id)a0;
+ (id)allBundleIDsUsingPommesRanking;
+ (id)allBundleIDsUsingPommesRankingSearchTool;
+ (id)baseBundleIDs;
+ (BOOL)isRemindersBundle:(id)a0;
+ (BOOL)isSearchCLIBundle:(id)a0;
+ (BOOL)isSearchToolClientBundle:(id)a0;
+ (BOOL)isSpotlightUIClientBundle:(id)a0;
+ (BOOL)purePommesL2RankingAllowedWithSectionBundle:(id)a0 clientBundle:(id)a1;
+ (BOOL)usingRewritesForContextBundleIDs:(id)a0 clientBundleID:(id)a1 userQuery:(id)a2 indexSupportsRewrites:(BOOL)a3 isCounting:(BOOL)a4 embeddingsEnabled:(BOOL)a5;

@end
