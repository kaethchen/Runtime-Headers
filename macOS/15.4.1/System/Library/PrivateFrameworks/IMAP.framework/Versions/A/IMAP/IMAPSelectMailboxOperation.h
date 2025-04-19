@protocol IMAPSelectMailboxOperationDelegate;

@interface IMAPSelectMailboxOperation : IMAPNetworkTaskOperation

@property (readonly, weak, nonatomic) id<IMAPSelectMailboxOperationDelegate> delegate;

- (void).cxx_destruct;
- (void)main;
- (id)initWithMailboxName:(id)a0;
- (id)initWithMailboxName:(id)a0 delegate:(id)a1;

@end
