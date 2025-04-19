@class NSString, NSMutableIndexSet;

@interface IMAPPersistDeletedMessagesTask : IMAPPersistenceTask <IMAPPersistDeletedMessagesOperationDelegate> {
    NSMutableIndexSet *_uids;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)operationFinished:(id)a0;
- (id)nextPersistenceOperation;
- (void)recalculatePriorities;
- (id)initWithUIDs:(id)a0 dataSource:(id)a1;
- (void)persistDeletedMessagesOperation:(id)a0 deletedUIDs:(id)a1;

@end
