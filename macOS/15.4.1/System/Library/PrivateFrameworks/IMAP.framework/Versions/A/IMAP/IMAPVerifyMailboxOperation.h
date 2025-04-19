@protocol IMAPVerifyMailboxOperationDelegate;

@interface IMAPVerifyMailboxOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPVerifyMailboxOperationDelegate> delegate;

- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;

@end
