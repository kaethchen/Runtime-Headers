@interface CNCDOrphanPropertyMigrator : CNCDMigrator

+ (id)log;

- (void)migrate;
- (void)migrateOrphanProperties;
- (void)migrateOrphanPropertiesForEntityNamed:(id)a0;

@end
