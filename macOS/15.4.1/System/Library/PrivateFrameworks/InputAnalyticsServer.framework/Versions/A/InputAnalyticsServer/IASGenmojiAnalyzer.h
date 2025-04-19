@class IADefaultsDataStore, NSUUID, NSObject, BMGeneratedImageUserInteraction, IASGenmojiAnalyzerCache;
@protocol OS_dispatch_source;

@interface IASGenmojiAnalyzer : IASDailyGarbageCollectionStateMachineAnalyzer

@property (retain, nonatomic) IASGenmojiAnalyzerCache *cache;
@property (nonatomic) BOOL fatalError;
@property (retain, nonatomic) IADefaultsDataStore *dataStore;
@property (retain, nonatomic) IADefaultsDataStore *usageDataStore;
@property (nonatomic) BOOL sendToBiomeStream;
@property (retain, nonatomic) BMGeneratedImageUserInteraction *biomeGeneratedImageUserInteraction;
@property (copy, nonatomic) NSUUID *sessionID;
@property (nonatomic) double pendingTerminationTimerDuration;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *pendingTerminationTimer;

+ (id)stringForState:(unsigned long long)a0;
+ (id)getDaterangeObjectWithName:(id)a0 dataStore:(id)a1;
+ (void)periodic24HourEvents;
+ (id)entryPointSignalArray;
+ (BOOL)isSessionStartSignal:(id)a0;
+ (void)periodic24HourEventsWithModelAvailability:(unsigned long long)a0 dataStore:(id)a1 usageDataStore:(id)a2 eventHandler:(id /* block */)a3;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)stringForState:(unsigned long long)a0;
- (void)terminateSession;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (void)recordEngagementForTodayWithDatastoreObjectName:(id)a0;
- (BOOL)shouldBeGarbageCollected;
- (void)attemptToCacheBundleId:(id)a0;
- (BOOL)checkForInteractionWithImage:(id)a0;
- (void)deepReset;
- (void)enumerateCurrentSessionAndInitializeSubsequentSession;
- (id)getFailureReasonString;
- (id)getSortedComponentsJoinedByStringForSet:(id)a0 separator:(id)a1;
- (void)handleBeginGenerationSignal:(id)a0;
- (void)handleDidPersonalizeStatusSignal:(id)a0 isInitialImage:(BOOL)a1;
- (BOOL)handleImageGeneratedSignal:(id)a0;
- (BOOL)handleImageGenerationStartedSignal:(id)a0 isInitialImage:(BOOL)a1;
- (BOOL)handleImageNotGenerated:(id)a0;
- (void)handlePersonIdentificationStarted1Signal:(id)a0;
- (void)logStateMachineError:(id)a0 signal:(id)a1 errorDescription:(id)a2;
- (void)logStateMachineMalformedSignalPayloadErrorForPayloadKey:(id)a0 payloadValue:(id)a1 signal:(id)a2;
- (void)pendingTerminationTimerExpired;
- (void)publishAndResetOrTerminateBasedOnSignal:(id)a0;
- (void)recordCreationForToday;
- (void)recordCreationUISeenForToday;
- (void)resetPendingTerminationTimer;
- (void)sendBiomeAnalytics;
- (BOOL)shouldIgnoreSignal:(id)a0;
- (unsigned long long)totalAllImagesModelLatencyInMs;
- (unsigned long long)totalInitialImageModelLatencyInMs;
- (void)updateAllImagesModelRuntimeWithEndTimestamp:(id)a0;
- (void)updateInitialImageModelRuntimeWithEndTimestamp:(id)a0;

@end
