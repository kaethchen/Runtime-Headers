@class PARBag, NSString, NSXPCConnection, PARSessionSwiftInternal, PARSessionConfiguration, _TtC10CoreParsec15PARSearchClient;
@protocol PARSessionDelegate;

@interface PARSession : NSObject <SFFeedbackListener, SFAsyncResourceLoader> {
    PARSessionSwiftInternal *_internal;
}

@property (readonly) PARBag *bag;
@property (readonly, nonatomic) _TtC10CoreParsec15PARSearchClient *client;
@property (retain) PARSessionConfiguration *configuration;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak) id<PARSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSession;
+ (id)sessionWithConfiguration:(id)a0;
+ (id)sessionWithConfiguration:(id)a0 delegate:(id)a1 startImmediately:(BOOL)a2;
+ (id)sharedPARSessionWithConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)connection;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)configuration;
- (void)setConfiguration:(id)a0;
- (void)start;
- (id)client;
- (id)initWithConfiguration:(id)a0;
- (id)internal;
- (void)reportEvent:(id)a0;
- (void)didStartSearch:(id)a0;
- (void)cardViewDidAppear:(id)a0;
- (void)cardViewDidDisappear:(id)a0;
- (void)didAppendLateSections:(id)a0;
- (void)didClearInput:(id)a0;
- (void)didEndSearch:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)didEngageResult:(id)a0;
- (void)didEngageSection:(id)a0;
- (void)didEngageSuggestion:(id)a0;
- (void)didErrorOccur:(id)a0;
- (void)didGoToSearch:(id)a0;
- (void)didGoToSite:(id)a0;
- (void)didGradeLookupHintRelevancy:(id)a0;
- (void)didGradeResultRelevancy:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)didRankSections:(id)a0;
- (void)didReceiveResultsAfterTimeout:(id)a0;
- (void)didReportUserResponseFeedback:(id)a0;
- (void)didSubmitUserReportFeedback:(id)a0;
- (void)reportFeedback:(id)a0 queryId:(long long)a1;
- (void)resultsDidBecomeVisible:(id)a0;
- (void)searchViewDidAppear:(id)a0;
- (void)searchViewDidDisappear:(id)a0;
- (void)sectionHeaderDidBecomeVisible:(id)a0;
- (void)sendCustomFeedback:(id)a0;
- (void)suggestionsDidBecomeVisible:(id)a0;
- (id)initWithConfiguration:(id)a0 connection:(id)a1;
- (id)bag;
- (void)setBag:(id)a0;
- (id)taskWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)clearEngagementsWithTitle:(id)a0 type:(id)a1;
- (void)didSkipSearch:(int)a0 forInput:(id)a1 queryId:(unsigned long long)a2;
- (void)reportFeedback:(id)a0;
- (void)clearEngagedResults:(id)a0 completion:(id /* block */)a1;
- (BOOL)loadCard:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addCompletion:(id)a0 forInput:(id)a1;
- (void)addEngagedResults:(id)a0;
- (void)addEngagedResults:(id)a0 completion:(id /* block */)a1;
- (void)allEngagedResultsForInput:(id)a0 maxAmount:(long long)a1 completion:(id /* block */)a2;
- (id)cardLoader;
- (void)clearEngagedResult:(id)a0 completion:(id /* block */)a1;
- (void)clearEngagementsFromDate:(id)a0 toDate:(id)a1;
- (void)clearSafariFeedback:(id /* block */)a0;
- (unsigned long long)enabledStatus;
- (void)fileHandleAndAttributesForResource:(id)a0 completion:(id /* block */)a1;
- (id)imageLoader;
- (id)initInternal:(id)a0 startImmediately:(BOOL)a1;
- (id)initWithConfiguration:(id)a0 connection:(id)a1 delegate:(id)a2 startImmediately:(BOOL)a3;
- (BOOL)loadImage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)loadImage:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)loadMoreResults:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)loadTask:(id)a0;
- (id)moreResultsLoader;
- (unsigned long long)safariAssistantEnabledStatus;
- (unsigned long long)safariAssistantEnabledStatusForPageLanguage:(id)a0;
- (void)sendCBAEngagementFeedback:(id)a0 query:(unsigned long long)a1;
- (void)sendCustomFeedback:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToChannel:(id)a0 reply:(id /* block */)a1;
- (void)subscriptionStatusForChannel:(id)a0 reply:(id /* block */)a1;
- (void)topEngagedResultsForInput:(id)a0 maxAmount:(long long)a1 completion:(id /* block */)a2;
- (void)unsubscribeFromChannel:(id)a0 reply:(id /* block */)a1;
- (void)updateParametersForSmartSearchV1:(id)a0 smartSearchV2:(id)a1;

@end
