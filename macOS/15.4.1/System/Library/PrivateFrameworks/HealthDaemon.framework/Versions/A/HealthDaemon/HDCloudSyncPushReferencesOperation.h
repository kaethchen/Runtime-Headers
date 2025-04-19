@class HDCloudSyncCachedZone, NSMutableArray, NSMutableSet;

@interface HDCloudSyncPushReferencesOperation : HDCloudSyncOperation {
    NSMutableArray *_unsynchronizedReferences;
    NSMutableArray *_referencesToPush;
    NSMutableSet *_attachmentRecordsToPush;
    HDCloudSyncCachedZone *_attachmentZone;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
