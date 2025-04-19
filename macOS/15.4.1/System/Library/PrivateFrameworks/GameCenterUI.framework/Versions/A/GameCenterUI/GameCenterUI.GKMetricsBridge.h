@interface GameCenterUI.GKMetricsBridge : NSObject

+ (void)recordChallengePageEventWithReferrerData:(BOOL)a0;
+ (void)recordInviteFriendClickEventWithType:(long long)a0 pageType:(id)a1 pageId:(id)a2;
+ (void)recordLeaderboardPageEventWithPageId:(id)a0 withReferrerData:(BOOL)a1;

- (id)init;

@end
