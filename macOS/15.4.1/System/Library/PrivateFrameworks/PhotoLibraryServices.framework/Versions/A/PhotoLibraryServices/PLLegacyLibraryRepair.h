@class PLPhotoLibrary, NSProgress, NSMutableDictionary, PLPhotoLibraryPathManager, NSMutableSet;

@interface PLLegacyLibraryRepair : NSObject {
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibraryPathManager *_pathManager;
    NSProgress *_progress;
    NSProgress *_internalProgress;
    float _pendingFraction;
    NSMutableDictionary *_mediaGroupUuidPropertyMap;
    NSMutableDictionary *_rjUuidMap;
    NSMutableDictionary *_destinationFilePersistencePropertyMap;
    NSMutableSet *_internalResourceAssetUuidForInstaller;
    NSMutableSet *_fingerprintsAlreadyProcessed;
    NSMutableDictionary *_fingerprintInternalResourceProperty;
}

+ (BOOL)_setPostLegacyMigrationRepairMarkerWithValue:(unsigned char)a0 pathManager:(id)a1;
+ (void)addPostLegacyMigrationRepairMarkerWithPathManager:(id)a0;
+ (BOOL)checkPostLegacyMigrationRepairIsRequiredWithPathManager:(id)a0;
+ (void)fixIncorrectFilenameWithPathManager:(id)a0 asset:(id)a1 resource:(id)a2;
+ (void)invalidateLegacyMigrationRecoveryMarkerWithPathManager:(id)a0;
+ (BOOL)isLegacyMigrationRecoveryCompletedWithPathManager:(id)a0;
+ (BOOL)isLegacyMigrationRecoveryEnabledWithPathManager:(id)a0;

- (void).cxx_destruct;
- (BOOL)isCancelled;
- (BOOL)_processInternalResourceProperties:(id)a0 resourceFingerprint:(id)a1 fileURL:(id)a2;
- (void)_applyFilePersistenceMetadataWithPropertyMap:(id)a0;
- (void)_applyInternalResourceCorrectionsForAssetUuids:(id)a0;
- (BOOL)_archiveFilePath:(id)a0;
- (id)_buildFingerprintInternalResourcePropertyMap;
- (BOOL)_cleanupEmptyDirectory:(id)a0 fileExtensionPredicate:(id)a1 progress:(id)a2;
- (BOOL)_cloneOrMoveSourcePath:(id)a0 destPath:(id)a1 move:(BOOL)a2;
- (id)_internalResourcesFromFingerprint:(id)a0 url:(id)a1;
- (BOOL)_isValidFileURL:(id)a0;
- (BOOL)_moveItemWithSourceURL:(id)a0 uuid:(id)a1 uti:(id)a2 resourceType:(unsigned int)a3 destinationURL:(id *)a4;
- (BOOL)_processAvailabilityCheckAndUpdateResourceFileWithInternalResourceProperty:(id)a0 resourceFingerprint:(id)a1 fileURL:(id)a2 move:(BOOL)a3;
- (BOOL)_processFileResourceWithURL:(id)a0 uuid:(id)a1 uti:(id)a2;
- (BOOL)_processFileURL:(id)a0 uti:(id)a1;
- (id)_rawURLForRJBaseName:(id)a0 imageDate:(id)a1 map:(id)a2;
- (unsigned char)_relocateFileURL:(id)a0 toIdentifier:(id)a1;
- (void)_relocateMediaForFileImportWithIntermediatePath:(id)a0 filePredicate:(id)a1;
- (void)_relocateMediaForFileImportWithKeyedMaps:(id)a0 resourceType:(unsigned int)a1 persistencePropertyMap:(id)a2;
- (BOOL)_relocateMediaFromOriginalsRelocatedURL:(id)a0;
- (BOOL)_removeLegacyResourceFileWithURL:(id)a0;
- (unsigned int)_resourceTypeForType:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 progress:(id)a1 progressFraction:(id)a2;
- (BOOL)relocateMediaForFileImport;

@end
