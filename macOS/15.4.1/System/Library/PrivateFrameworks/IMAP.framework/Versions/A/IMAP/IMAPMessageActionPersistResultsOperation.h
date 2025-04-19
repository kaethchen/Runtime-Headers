@class ECLocalMessageActionResults, ECLocalMessageAction;
@protocol IMAPMessageActionPersistResultsOperationDelegate;

@interface IMAPMessageActionPersistResultsOperation : IMAPPersistenceTaskOperation

@property (readonly, nonatomic) ECLocalMessageAction *messageAction;
@property (readonly, nonatomic) ECLocalMessageActionResults *results;
@property (weak, nonatomic) id<IMAPMessageActionPersistResultsOperationDelegate> delegate;

- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0;
- (id)initWithMessageAction:(id)a0 results:(id)a1 dataSource:(id)a2;

@end
