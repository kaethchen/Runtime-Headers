@interface GKAPIReporter : NSObject

+ (id)reporter;

- (void)sendMetrics:(id)a0;
- (id)utilityService;
- (void)recordVoiceChat;
- (void)recordClickWithAction:(id)a0 targetId:(id)a1 targetType:(id)a2 pageId:(id)a3 pageType:(id)a4;
- (void)recordClickWithAction:(id)a0 targetId:(id)a1 targetType:(id)a2 pageId:(id)a3 pageType:(id)a4 additionalFields:(id)a5;
- (void)recordClickWithAction:(id)a0 targetId:(id)a1 targetType:(id)a2 pageId:(id)a3 pageType:(id)a4 hostApp:(id)a5 app:(id)a6 additionalFields:(id)a7;
- (void)recordFriendInviteActivityEventAtStage:(unsigned long long)a0 hostApp:(id)a1;
- (void)recordInviteFriendClickEventWithPageType:(id)a0 pageId:(id)a1 pushBased:(BOOL)a2 knownRecipient:(BOOL)a3 location:(id)a4;
- (void)recordLoadUrlMetrics:(id)a0;
- (void)recordMultiplayerActivityMetrics:(id)a0;
- (void)recordMultiplayerErrorID:(id)a0;
- (void)recordPageWithID:(id)a0 pageContext:(id)a1 pageType:(id)a2;
- (void)recordPageWithID:(id)a0 pageContext:(id)a1 pageType:(id)a2 refApp:(id)a3;
- (void)recordPageWithID:(id)a0 pageContext:(id)a1 pageType:(id)a2 refApp:(id)a3 hostApp:(id)a4 app:(id)a5 additionalFields:(id)a6;
- (void)recordPerformanceMetrics:(id)a0;
- (void)sendPerformanceMetrics:(id)a0;

@end
