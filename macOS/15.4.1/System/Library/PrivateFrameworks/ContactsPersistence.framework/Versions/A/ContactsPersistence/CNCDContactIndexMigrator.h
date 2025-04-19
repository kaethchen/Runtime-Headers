@interface CNCDContactIndexMigrator : CNCDMigrator

+ (id)log;

- (void)migrate;
- (void)migrateContactIndex;
- (void)updateContactIndex;

@end
