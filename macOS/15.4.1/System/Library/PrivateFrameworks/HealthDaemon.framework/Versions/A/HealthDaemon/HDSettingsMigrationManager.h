@class NSString, HDProfile, NSArray, NSObject, NSUserDefaults;
@protocol OS_os_log, OS_dispatch_queue, HDSettingsMigrationManagerDelegate;

@interface HDSettingsMigrationManager : NSObject <HDProfileReadyObserver, HDHealthDaemonReadyObserver> {
    HDProfile *_profile;
    NSString *_identifier;
    long long _currentMigrationVersion;
    NSArray *_migrationSteps;
    NSUserDefaults *_migrationVersionDefaults;
    NSString *_lastMigratedVersionKey;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<HDSettingsMigrationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_queue_performMigrationFromCurrentMigrationVersion:(long long)a0;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0 identifier:(id)a1 currentMigrationVersion:(long long)a2 migrationSteps:(id)a3 delegate:(id)a4 loggingCategory:(id)a5;
- (id)initWithProfile:(id)a0 identifier:(id)a1 currentMigrationVersion:(long long)a2 migrationSteps:(id)a3 delegate:(id)a4 migrationVersionDefaults:(id)a5 lastMigratedVersionKey:(id)a6 loggingCategory:(id)a7;
- (void)profileDidBecomeReady:(id)a0;

@end
