@class NSString;

@interface IMAPTask : MCTask

@property (copy, nonatomic) NSString *mailboxName;
@property (readonly, copy, nonatomic) NSString *mailboxNameWithoutPII;
@property (nonatomic) long long reservedNetworkPriority;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)operationFinished:(id)a0;
- (id)initWithMailboxName:(id)a0;
- (void)trackOperation:(id)a0;
- (BOOL)mailboxIsUserVisibleUsingDataSource:(id)a0 taskManager:(id)a1;

@end
