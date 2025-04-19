@class NSSet, NSString, NSMutableOrderedSet, NSArray, NSMutableArray;

@interface IASSmartReplyFeedbackAnalyzer : IASDailyGarbageCollectionAnalyzer

@property (retain, nonatomic) NSSet *disallowedBundleIdsForCaching;
@property (copy, nonatomic) NSString *cachedBundleId;
@property (copy, nonatomic) NSString *cachedOriginalContentString;
@property (retain, nonatomic) NSMutableOrderedSet *cachedModelInfo;
@property (retain, nonatomic) NSArray *cachedIntents;
@property (copy, nonatomic) NSString *cachedSelectedIntentString;
@property (copy, nonatomic) NSString *cachedBaseResponse;
@property (retain, nonatomic) NSMutableArray *cachedQuestionsOptionsAnswers;
@property (copy, nonatomic) NSString *cachedGeneratedContentString;
@property (copy, nonatomic) NSString *cachedDetectedModelLanguage;
@property (nonatomic) unsigned long long state;

- (id)description;
- (void).cxx_destruct;
- (void)terminateSession;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (void)cacheModelInfoAndOriginalContentStringForPayload:(id)a0 withDebugFrom:(id)a1;
- (void)feedbackSurveyCompletionHandler;
- (void)cacheBaseResponseForPayload:(id)a0;
- (void)cacheDetectedModelLanguageForPayload:(id)a0;
- (void)cacheIntentsForPayload:(id)a0;
- (void)cacheQuestionnaireForPayload:(id)a0;
- (void)cacheRewriteForPayload:(id)a0;
- (void)cacheSelectedIntentForPayload:(id)a0;
- (BOOL)feedbackServiceIsActive;
- (id)getGeneratedContentString;
- (id)getModelInfoString;
- (void)handleChannel:(id)a0 signal:(id)a1 payload:(id)a2 bundleId:(id)a3;
- (id)serializeDictionaryToJSON:(id)a0;
- (void)triggerFeedbackUIForAction:(long long)a0 payload:(id)a1;
- (void)triggerFeedbackUIPresentedForPayload:(id)a0;
- (void)updateQuestionnaireAnswersForPayload:(id)a0;

@end
