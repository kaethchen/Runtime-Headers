@class PLPhotoLibraryPathManager, NSDate;

@interface PLAssetsdCrashRecoverySupport : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recoveryIndicatorCheckLock;
    NSDate *_recoveryJobCreationDate;
}

- (void).cxx_destruct;
- (id)initWithPathManager:(id)a0;
- (void)_enqeueRecoveryJob:(id)a0 date:(id)a1 toImageWriter:(id)a2;
- (BOOL)isSafeToRecoverAfterCrash;
- (void)recoverFromCrashIfNeededWithImageWriter:(id)a0;

@end
