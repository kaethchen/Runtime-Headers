@class NSIndexSet;
@protocol IMAPPersistDeletedMessagesOperationDelegate;

@interface IMAPPersistDeletedMessagesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPPersistDeletedMessagesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSIndexSet *uids;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;
- (id)initWithDataSource:(id)a0 uids:(id)a1 delegate:(id)a2;

@end
