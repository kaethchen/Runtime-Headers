@class NSURL;

@interface CloudBookmarksMigrationBackupManager : NSObject {
    NSURL *_storageDirectory;
}

- (void).cxx_destruct;
- (id)_backupFileURL;
- (void)beginBackupOfBookmarkGroup:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithStorageDirectory:(id)a0;
- (void)removeExistingBackupWithCompletionHandler:(id /* block */)a0;

@end
