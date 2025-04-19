@class NSString, SWActiveSystemActivityRegistry, SWSystemSleepMonitorAggregateState, NSHashTable, NSObject;
@protocol SWSystemSleepAssertionProviding, BSInvalidatable, SWSystemSleepMonitorProviding, OS_dispatch_queue;

@interface SWSystemSleepMonitor : NSObject <SWSystemSleepMonitorProvidingDelegate, SWActiveSystemActivityRegistryObserving, BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
    id<SWSystemSleepMonitorProviding> _monitorProvider;
    id<SWSystemSleepAssertionProviding> _sleepAssertionProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_observers;
    SWActiveSystemActivityRegistry *_activeSystemActivityRegistry;
    unsigned long long _lock_messageID;
    unsigned long long _lock_stateTimestamp;
    unsigned long long _powerManagementPhaseTimestamp;
    unsigned long long _lock_state;
    unsigned long long _lock_powerManagementPhase;
    long long _lock_powerManagementNotificationID;
    unsigned long long _lock_systemActivityAbortSleepPhase;
    id<BSInvalidatable> _stateCaptureHandler;
    BOOL _lock_systemActivitiesAreActive;
    BOOL _allowsInvalidation;
}

@property (readonly, getter=hasSleepBeenRequested) BOOL sleepRequested;
@property (readonly, getter=isSleepImminent) BOOL sleepImminent;
@property (readonly, getter=isAwakeOrAbortingSleep) BOOL awakeOrAbortingSleep;
@property (readonly) SWSystemSleepMonitorAggregateState *aggregateState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorUsingMainQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithIdentifier:(id)a0 queue:(id)a1;
- (void)systemPowerChanged:(unsigned int)a0 notificationID:(void *)a1;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 allowsInvalidation:(BOOL)a2 monitorProvider:(id)a3 sleepAssertionProvider:(id)a4 activeSystemActivityRegistry:(id)a5;
- (void)registerActiveSystemActivity:(id)a0;
- (void)systemActivityRegistryCountDidDecrementToZero:(id)a0;
- (void)systemActivityRegistryCountDidIncrementToOne:(id)a0;
- (void)unregisterInactiveSystemActivity:(id)a0;

@end
