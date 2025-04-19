@class IASWritingToolsAnalyzerCache, IADefaultsDataStore;

@interface IASWritingToolsAnalyzer : IASDailyGarbageCollectionStateMachineAnalyzer

@property (retain, nonatomic) IASWritingToolsAnalyzerCache *cache;
@property (nonatomic) BOOL fatalError;
@property (retain, nonatomic) IADefaultsDataStore *dataStore;

+ (id)stringForState:(unsigned long long)a0;
+ (void)periodic24HourEvents;
+ (void)periodic24HourEventsWithModelAvailability:(unsigned long long)a0 chatGPTAccount:(unsigned long long)a1 dataStore:(id)a2 eventHandler:(id /* block */)a3;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)stringForState:(unsigned long long)a0;
- (unsigned long long)chatGPTAccountType;
- (void)terminateSession;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)shouldBeGarbageCollected;
- (void)handleHandoffStartedForMontara:(id)a0;
- (void)cacheActionSelectedPayload:(id)a0;
- (void)cacheResultTextIfNonNil:(id)a0;
- (BOOL)checkAndLogErrorForFeatureDetailsForSignal:(id)a0 updateFeatureDetailsOnMismatch:(BOOL)a1;
- (id)filterWritingToolsUIBundleID:(id)a0;
- (unsigned long long)getAttachmentType;
- (unsigned long long)getNextStateForResultsRejectedSignal:(id)a0;
- (void)handleAttachmentsModifiedSignal:(id)a0 isForSlotForm:(BOOL)a1;
- (void)handleCommonResultsGeneratedOrFailedActionForSignal:(id)a0;
- (void)handleHandoffRequestedForMontara:(id)a0;
- (void)handlePanelAppearedSignal:(id)a0;
- (void)handleResultsOfferedSignal:(id)a0;
- (void)handleResultsRequestedForMontara:(id)a0 isInitialRequest:(BOOL)a1;
- (void)handleSlotFormCompletedSignal:(id)a0;
- (void)logStateMachineError:(id)a0 signal:(id)a1 errorDescription:(id)a2;
- (void)logStateMachineMalformedSignalPayloadErrorForPayloadKey:(id)a0 payloadValue:(id)a1 signal:(id)a2;
- (id)noSuggestionReason;
- (void)recordEngagementForToday;
- (unsigned long long)totalModelLatencyInMs;
- (unsigned long long)totalReviewTimeInS;
- (void)updateModelRuntimeWithEndTimestamp:(id)a0;
- (void)updateReviewTimeWithEndTimestamp:(id)a0;
- (BOOL)willAcceptAction:(id)a0;

@end
