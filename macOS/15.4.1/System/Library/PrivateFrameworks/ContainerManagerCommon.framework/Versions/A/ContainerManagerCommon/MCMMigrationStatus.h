@class NSURL, NSMutableDictionary;

@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSMutableDictionary *migrationInfo;
@property (retain, nonatomic) NSURL *migrationFileURL;

+ (id)currentBuildVersion;

- (id)init;
- (void).cxx_destruct;
- (void)_consolidateForUnifiedDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;
- (void)_consolidateForUserDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;
- (void)_consolidateSystemDaemonMigrationStatusWithLibraryURL:(id)a0;
- (void)_consolidateUnifiedDaemonMigrationStatusWithLibraryURL:(id)a0;
- (void)_consolidateUserDaemonMigrationStatusWithLibraryURL:(id)a0;
- (id)_iso8601DateFormatter;
- (id)_readMigrationStatusFromDisk;
- (id)_readMigrationStatusFromDiskAtURL:(id)a0;
- (void)_readStatusFromMarkerFileWithName:(id)a0 andSetAsType:(id)a1 libraryURL:(id)a2;
- (void)_removeMarkerFileWithName:(id)a0 libraryURL:(id)a1;
- (BOOL)_writeMigrationStatusToDisk;
- (BOOL)hasMigrationOccurredForType:(id)a0;
- (id)initForMobileUserMigration;
- (id)initForSystemMigration;
- (BOOL)isBuildUpgrade;
- (void)setMigrationCompleteForType:(id)a0;
- (void)writeCurrentBuildInfoToDisk;

@end
