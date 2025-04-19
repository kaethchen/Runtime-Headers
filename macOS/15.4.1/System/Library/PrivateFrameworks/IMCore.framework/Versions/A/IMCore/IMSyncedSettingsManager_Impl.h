@interface IMSyncedSettingsManager_Impl : NSObject {
    void /* unknown type, empty encoding */ daemonController;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ notificationCenter;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didUpdateSettingsKeys:(id)a0;
- (void)setSettingValue:(id)a0 forKey:(long long)a1;
- (void)addObserver:(id)a0 selector:(SEL)a1 key:(long long)a2;
- (id)initWithDaemonController:(id)a0 connection:(id)a1 notificationCenter:(id)a2;
- (void)removeObserver:(id)a0 key:(long long)a1;
- (void)settingValueForKey:(long long)a0 reply:(id /* block */)a1;

@end
