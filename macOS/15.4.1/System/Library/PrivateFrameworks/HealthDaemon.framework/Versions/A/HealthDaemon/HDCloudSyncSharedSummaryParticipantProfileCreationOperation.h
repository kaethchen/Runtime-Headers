@class NSString, NSArray, HDSynchronousTaskGroup;

@interface HDCloudSyncSharedSummaryParticipantProfileCreationOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSArray *_participantRecords;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)_createProfileIfNecessaryForParticipant:(id)a0 completion:(id /* block */)a1;
- (void)_createProfileWithProfileIdentifier:(id)a0 contactIdentifier:(id)a1 firstName:(id)a2 lastName:(id)a3 completion:(id /* block */)a4;
- (void)_createProfileWithUUID:(id)a0 contactIdentifier:(id)a1 firstName:(id)a2 lastName:(id)a3 ownerParticipant:(id)a4 completion:(id /* block */)a5;
- (void)_setUpOwnerParticipantForProfileIdentifier:(id)a0 ownerParticipant:(id)a1 completion:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0 participants:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;

@end
