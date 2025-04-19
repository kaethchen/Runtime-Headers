@class CNContactStore, NSString, DNDSAuxiliaryStateMonitor, IDSService, NSMutableArray, NSObject, DNDSIntelligentBehaviorResolver;
@protocol DNDSEventBehaviorResolverDataSource, OS_dispatch_queue, DNDSModeRepository;

@interface DNDSEventBehaviorResolver : NSObject <DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSModeRepository> _modeRepository;
    CNContactStore *_contactStore;
    DNDSAuxiliaryStateMonitor *_auxiliaryStateMonitor;
    DNDSIntelligentBehaviorResolver *_intelligentBehaviorResolver;
    IDSService *_localService;
    NSMutableArray *_resolutionRecord;
}

@property (weak, nonatomic) id<DNDSEventBehaviorResolverDataSource> dataSource;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_queue_resolveBehaviorForEventDetails:(id)a0 clientDetails:(id)a1 date:(id)a2 error:(id *)a3;
- (id)_activeModeConfigurationForBehavior:(unsigned long long)a0;
- (BOOL)_isDisconnectedWatch:(unsigned long long)a0 inReduceInterruptions:(long long)a1;
- (id)_legacyModeConfigurationForModeConfiguration:(id)a0;
- (id)_queue_adjustEventBehaviorResolutionForAuxiliaryState:(id)a0;
- (BOOL)_queue_eventSourceIsContact:(id)a0;
- (BOOL)_queue_eventSourceIsContact:(id)a0 inGroupWithIdentifier:(id)a1;
- (BOOL)_queue_eventSourceIsEmergencyContact:(id)a0;
- (BOOL)_queue_eventSourceIsFavorite:(id)a0;
- (BOOL)_queue_eventSourceIsRepeat:(id)a0 clientDetails:(id)a1 date:(id)a2;
- (id)_queue_firstContactForPredicate:(id)a0;
- (BOOL)_queue_isBreakthroughAllowedForModeIdentifier:(id)a0 withConfiguration:(id)a1 application:(id)a2 sender:(id)a3 urgency:(unsigned long long)a4 eventType:(unsigned long long)a5 threadIdentifier:(id)a6 filterCriteria:(id)a7 notifyAnyway:(BOOL)a8 intelligentBehavior:(long long)a9 reason:(out unsigned long long *)a10;
- (BOOL)_queue_isBreakthroughAllowedForSender:(id)a0 eventType:(unsigned long long)a1 clientDetails:(id)a2 date:(id)a3 reason:(out unsigned long long *)a4;
- (id)_queue_resolutionForModeSemanticType:(long long)a0 withConfiguration:(id)a1 eventDetails:(id)a2 clientDetails:(id)a3 state:(id)a4 date:(id)a5 error:(id *)a6;
- (unsigned long long)_queue_resolveOutcomeForEventSender:(id)a0 clientDetails:(id)a1 date:(id)a2 reason:(out unsigned long long *)a3;
- (BOOL)_queue_shouldAdjustEventBehaviorForMirroring;
- (id)initWithModeRepository:(id)a0 contactStore:(id)a1 auxiliaryStateMonitor:(id)a2 intelligentBehaviorResolver:(id)a3 IDSLocalService:(id)a4;
- (id)resolutionForConfiguration:(id)a0 eventDetails:(id)a1 clientDetails:(id)a2 date:(id)a3 error:(id *)a4;
- (id)resolveBehaviorForEventDetails:(id)a0 clientDetails:(id)a1 date:(id)a2 error:(id *)a3;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (id)sysdiagnoseDataIdentifier;

@end
