@class HDCloudSyncDeviceContextRecord, NSMutableArray, HDCloudSyncCachedZone;

@interface HDCloudSyncPushDeviceKeyValueOperation : HDCloudSyncOperation {
    HDCloudSyncCachedZone *_contextSyncZone;
    NSMutableArray *_recordsToSave;
    NSMutableArray *_recordsToDelete;
    HDCloudSyncDeviceContextRecord *_recordWithCurrentIdentity;
}

- (void).cxx_destruct;
- (void)main;

@end
