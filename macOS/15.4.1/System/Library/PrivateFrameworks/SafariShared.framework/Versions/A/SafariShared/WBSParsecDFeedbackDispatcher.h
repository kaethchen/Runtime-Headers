@class NSMutableArray, NSString, NSMapTable, NSArray, WBSCompletionQuery, NSObject, NSTimer;
@protocol OS_dispatch_queue;

@interface WBSParsecDFeedbackDispatcher : NSObject <WBSParsecFeedbackDispatcher, WBSParsecGlobalFeedbackDispatcher> {
    NSMapTable *_queriesToDictionariesFromSearchTypesToStartSearchFeedbacks;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
    NSObject<OS_dispatch_queue> *_queriesToDictionariesMappingQueue;
    NSArray *_feedbackListeners;
    WBSCompletionQuery *_previousQueryForVisibleResultsFeedback;
    WBSCompletionQuery *_currentQueryForVisibleResultsFeedback;
    NSTimer *_sendPendingVisibleResultsFeedbackFeedbackEventsTimer;
    NSMutableArray *_visibleResultsFeedbackEventsToBeSent;
    NSMutableArray *_previousRankingFeedbackEventsSentForCurrentQueryID;
    long long _previousQueryIDForRankedResultsFeedback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)flush;
- (id)initWithSession:(id)a0;
- (void)_postPendingVisibleResultsFeedbackEventsForQueryID:(long long)a0 queryString:(id)a1;
- (void)userDidTypeKey:(long long)a0;
- (id)_customFeedbackOfType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (void)_postFeedbackOnFeedbackQueue:(id)a0 forQueryID:(long long)a1;
- (BOOL)_rankingFeedback:(id)a0 isShallowEqual:(id)a1;
- (void)_setStartSearchFeedback:(id)a0 forSearchOfType:(long long)a1 withQuery:(id)a2;
- (id)_takeStartSearchFeedbackForSearchOfType:(long long)a0 forQuery:(id)a1;
- (void)didBeginSearchOfType:(long long)a0 withQuery:(id)a1 endpoint:(unsigned long long)a2;
- (void)didBeginSearchOfType:(long long)a0 withQuery:(id)a1 urlString:(id)a2 endpoint:(unsigned long long)a3;
- (void)didDisplayCompletionListItems:(id)a0 forQuery:(id)a1 forEvent:(long long)a2;
- (void)didGenerateCompletionListItemsWithRankingObserver:(id)a0 forQueryID:(long long)a1;
- (void)didHideRepeatedlyIgnoredSiriSuggestedSiteWithFeedbackEvent:(id)a0;
- (void)didRankSections:(id)a0 blendingDuration:(double)a1 feedbackForHiddenAndDuplicateResults:(id)a2 forQueryID:(long long)a3 rankingFeedbackConfiguration:(id)a4;
- (void)didReceiveParsecResultsAfterTimeout:(id)a0;
- (void)didReceiveResultsForQuery:(id)a0 searchType:(long long)a1;
- (void)postFeedback:(id)a0 forQueryID:(long long)a1;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)a0 forQueryID:(long long)a1;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)a0 isSafariReaderAvailable:(BOOL)a1 forQueryID:(long long)a2;
- (void)searchViewDisappearedBecauseOfEvent:(long long)a0 forQueryID:(long long)a1;
- (void)sendAppLaunchFeedback;
- (void)sendAppLostFocusFeedback;
- (void)sendAppQuitFeedback;
- (void)sendClearInputFeedbackWithTriggerEvent:(unsigned long long)a0 forQueryID:(long long)a1;
- (void)sendCrowdsourcedAutoFillFeedback:(id)a0 forQueryID:(long long)a1;
- (void)sendNewTabFeedback;
- (void)sendNewWindowFeedback;
- (void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(BOOL)a0;
- (void)sendWindowCloseByKeyboardFeedback;
- (void)sendWindowCloseByMouseFeedback;
- (void)sendWindowMiniaturizeByKeyboardFeedback;
- (void)sendWindowMiniaturizeByMouseFeedback;
- (void)triggeredExperimentWithTreatmentId:(id)a0 withQueryID:(long long)a1;
- (void)triggeredExperimentWithTreatmentId:(id)a0 withQueryID:(long long)a1 cfDiffered:(BOOL)a2 cfUsed:(BOOL)a3 cfError:(unsigned long long)a4;
- (void)userDidCancelSession;
- (void)userDidCancelSession:(long long)a0;
- (void)userDidEngageWithCompletionListItem:(id)a0 onActionButton:(BOOL)a1 method:(long long)a2;
- (void)userDidEngageWithCompletionListItem:(id)a0 onActionButton:(BOOL)a1 method:(long long)a2 doesMatchSiriSuggestion:(BOOL)a3 voiceSearchQueryID:(id)a4;
- (void)userDidTapMicKey:(long long)a0;
- (void)userTypedGoToSearch:(id)a0 endpoint:(unsigned long long)a1 triggerEvent:(long long)a2 forQueryID:(long long)a3;
- (void)userTypedURLDirectlyForQuery:(id)a0 triggerEvent:(long long)a1;

@end
