@protocol IMAPAccount, IMAPGetNewLocalActionsOperationDelegate;

@interface IMAPGetNewLocalActionsOperation : IMAPPersistenceTaskOperation

@property (readonly, nonatomic) long long previousActionID;
@property (readonly, nonatomic) id<IMAPAccount> account;
@property (weak, nonatomic) id<IMAPGetNewLocalActionsOperationDelegate> delegate;

- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0;
- (id)initWithPreviousActionID:(long long)a0 account:(id)a1;

@end
