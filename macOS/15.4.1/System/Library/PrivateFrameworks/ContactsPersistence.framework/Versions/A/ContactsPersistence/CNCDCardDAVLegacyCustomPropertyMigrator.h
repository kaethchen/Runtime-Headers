@interface CNCDCardDAVLegacyCustomPropertyMigrator : CNCDMigrator

+ (id)os_log;

- (void)migrate;
- (void)runMigrationTask;
- (void)saveContext;

@end
