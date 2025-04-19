@class NSPersistentUIPreservedStateDirectory, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface NSPersistentUIRemoteStorageClient : NSObject <NSPersistentUIStorageXPCClient, NSPersistentUIStorageClient> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSPersistentUIPreservedStateDirectory *_stateDirectoryAtLaunch;
    BOOL _fetchingStateDirectoryAtLaunch;
    BOOL _elidingWrites;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)writeCrashData:(id)a0;
- (void)deleteSnapshotForWindowID:(unsigned int)a0;
- (void)discardCrashData;
- (void)discardPersistentStateKeepingCrashData:(BOOL)a0;
- (void)finishPendingChangesSynchronously;
- (void)finishPendingChangesWithCompletionHandler:(id /* block */)a0;
- (void)invalidateStateDirectoryAtLaunch;
- (void)permanentlyElideAllWriting;
- (void)preserveStateDirectoryAtLaunch;
- (id)readCrashData;
- (id)stateDirectoryAtLaunch;
- (void)writePublicPlistData:(id)a0;
- (void)writeRecords:(id)a0 withWindowInfos:(id)a1 flushingStaleData:(BOOL)a2;
- (void)writeWindowSnapshot:(const void *)a0 length:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 encryptingWithKey:(id)a5 uuid:(id)a6 checkChecksum:(BOOL)a7 forWindowID:(unsigned int)a8 synchronously:(BOOL)a9 completionHandler:(id /* block */)a10;

@end
