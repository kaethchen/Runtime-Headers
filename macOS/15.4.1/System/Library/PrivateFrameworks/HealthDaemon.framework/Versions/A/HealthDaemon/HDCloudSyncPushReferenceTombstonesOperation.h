@class HDCloudSyncCachedZone, NSMutableArray, NSMutableSet;

@interface HDCloudSyncPushReferenceTombstonesOperation : HDCloudSyncOperation {
    NSMutableArray *_unsynchronizedTombstones;
    NSMutableSet *_referenceRecordsToDelete;
    NSMutableSet *_attachmentsRecordsToDelete;
    NSMutableSet *_tombstoneRecordsToPush;
    HDCloudSyncCachedZone *_attachmentZone;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
