@class CKContainer;

@interface HDCloudSyncPullDeviceContextOperation : HDCloudSyncSynchronousOperation {
    CKContainer *_container;
}

- (void).cxx_destruct;
- (BOOL)performWithError:(id *)a0;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 container:(id)a1;

@end
