@class NSString, NSMutableDictionary, BRCContainerMetadataSyncPersistedState, NSMutableSet, NSMutableArray;
@protocol BRCContainerSyncDownCallbackProtocol;

@interface BRCContainerMetadataSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    BRCContainerMetadataSyncPersistedState *_state;
    NSMutableArray *_recordIDsForDesiredAssets;
    NSMutableArray *_desiredKeysForDesiredAssets;
    NSMutableDictionary *_recordIDsToVersionETagsForDesiredAssets;
    NSMutableSet *_containerIDsUpdated;
    id<BRCContainerSyncDownCallbackProtocol> _containerSyncDownCallback;
}

@property (readonly, nonatomic) BOOL shouldFetchAnotherBatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)_completedWithServerChangeToken:(id)a0 requestID:(unsigned long long)a1;
- (void)_updateContainerMetadataFromRecord:(id)a0 appLibrary:(id)a1 stripIcons:(BOOL)a2;
- (id)initWithSessionContext:(id)a0 syncContext:(id)a1 state:(id)a2 containerSyncDownCallback:(id)a3;
- (void)performAfterCreatingZoneIfNeeded:(id /* block */)a0;
- (void)performAfterFetchingAssetContents:(id /* block */)a0;
- (void)performAfterFetchingRecordChanges:(id /* block */)a0;

@end
