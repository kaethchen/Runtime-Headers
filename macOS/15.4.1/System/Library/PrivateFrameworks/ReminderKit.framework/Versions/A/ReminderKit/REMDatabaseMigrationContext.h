@class NSString, REMStore, NSDate, NSError, REMStoreContainerToken;

@interface REMDatabaseMigrationContext : NSObject

@property (nonatomic) BOOL isDatabaseMigrated;
@property (retain, nonatomic) REMStoreContainerToken *containerToken;
@property (retain, nonatomic) REMStore *cachedStore;
@property (retain, nonatomic) NSDate *migrationStartDate;
@property (nonatomic) BOOL hasPerformedEnsureAccountsExist;
@property (retain, nonatomic) NSString *lastReportedErrorIdentifier;
@property (nonatomic) unsigned long long lastReportedErrorStage;
@property (retain, nonatomic) NSError *lastReportedError;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)remStore;
- (id)initWithSandboxDatabaseEnabled:(BOOL)a0;
- (void)reportMigrationErrorWithIdentifier:(id)a0 atStage:(unsigned long long)a1 error:(id)a2 objectLocator:(id)a3;
- (BOOL)_cleanLocalDatabases:(id *)a0;
- (void)_diagnosticReportWithStage:(unsigned long long)a0 failureIdentifier:(id)a1 error:(id)a2;
- (id)_migrationAccountInfosFromDEPRECATEDInfoDictionaryList:(id)a0;
- (void)_postMigrationLocalAccountCleanup;
- (void)destroySandboxContainerIfNecessary;
- (BOOL)ensureAccountsExist:(id *)a0;
- (BOOL)ensureAccountsExist:(id)a0 error:(id *)a1;
- (BOOL)ensureAccountsExistWithMigrationAccountInfos:(id)a0 error:(id *)a1;
- (void)reportMigrationDidFinishWithSuccess:(BOOL)a0;
- (void)reportMigrationWillBegin;
- (void)setShouldDataAccessStopSyncingReminders:(BOOL)a0;

@end
