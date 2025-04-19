@class NSConditionLock;

@interface EXSAccountAuthUpgrader : NSObject {
    _Atomic int _migratingAccountsCounter;
}

@property (retain) NSConditionLock *activityLock;

+ (id)sharedInstance;
+ (id)log;
+ (BOOL)_isExchangeBasicAccount:(id)a0;
+ (unsigned long long)_migrateExchangeAccountToOAuthDecision:(id)a0;
+ (id)_migrationDecisionString:(unsigned long long)a0;
+ (BOOL)_profileMigrationDisabled;
+ (BOOL)_profileMigrationEnabled;
+ (void)_retrieveMigrationStatusFromConfigurationURI:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)_serverMigrationEnabled;

- (void).cxx_destruct;
- (id)_migrationStatusForAccount:(id)a0;
- (void)_sendAnalyticsForMigratingAccount:(id)a0 withStatus:(id)a1;
- (void)triggerAccountMigration;

@end
