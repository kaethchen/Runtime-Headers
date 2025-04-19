@class HDCloudSyncOperation;

@interface HDCloudSyncOperationPipelineStage : HDCloudSyncPipelineStage

@property (readonly, nonatomic) HDCloudSyncOperation *operation;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithOperation:(id)a0;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
