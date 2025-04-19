@class IASSmartReplyAnalyzerCache, IADefaultsDataStore;

@interface IASSmartReplyAnalyzer : IASDailyGarbageCollectionStateMachineAnalyzer

@property (retain, nonatomic) IASSmartReplyAnalyzerCache *cache;
@property (nonatomic) BOOL fatalError;
@property (retain, nonatomic) IADefaultsDataStore *dataStore;

+ (id)stringForState:(unsigned long long)a0;
+ (void)periodic24HourEvents;
+ (void)periodic24HourEventsWithModelAvailability:(unsigned long long)a0 dataStore:(id)a1 eventHandler:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)stringForState:(unsigned long long)a0;
- (void)terminateSession;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)shouldBeGarbageCollected;
- (BOOL)processPayloadValue:(id)a0 fromAction:(id)a1;
- (void)cacheIntentRequested:(id)a0;
- (void)cacheQuestionnaireForPayload:(id)a0;
- (id)getAllFeatureModels;
- (BOOL)getCustomOptions;
- (unsigned long long)getEditedQuestionnaire;
- (id)getNameOfDaterangeObject;
- (BOOL)isLongFormSmartReply;
- (BOOL)isPotentialLongFormSmartReply;
- (void)logStateMachineError:(id)a0 signal:(id)a1 errorDescription:(id)a2;
- (void)logStateMachineMalformedSignalPayloadErrorForPayloadKey:(id)a0 payloadValue:(id)a1 signal:(id)a2;
- (id)processBundleId:(id)a0 fromAction:(id)a1;
- (void)recordEngagementForToday;
- (unsigned long long)totalModelLatencyInMs;
- (void)updateInitialResponseAndQuestionnaireRuntime;
- (void)updateModelRuntimeWithEndTimestamp:(id)a0;
- (void)updateQuestionnaireAnswersForPayload:(id)a0;
- (void)updateRewriteRuntimeWithEndTimestamp:(id)a0;

@end
