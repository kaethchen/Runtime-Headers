@interface CNCDPhoneNumberMigrator : CNCDMigrator

+ (id)log;

- (void)migrate;
- (void)migratePhoneNumbers;
- (void)updatePhoneNumbers;

@end
