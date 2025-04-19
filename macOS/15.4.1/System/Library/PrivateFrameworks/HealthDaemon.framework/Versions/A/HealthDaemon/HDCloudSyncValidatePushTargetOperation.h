@class NSArray, NSMutableDictionary;

@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation {
    NSArray *_targets;
    NSMutableDictionary *_targetsBySequenceToDelete;
    BOOL _requiresOwnershipRoll;
}

+ (id)operationTagDependencies;
+ (BOOL)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0;

@end
