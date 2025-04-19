@interface ISyncSession : NSObject

+ (void)beginSessionInBackgroundWithClient:(id)a0 entityNames:(id)a1 target:(id)a2 selector:(SEL)a3;
+ (id)beginSessionWithClient:(id)a0 entityNames:(id)a1 beforeDate:(id)a2 hasChanges:(BOOL)a3 error:(id *)a4;
+ (id)_sessionWithClient:(id)a0 entityNames:(id)a1 beforeDate:(id)a2 clientHasTruthForEntityNames:(id)a3 quietlyPushTruth:(BOOL)a4 target:(id)a5 selector:(SEL)a6 anchors:(id)a7 hasChanges:(BOOL)a8 skip:(BOOL)a9 error:(id *)a10;
+ (void)_validateClient:(id)a0 entityNames:(id)a1 beforeDate:(id)a2 clientHasTruthForEntityNames:(id)a3 target:(id)a4 selector:(SEL)a5;
+ (void)beginSessionInBackgroundWithClient:(id)a0 entityNames:(id)a1 target:(id)a2 selector:(SEL)a3 lastAnchors:(id)a4;
+ (id)beginSessionWithClient:(id)a0 entityNames:(id)a1 beforeDate:(id)a2;
+ (id)beginSessionWithClient:(id)a0 entityNames:(id)a1 beforeDate:(id)a2 clientHasTruthForEntityNames:(id)a3;
+ (id)beginSessionWithClient:(id)a0 entityNames:(id)a1 beforeDate:(id)a2 clientHasTruthForEntityNames:(id)a3 quietlyPushTruth:(BOOL)a4;
+ (id)beginSessionWithClient:(id)a0 entityNames:(id)a1 beforeDate:(id)a2 hasChanges:(BOOL)a3 skipSyncAfterClients:(BOOL)a4 error:(id *)a5;
+ (id)beginSessionWithClient:(id)a0 entityNames:(id)a1 beforeDate:(id)a2 lastAnchors:(id)a3;
+ (id)beginSessionWithClient:(id)a0 entityNames:(id)a1 beforeDate:(id)a2 lastAnchors:(id)a3 hasChanges:(BOOL)a4 error:(id *)a5;
+ (id)beginSessionWithClient:(id)a0 entityNames:(id)a1 beforeDate:(id)a2 lastAnchors:(id)a3 hasChanges:(BOOL)a4 skipSyncAfterClients:(BOOL)a5 error:(id *)a6;
+ (void)cancelPreviousBeginSessionWithClient:(id)a0;
+ (BOOL)client:(id)a0 hasPendingChangesForEntityNames:(id)a1;
+ (BOOL)hasChangesForClient:(id)a0 entityNames:(id)a1;

- (BOOL)isCancelled;
- (void)ping;
- (void)clientChangedRecordIdentifiers:(id)a0;
- (BOOL)shouldPushChangesForEntityName:(id)a0;
- (id)changeEnumeratorForEntityNames:(id)a0;
- (void)prepareToPullChangesInBackgroundForEntityNames:(id)a0 target:(id)a1 selector:(SEL)a2;
- (BOOL)shouldPullChangesForEntityName:(id)a0;
- (void)addTargetIds:(id)a0 forRecordId:(id)a1 relationshipName:(id)a2;
- (void)addTargetNames:(id)a0 forEntityName:(id)a1 relationshipName:(id)a2;
- (void)cancelSyncing;
- (void)clientAcceptedChangesForRecordWithIdentifier:(id)a0 formattedRecord:(id)a1 newRecordIdentifier:(id)a2;
- (void)clientAcceptedChangesForRecordWithIdentifier:(id)a0 formattedRecord:(id)a1 newRecordIdentifier:(id)a2 keepAwayFromServer:(BOOL)a3;
- (void)clientCommittedAcceptedChanges;
- (void)clientCommittedAcceptedChangesWithNextAnchors:(id)a0;
- (void)clientDidResetEntityNames:(id)a0;
- (void)clientFinishedPushingChangesWithNextAnchors:(id)a0;
- (id)clientInfoForRecordWithIdentifier:(id)a0;
- (void)clientLostRecordWithIdentifier:(id)a0 shouldReplaceOnNextSync:(BOOL)a1;
- (void)clientRefusedChangesForRecordWithIdentifier:(id)a0;
- (void)clientWantsToPushAllRecordsForEntityNames:(id)a0;
- (void)deleteRecordWithIdentifier:(id)a0;
- (void)finishSyncing;
- (BOOL)prepareToPullChangesForEntityNames:(id)a0 beforeDate:(id)a1;
- (void)pushChange:(id)a0;
- (void)pushChangesFromRecord:(id)a0 withIdentifier:(id)a1;
- (void)setClientInfo:(id)a0 forRecordWithIdentifier:(id)a1;
- (void)setEntityName:(id)a0 forRecordId:(id)a1;
- (BOOL)shouldPushAllRecordsForEntityName:(id)a0;
- (BOOL)shouldReplaceAllRecordsOnClientForEntityName:(id)a0;
- (id)snapshotOfRecordsInTruth;

@end
