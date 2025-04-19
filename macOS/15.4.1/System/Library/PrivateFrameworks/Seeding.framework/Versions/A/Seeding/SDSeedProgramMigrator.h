@interface SDSeedProgramMigrator : NSObject

+ (BOOL)_enrollInSeedProgram:(long long)a0;
+ (BOOL)_enrollInSeedProgramFromCookie;
+ (void)_removeObsoleteAudiences;
+ (void)_removeObsoleteCatalogs;
+ (void)_writeDockFixupPlistWithFBA;
+ (BOOL)fixupSeedProgramSettings;
+ (void)migrateSeedProgramSettings;

@end
