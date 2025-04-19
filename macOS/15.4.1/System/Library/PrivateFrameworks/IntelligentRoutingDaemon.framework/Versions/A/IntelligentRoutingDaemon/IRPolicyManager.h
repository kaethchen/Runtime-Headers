@class IRCandidateManager, NSObject, IRTimer, IRStatisticsManager, IRHistoryManager, NSString, IRSessionAnalytics, IRServiceDO, NSMutableSet, IRReplayWriter, IRSystemStateManager, IRPolicyEngine, IRMediaRemoteProvider;
@protocol OS_dispatch_queue, IRPolicyManagerDelegate;

@interface IRPolicyManager : NSObject <IRServiceHandling, IRPolicyManagerContextObserver, IRPersistenceSynchronizable, IRDeallocSync>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IRPolicyManagerDelegate> delegate;
@property (retain, nonatomic) IRCandidateManager *candidateManager;
@property (retain, nonatomic) IRSystemStateManager *systemStateManager;
@property (retain, nonatomic) IRHistoryManager *historyManager;
@property (retain, nonatomic) IRPolicyEngine *policyEngine;
@property (retain, nonatomic) IRReplayWriter *replayWriter;
@property (retain, nonatomic) IRStatisticsManager *statisticsManager;
@property (retain, nonatomic) IRMediaRemoteProvider *saredLocalEndpointProvider;
@property (retain, nonatomic) NSMutableSet *spotOnPendingClientIDs;
@property (retain, nonatomic) IRTimer *spotOnTimeout;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL isLowLatencyMiLo;
@property (retain, nonatomic) IRServiceDO *service;
@property (retain, nonatomic) IRSessionAnalytics *sessionAnalytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)run;
- (void).cxx_destruct;
- (void)updateCandidates:(id)a0;
- (void)clearStatistics;
- (void)setUpdateMode:(long long)a0;
- (id)getService;
- (void)addEvent:(id)a0 forCandidate:(id)a1;
- (void)deleteCandidate:(id)a0;
- (id)requestCurrentContextWithBundleID:(id)a0;
- (void)synchronizeAndFetchFromDBOnDisk;
- (void)_checkAndStartLowLatencyMiLoIfNeededWithForce:(BOOL)a0 historyEventsContainer:(id)a1;
- (void)_checkAndUpdateBundlesForEventIfNeeded:(id)a0;
- (id)_createContextOverrdiesForBundleIDIfNeeded:(id)a0;
- (void)_sendSessionAnalyticsEvent:(id)a0 forCandidate:(id)a1;
- (void)deallocSync;
- (void)didSpotOnLocationComplete:(id)a0;
- (void)didUpdateContextWithReason:(id)a0 andOverrides:(id)a1;
- (id)getStatistics;
- (id)initWithService:(id)a0 queue:(id)a1 delegate:(id)a2 avOutputDeviceProvider:(id)a3 biomeProvider:(id)a4 miloProvider:(id)a5 rapportProvider:(id)a6 proximityProvider:(id)a7 serviceStore:(id)a8 displayMonitor:(id)a9 audioAVOutputContextController:(id)a10 isLowLatencyMiLo:(BOOL)a11;
- (void)requestUpdatedBundlesWithSignificantInteraction;
- (void)restartLowLatencyMiLo:(BOOL)a0;
- (void)setSpotOnLocationWithParameters:(id)a0 andClientID:(id)a1;

@end
