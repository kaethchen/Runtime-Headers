@class NSPersistentUIFileManager;

@interface NSPersistentUIStorageService : NSObject <NSPersistentUIStorageXPCService> {
    NSPersistentUIFileManager *_fileManager;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)elideAllWriting;
- (void)writeCrashData:(id)a0;
- (void)deleteSnapshotForWindowID:(unsigned int)a0;
- (void)discardCrashData;
- (void)discardPersistentStateKeepingCrashData:(BOOL)a0;
- (void)finishPendingChangesWithCompletionHandler:(id /* block */)a0;
- (id)initWithPersistentStateDirectoryURL:(id)a0;
- (void)preserveStateDirectoryWithCompletionHandler:(id /* block */)a0;
- (void)readCrashDataWithCompletionHandler:(id /* block */)a0;
- (void)writePublicPlistData:(id)a0;
- (void)writeRecords:(id)a0 withWindowInfos:(id)a1 flushingStaleData:(BOOL)a2;
- (void)writeWindowSnapshotData:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 encryptingWithKey:(id)a4 uuid:(id)a5 checkChecksum:(BOOL)a6 forWindowID:(unsigned int)a7 completionHandler:(id /* block */)a8;

@end
