@class NSSet, NSDictionary, NSMutableDictionary, NSString, NSObject;
@protocol OS_os_log;

@interface CSRestrictionDataProvider : NSObject <CSRestrictionDataProviding>

@property (retain) NSObject<OS_os_log> *logger;
@property (retain) NSSet *processes;
@property (retain) NSSet *exemptProcesses;
@property (retain) NSDictionary *scenariosMap;
@property (retain) NSDictionary *scenarios;
@property (retain) NSMutableDictionary *restrictionsByProcessForScenario;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_buildScenariosMap;
- (id)_exemptProcessesSetWithErrors:(id)a0;
- (BOOL)_isAKnownScenario:(id)a0;
- (id)_processesSetWithErrors:(id)a0;
- (id)_scenariosDictWithErrors:(id)a0;
- (void)_templatesByProcessWithErrors:(id)a0;
- (id)_templatesByScenarioForProcess:(id)a0 errors:(id)a1;
- (id)configureRestrictionsFromTemplateDictionary:(id)a0 errors:(id)a1;
- (id)exemptProcessesSet;
- (void)loadAllRestrictionsData;
- (id)processesSet;
- (id)restrictionsByProcessPerScenario;
- (id)scenariosDictionary;

@end
