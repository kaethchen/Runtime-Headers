@class NSIndexSet;
@protocol IMAPGetMessagesOperationDelegate;

@interface IMAPGetMessagesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPGetMessagesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSIndexSet *uids;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithUIDs:(id)a0 dataSource:(id)a1 delegate:(id)a2;

@end
