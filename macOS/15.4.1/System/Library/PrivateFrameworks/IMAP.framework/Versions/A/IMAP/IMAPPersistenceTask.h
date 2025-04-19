@protocol IMAPMessageDataSource;

@interface IMAPPersistenceTask : IMAPTask

@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (long long)networkPriority;
- (id)initWithMailboxName:(id)a0;
- (id)nextNetworkOperation;
- (id)mailboxNameWithoutPII;

@end
