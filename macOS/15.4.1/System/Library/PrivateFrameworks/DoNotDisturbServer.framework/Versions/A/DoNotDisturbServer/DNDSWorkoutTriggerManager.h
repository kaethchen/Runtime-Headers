@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DNDSWorkoutTriggerManagerDataSource, DNDSAutomationManagerDataSource;

@interface DNDSWorkoutTriggerManager : NSObject <DNDSAutomationManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<DNDSWorkoutTriggerManagerDataSource, DNDSAutomationManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)refresh;
- (void)_refresh;
- (id)_assertionIdentifierForHealthKitWorkoutEvent:(id)a0;
- (void)_configureWorkoutTriggerWithMode:(id)a0;
- (BOOL)_isWorkoutTriggerEnabledForModeConfiguration:(id)a0;
- (void)_refreshMigratingIfNecessary;
- (void)_refreshWithMode:(id)a0 event:(id)a1;
- (void)pairedDeviceDidChange;
- (void)refreshMigratingIfNecessary;

@end
