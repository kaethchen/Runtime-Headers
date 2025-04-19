@class NSSet, NSMutableArray;

@interface HDCloudSyncStateSyncOperation : HDCloudSyncOperation {
    NSMutableArray *_recordsToBeSaved;
    NSSet *_containers;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 containers:(id)a1;

@end
