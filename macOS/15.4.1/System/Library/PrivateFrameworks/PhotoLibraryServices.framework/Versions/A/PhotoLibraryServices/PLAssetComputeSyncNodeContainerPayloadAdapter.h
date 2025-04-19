@class PLGraphNodeContainer;

@interface PLAssetComputeSyncNodeContainerPayloadAdapter : PLJournalEntryPayloadUpdateAdapter {
    PLGraphNodeContainer *_nodeContainer;
}

- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (id)sourceObject;

@end
