@interface NoOpBackupController : NSObject <BackupControllerProviding>

- (void)sendDeviceIDToCloudKitWithCompletion:(id /* block */)a0;
- (void)setFirstSyncDateToNow;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)a0;

@end
