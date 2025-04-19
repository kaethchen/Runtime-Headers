@class HDCodableSummarySharingEntry, NSArray;

@interface HDCloudSyncPipelineStageSharedSummaryUpdateParticipant : HDCloudSyncPipelineStage {
    HDCodableSummarySharingEntry *_codableEntry;
    NSArray *_authorizationIdentifiersToAdd;
    NSArray *_authorizationIdentifiersToDelete;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithSummarySharingEntry:(id)a0 configuration:(id)a1;
- (id)initWithSummarySharingEntry:(id)a0 configuration:(id)a1 authorizationIdentifiersToAdd:(id)a2 authorizationIdentifiersToDelete:(id)a3;

@end
