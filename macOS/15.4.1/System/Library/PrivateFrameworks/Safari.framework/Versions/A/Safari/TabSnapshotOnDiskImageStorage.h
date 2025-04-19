@class NSURL, TabSnapshotOnDiskImageStorageMetadataStore, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface TabSnapshotOnDiskImageStorage : NSObject <TabSnapshotImageStorage> {
    NSURL *_storagePath;
    TabSnapshotOnDiskImageStorageMetadataStore *_metadataStore;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_APIQueue;
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_group> *_waitForAPIOperationCompletionBeforeFinalizingSynchronizationGroup;
}

@property (nonatomic) long long initializationStatus;

- (void).cxx_destruct;
- (void)_beginAPIOperation;
- (void)_deleteImagesAtLocations:(id)a0 completionHandler:(id /* block */)a1;
- (void)_deleteImagesWithSnapshotMetadataDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (void)_dispatchAsynchronousBlockOnAPIQueue:(id /* block */)a0;
- (void)_endAPIOperationWithCompletionHandler:(id /* block */)a0;
- (id)_filenameForUniqueIdentifier:(id)a0;
- (void)_loadImageWithFilename:(id)a0 completionHandler:(id /* block */)a1;
- (id)_onDiskLocationForFilename:(id)a0;
- (void)_persistImage:(id)a0 toFile:(id)a1 completionHandler:(id /* block */)a2;
- (void)_reconcileSaveSuboperationCompletionForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteImagesWithOriginURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteImagesWithUniqueIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)finalizePendingOperationsBeforeTermination;
- (id)initWithStoragePath:(id)a0;
- (void)loadImageWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadImageWithUniqueIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)purgeImagesSavedOnOrAfter:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveImage:(id)a0 withUniqueIdentifier:(id)a1 creationDate:(id)a2 originURL:(id)a3 completionHandler:(id /* block */)a4;
- (void)setUpWithCompletionHandler:(id /* block */)a0;

@end
