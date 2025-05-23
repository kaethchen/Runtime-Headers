@class NSObject, NSString, PARSession;
@protocol OS_dispatch_queue;

@interface PRSFeedbackProxy : NSObject <SFFeedbackListener, SPCustomFeedbackSender>

@property (weak, nonatomic) PARSession *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *feedbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didStartSearch:(id)a0;
- (void)cardViewDidAppear:(id)a0;
- (void)cardViewDidDisappear:(id)a0;
- (void)didAppendLateSections:(id)a0;
- (void)didClearInput:(id)a0;
- (void)didEndSearch:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)didEngageResult:(id)a0;
- (void)didEngageSuggestion:(id)a0;
- (void)didErrorOccur:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)didRankSections:(id)a0;
- (void)didReceiveResultsAfterTimeout:(id)a0;
- (void)reportFeedback:(id)a0 queryId:(long long)a1;
- (void)resultsDidBecomeVisible:(id)a0;
- (void)searchViewDidAppear:(id)a0;
- (void)searchViewDidDisappear:(id)a0;
- (void)sectionHeaderDidBecomeVisible:(id)a0;
- (void)sendCustomFeedback:(id)a0;
- (void)suggestionsDidBecomeVisible:(id)a0;
- (void)sendCustomFeedback:(id)a0 clientID:(id)a1;
- (void)sendFeedback:(id)a0;
- (void)sendFeedback:(id)a0 queryId:(unsigned long long)a1;

@end
