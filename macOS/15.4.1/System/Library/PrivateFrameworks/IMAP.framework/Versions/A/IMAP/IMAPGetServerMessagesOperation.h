@class NSIndexSet;
@protocol IMAPGetServerMessagesOperationDelegate;

@interface IMAPGetServerMessagesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPGetServerMessagesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSIndexSet *uids;

- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0;
- (id)initWithUIDs:(id)a0 dataSource:(id)a1 delegate:(id)a2;

@end
