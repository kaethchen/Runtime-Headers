@class PLLibraryServicesManager;

@interface PLDeviceRestoreMigrationSupport : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    BOOL _didWaitForPrerequisites;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prerequisitesCompleteBlockLock;
}

@property (copy, nonatomic) id /* block */ prerequisitesCompleteBlock;
@property (nonatomic, getter=hasDataMigratorPluginRequestedLibraryMigration) BOOL dataMigratorPluginHasRequestedLibraryMigration;

+ (BOOL)isDataMigrationInProgress;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)isRestoreFromBackup;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (id)_dataMigrationInfo;
- (void)_linkAsideAlbumMetadata;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (void)deletePhotoStreamData;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (BOOL)isEraseWithoutRestore;
- (BOOL)isOTARestoreInProgress;
- (BOOL)isRestoreFromBackupSourceCloud;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (BOOL)isUpgradeWithoutRestore;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (id)restoreTypeDescription;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;

@end
