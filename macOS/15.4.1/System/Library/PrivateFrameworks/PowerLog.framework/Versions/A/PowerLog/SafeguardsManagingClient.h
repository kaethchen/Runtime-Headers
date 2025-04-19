@class NSObject, NSXPCConnection;
@protocol OS_os_log;

@interface SafeguardsManagingClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property BOOL interrupted;
@property BOOL featureEnabled;
@property (retain) NSObject<OS_os_log> *logger;

- (id)init;
- (void).cxx_destruct;
- (BOOL)forceMitigation:(id)a0 forProcess:(id)a1 error:(id *)a2;
- (id)getActiveScenarios:(id *)a0;
- (id)getCountsForProcess:(id)a0 error:(id *)a1;
- (id)getPollingInterval:(id *)a0;
- (id)getProcessesAffectedByScenarioMapWithError:(id *)a0;
- (id)getRestrictionsForProcess:(id)a0 forScenario:(id)a1 withError:(id *)a2;
- (id)getScenarioRefreshInterval:(id *)a0;
- (id)getScenarios:(id *)a0;
- (id)getTargetProcess:(id *)a0;
- (void)reportScheduledIntensiveWorkByProcesses:(id)a0;
- (BOOL)setPollingInterval:(id)a0 error:(id *)a1;
- (BOOL)setProcessCountsFor:(id)a0 withFatalCount:(id)a1 withNonFatalCount:(id)a2 withExitCount:(id)a3 error:(id *)a4;
- (BOOL)setRestrictionsByProcessPerScenario:(id)a0 error:(id *)a1;
- (BOOL)setScenarioRefreshInterval:(id)a0 error:(id *)a1;
- (BOOL)setTargetProcessTo:(id)a0 withPercentage:(id)a1 withSeconds:(id)a2 withLimit:(id)a3 error:(id *)a4;

@end
