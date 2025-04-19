@class NSArray, SMRulesEngineDBClient, NSDictionary, SMConfMigrator, SMRulesEngineRuleHandler, SMCopyEngine;

@interface SMMigrateSystemInfoStep : SMEngineStep <SMCopyEngineDelegate>

@property (retain) SMConfMigrator *confMigrator;
@property (retain) SMRulesEngineRuleHandler *rulesEngineRuleHandler;
@property (retain) SMRulesEngineDBClient *rulesEngineDBClient;
@property (retain) NSDictionary *allRuleGroups;
@property (retain) NSArray *settingsCopiers;
@property (retain) SMCopyEngine *fileCopyEngine;
@property (readonly) NSArray *copyPaths;
@property BOOL onlyUpdateSystemSettings;

- (id)description;
- (void).cxx_destruct;
- (id)process;
- (id)prepare;
- (id)initWithEngine:(id)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (BOOL)copyIgnorePremissionsSettings;
- (void)copyMachineSettings;
- (void)copyNetworkSettings;
- (BOOL)copyRemoteManagementSettings;
- (BOOL)copySystemSettings;
- (BOOL)copyTimeZone;
- (BOOL)copyVirtualMemorySettings;
- (void)finishKerberosSetup;
- (id)getLastModifiedDate:(id)a0;
- (BOOL)isHostconfigServiceEnabledOnSourceSystem:(id)a0;
- (void)migrateDirectoryServicesDatabase;
- (void)migrateGlobalPreferences;
- (void)migrateLockdownModeSetting;
- (BOOL)migrateNetworkSettings;
- (id)postProcess;
- (void)prepareForServerMigration;
- (void)prepareKerberosAndServerMigration;
- (void)repairDatavaultPermissions;
- (void)repairTimezonePermissions;
- (void)setupFileCopyEngine;
- (void)setupKerberos;

@end
