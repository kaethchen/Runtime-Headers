@class APSConnection, NSMutableDictionary, NSMutableSet, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface DARefreshManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *enabledTopicWrappersByEnv;
@property (retain, nonatomic) NSMutableDictionary *suspendedTopicWrappersByEnv;
@property (retain, nonatomic) NSMutableSet *wrappers;
@property (retain, nonatomic) NSMutableSet *wrappersForDailyRefresh;
@property (nonatomic) BOOL dailyRefreshInitialized;
@property (retain, nonatomic) APSConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *apsConnections;
@property (retain, nonatomic) NSTimer *tokenRegistrationTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pcQueue;
@property (nonatomic) BOOL persistAPSAfterShutdown;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)stateString;
- (void)registerDelegate:(id)a0;
- (void)unregisterDelegate:(id)a0;
- (int)_currentTruePCStyleForDelegate:(id)a0;
- (id)_apsEnvStringForDAEnvString:(id)a0;
- (id)_connectionForEnv:(id)a0;
- (void)_dailyRefreshActivityFired;
- (id)_enabledTopicsForWrapper:(id)a0;
- (void)_performBlockOnRefreshManagerThread:(id /* block */)a0;
- (id)_portNameForEnvironmentName:(id)a0;
- (void)_pushRegistrationForDelegateFailed:(id)a0;
- (id)_refreshWrapperForDelegate:(id)a0;
- (void)_registerAPSTopics;
- (void)_registerAPSTopicsForDelegates:(id)a0 withConnection:(id)a1;
- (void)_resumeTopicsForSuspendedDelegate:(id)a0;
- (void)_suspendTopicsForDelegate:(id)a0;
- (id)_suspendedTopicsForWrapper:(id)a0;
- (void)_unregisterTopicLocked:(id)a0 forDelegate:(id)a1 inEnvironment:(id)a2;
- (void)_unregisterWrapper:(id)a0 forTopic:(id)a1 inTopicDictionary:(id)a2;
- (BOOL)_wrapperIsSuspended:(id)a0;
- (void)delegateDidCompleteRefresh:(id)a0;
- (void)endDailyRefreshActivityForWrapper:(id)a0;
- (void)establishAllApsConnections;
- (void)pushPreferenceDidChange;
- (id)pushTokenForEnvironment:(id)a0;
- (void)registerTopic:(id)a0 forDelegate:(id)a1 inEnvironment:(id)a2;
- (void)retryRefreshForDelegate:(id)a0 withCollections:(id)a1 after:(double)a2 originalRefreshReason:(int)a3;
- (void)startDailyRefreshActivityForWrapper:(id)a0;
- (void)unregisterTopic:(id)a0 forDelegate:(id)a1 inEnvironment:(id)a2;
- (void)_tearDownAPS;
- (void)_tearDownAllApsConnections;
- (void)delegateDidSuccessfullyRecoverFromBeingUnauthenticated:(id)a0;

@end
