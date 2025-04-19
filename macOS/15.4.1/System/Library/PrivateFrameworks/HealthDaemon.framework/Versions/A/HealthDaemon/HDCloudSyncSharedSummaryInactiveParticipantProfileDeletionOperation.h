@class NSString, NSArray, HDSynchronousTaskGroup;

@interface HDCloudSyncSharedSummaryInactiveParticipantProfileDeletionOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSArray *_participantRecords;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)_deleteLocalProfileIfNecessaryForParticipant:(id)a0 completion:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 participants:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;

@end
