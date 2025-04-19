@class NSURL, NSMutableDictionary;

@interface NSPersistentUIFileManager : NSObject {
    NSURL *_persistentStateDirectoryURL;
    int _stateFileFD;
    int _publicPlistFD;
    NSMutableDictionary *_snapshotFilesByWindowID;
    BOOL _attemptedPersistentStateDirectoryCreation;
    BOOL _elideAllFileWrites;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)elideAllWriting;
- (void)writeCrashData:(id)a0;
- (void)_createPersistentStateDirectoryForURL:(id)a0;
- (void)_createPersistentStateDirectoryIfNeeded;
- (void)_elideAllFileWrites;
- (int)_openPersistentStateFile;
- (id)_persistentStateFileURL;
- (id)_restorationCountFileURL;
- (void)_rewriteFile:(int)a0 withWindowInfos:(id)a1 withImpendingRecords:(id)a2;
- (BOOL)_trySystemCallDescribedBy:(const char *)a0 executor:(id /* block */)a1;
- (void)closePersistentState;
- (void)deleteSnapshotForWindowID:(unsigned int)a0;
- (void)discardCrashData;
- (void)discardPersistentStateKeepingCrashData:(BOOL)a0;
- (id)initWithPersistentStateDirectoryURL:(id)a0;
- (id)preserveStateDirectory;
- (id)readCrashData;
- (void)writePublicPlistData:(id)a0;
- (unsigned long long)writeRecords:(id)a0 toFile:(int)a1;
- (void)writeRecords:(id)a0 withWindowInfos:(id)a1 flushingStaleData:(BOOL)a2;
- (BOOL)writeWindowSnapshot:(const void *)a0 length:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 encryptingWithKey:(id)a5 uuid:(id)a6 checkChecksum:(BOOL)a7 forWindowID:(unsigned int)a8;
- (BOOL)writeWindowSnapshot:(const void *)a0 length:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 toFile:(id)a5 encryptingWithKey:(id)a6 uuid:(id)a7 checksum:(unsigned int *)a8 fd:(int *)a9;

@end
