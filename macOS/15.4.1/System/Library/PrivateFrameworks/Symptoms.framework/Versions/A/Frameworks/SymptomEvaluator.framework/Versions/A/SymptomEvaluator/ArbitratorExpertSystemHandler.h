@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    BOOL _initializationComplete;
}

@property unsigned long long externalStepper;

+ (id)sharedInstance;
+ (id)internalStateDictionary;
+ (id)configureClass:(id)a0;
+ (BOOL)disableResourceNotifyDampening;
+ (void)setInitializeAsHelper:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)internalStateDictionary;
- (void)_dumpState;
- (void)_addReportRecordWithKey:(id)a0 count:(long long)a1 lastSeen:(double)a2;
- (void)_administrativeDisable;
- (void)_administrativeEnable;
- (BOOL)_arbitratorReady;
- (void)_completeInitialization:(BOOL)a0;
- (BOOL)_initializeWorkspace;
- (void)_removeAllReportRecords;
- (void)_removeReportRecordForKey:(id)a0;
- (id)_reportRecordKeyForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (id)_retrieveReportRecordForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)_saveReportRecord:(id)a0;
- (void)handleAssertionExceptionTriggerWithEvent:(id)a0 signatureSubType:(id)a1;
- (void)handleResourceNotifyOfType:(unsigned long long)a0 event:(id)a1;
- (BOOL)noteSymptom:(id)a0;
- (void)recordReportForSignature:(id)a0 aggregateReport:(id)a1 specificReport:(id)a2;
- (id)setupParametersForDESysLogFilterProcess:(id)a0;
- (id)setupProcessNameForDESysLogFilterProcess:(id)a0;
- (BOOL)shouldGenerateReportForSignature:(id)a0 trigger:(unsigned long long)a1;
- (void)triggerABCSnapshotWithSignature:(id)a0 events:(id)a1 uuid:(id)a2 parameters:(id)a3;

@end
