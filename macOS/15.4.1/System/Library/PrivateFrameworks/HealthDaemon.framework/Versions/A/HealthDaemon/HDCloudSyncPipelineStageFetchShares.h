@class NSArray;

@interface HDCloudSyncPipelineStageFetchShares : HDCloudSyncPipelineStage

@property (nonatomic) BOOL fetchAllShares;
@property (readonly, copy, nonatomic) NSArray *shares;

- (void).cxx_destruct;
- (void)main;

@end
