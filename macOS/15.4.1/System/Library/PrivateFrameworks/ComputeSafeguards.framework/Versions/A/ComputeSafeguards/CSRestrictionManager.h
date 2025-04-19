@class CSDaemon, CSProcessManager, NSString, NSSet, NSMutableDictionary, NSMutableSet, NSObject, CSScenarioManager;
@protocol OS_os_log, CSRestrictionDataProviding, CSRestriction;

@interface CSRestrictionManager : NSXPCListener <NSXPCListenerDelegate, CSScenarioChangesObserving, CSProcessesChangesObserving, SafeguardsScheduledWorkReporting>

@property (retain) NSObject<OS_os_log> *logger;
@property (retain) id<CSRestrictionDataProviding> dataProvider;
@property (retain) CSScenarioManager *scenarioManager;
@property (retain) CSProcessManager *processManager;
@property (retain) CSDaemon *safeguardsDaemon;
@property (retain) NSMutableDictionary *restrictionsByProcessPerScenario;
@property (retain) NSMutableDictionary *processesAffectedByScenarioMap;
@property (retain) NSMutableDictionary *currentRestrictionsByProcess;
@property (retain) NSSet *currentActiveScenarios;
@property (retain) NSMutableDictionary *currentActiveScenariosWithRestrictions;
@property (retain) NSMutableSet *monitors;
@property (retain) id<CSRestriction> defaultRestriction;
@property long long debounceTimeBeforeRestrictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceWithDataProvider:(id)a0;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)reportScheduledIntensiveWorkByProcesses:(id)a0;
- (id)_initWithDataProvider:(id)a0;
- (BOOL)applyDefaultRestrictionsToProcess:(id)a0;
- (BOOL)applyRestrictionsToProcess:(id)a0 forScenario:(id)a1;
- (void)clearRestrictionsForProcess:(id)a0;
- (void)currentActiveScenarios:(id)a0 previousActiveScenarios:(id)a1;
- (void)determineAndApplyRestrictionsForProcess:(id)a0;
- (id)determineScenarioForProcess:(id)a0;
- (void)forceMitigation:(id)a0 forProcess:(id)a1 withHandler:(id /* block */)a2;
- (void)getActiveScenariosWithHandler:(id /* block */)a0;
- (void)getCountsForProcess:(id)a0 WithHandler:(id /* block */)a1;
- (void)getPollingIntervalWithHandler:(id /* block */)a0;
- (void)getProcessesAffectedByScenarioMapWithHandler:(id /* block */)a0;
- (void)getRestrictionsForProcess:(id)a0 forScenario:(id)a1 withHandler:(id /* block */)a2;
- (void)getScenarioRefreshIntervalWithHandler:(id /* block */)a0;
- (void)getScenariosWithHandler:(id /* block */)a0;
- (void)getTargetProcessWithHandler:(id /* block */)a0;
- (void)modifyPollingInterval:(id)a0;
- (void)modifyProcessCounts:(id)a0 withFatalCount:(id)a1 withNonFatalCount:(id)a2 withExitCount:(id)a3 withHandler:(id /* block */)a4;
- (void)modifyRestrictionsByProcessPerScenario:(id)a0;
- (void)modifyScenarioRefreshInterval:(id)a0;
- (void)modifyTargetProcess:(id)a0 withPercentage:(id)a1 withSeconds:(id)a2 withLimit:(id)a3;
- (void)observeNewRunningProcesses:(id)a0;
- (void)observeProcessChanges;
- (void)populateScenarios;
- (void)queueChangeForActivatedScenarios:(id)a0 deactivatedScenarios:(id)a1;
- (void)traverseRestrictionsData;
- (void)updateRestrictionsDataForScenarios:(id)a0;

@end
