@class ECLocalMessageActionResults, ECLocalMessageAction;
@protocol MFEWSPersistActionResultsOperationDelegate;

@interface MFEWSPersistActionResultsOperation : MFEWSPersistenceTaskOperation

@property (readonly, nonatomic) ECLocalMessageAction *messageAction;
@property (readonly, nonatomic) ECLocalMessageActionResults *results;
@property (weak, nonatomic) id<MFEWSPersistActionResultsOperationDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithMessageAction:(id)a0 results:(id)a1;

@end
