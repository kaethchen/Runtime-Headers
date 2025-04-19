@class PLModelMigrator, PLPhotoLibraryPathManager;

@interface PLDeviceRestoreMigrationPostProcessingSupport : NSObject {
    BOOL _tokenIsKnownToBeMissing;
    PLModelMigrator *_modelMigrator;
    PLPhotoLibraryPathManager *_pathManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _tokenLock;
}

+ (id)_readTokenAtPath:(id)a0 allowNotExists:(BOOL)a1 error:(id *)a2;
+ (BOOL)_writeTokenToPath:(id)a0 withInfo:(id)a1 allowOverwrite:(BOOL)a2 error:(id *)a3;
+ (BOOL)createForegroundRestoreFromCloudBackupCompleteTokenWithPathManager:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)foregroundRestoreFromCloudBackupCompleteTokenExists;
- (id)initWithModelMigrator:(id)a0;
- (BOOL)isBackgroundRestorePostProcessingInProgressTokenValid;
- (BOOL)isModelMigrationRestorePostProcessingComplete;
- (BOOL)needsToPrepareForBackgroundRestore;
- (BOOL)writeBackgroundRestorePostProcessingCompleteAndArchiveTokens;
- (BOOL)writeBackgroundRestorePostProcessingInProgressToken;
- (BOOL)writeModelMigrationRestorePostProcessingCompleteToken;

@end
