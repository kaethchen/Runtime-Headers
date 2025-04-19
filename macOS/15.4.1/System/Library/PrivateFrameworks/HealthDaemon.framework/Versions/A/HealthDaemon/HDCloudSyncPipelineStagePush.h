@class HDSyncIdentity;

@interface HDCloudSyncPipelineStagePush : HDCloudSyncPipelineStage {
    HDSyncIdentity *_currentSyncIdentity;
}

+ (id)operationTagDependencies;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
