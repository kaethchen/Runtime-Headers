@class NSString, HDProfile, NSArray, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, HDWatchSettingsReconciliationManagerDelegate, OS_os_log;

@interface HDWatchSettingsReconciliationManager : NSObject <HDHealthDaemonReadyObserver, HDProfileReadyObserver, HDFeatureSettingsManagerObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
    NSArray *_managedKeys;
    NSString *_debugIdentifier;
    NSObject<OS_os_log> *_loggingCategory;
}

@property (weak, nonatomic) id<HDWatchSettingsReconciliationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_queue_applyReconciledValueFromSettingValues:(id)a0 forSettingKeys:(id)a1 completion:(id /* block */)a2;
- (void)_queue_reconcileValuesForAllKeys;
- (void)_queue_reconcileValuesForKeys:(id)a0;
- (id)_queue_settingValuesForSettingKeys:(id)a0 error:(id *)a1;
- (void)_startKeyValueObserving;
- (void)daemonReady:(id)a0;
- (void)featureSettingsManager:(id)a0 didUpdateSettingsForFeatureIdentifier:(id)a1;
- (id)initWithProfile:(id)a0 userDefaults:(id)a1 managedKeys:(id)a2 debugIdentifier:(id)a3 loggingCategory:(id)a4;
- (void)profileDidBecomeReady:(id)a0;

@end
