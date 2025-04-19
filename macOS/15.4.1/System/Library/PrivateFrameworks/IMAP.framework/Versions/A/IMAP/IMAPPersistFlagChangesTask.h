@class NSString, NSMutableDictionary, IMAPTaskManager;

@interface IMAPPersistFlagChangesTask : IMAPPersistenceTask <IMAPGetServerMessagesOperationDelegate, IMAPPersistFlagChangesOperationDelegate> {
    NSMutableDictionary *_flagsByUIDs;
    NSMutableDictionary *_flagChangesByServerMessage;
}

@property (readonly, nonatomic) IMAPTaskManager *taskManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)operationFinished:(id)a0;
- (id)nextPersistenceOperation;
- (void)recalculatePriorities;
- (void)getServerMessagesOperation:(id)a0 gotServerMessages:(id)a1 uidsNotFound:(id)a2;
- (id)initWithFlagsByUIDs:(id)a0 dataSource:(id)a1 taskManager:(id)a2;
- (void)persistFlagChangesOperation:(id)a0 persistedFlagChangesForRemoteIDs:(id)a1;

@end
