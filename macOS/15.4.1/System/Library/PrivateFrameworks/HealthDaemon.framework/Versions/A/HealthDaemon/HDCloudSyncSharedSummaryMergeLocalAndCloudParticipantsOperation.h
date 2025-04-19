@class NSArray, NSString, NSMutableSet, HDCloudSyncCachedZone, NSMutableArray, HDSynchronousTaskGroup;

@interface HDCloudSyncSharedSummaryMergeLocalAndCloudParticipantsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDCloudSyncCachedZone *_privateMetadataZone;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (readonly, copy, nonatomic) NSArray *participantRecords;
@property (readonly, copy, nonatomic) NSMutableSet *updatedParticipantRecordIDs;
@property (readonly, copy, nonatomic) NSMutableArray *updatedAuthorizationRecords;
@property (readonly, copy, nonatomic) NSMutableArray *updatedLocalEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)_authorizationRecordForParticipant:(id)a0 error:(id *)a1;
- (id)_createSummarySharingEntryForParticipant:(id)a0 error:(id *)a1;
- (BOOL)_mergeFoundEntry:(id)a0 withParticipant:(id)a1 error:(id *)a2;
- (void)_mergeLocalAndCloudParticipant:(id)a0 completion:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 privateMetadataZone:(id)a1 participants:(id)a2;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;

@end
