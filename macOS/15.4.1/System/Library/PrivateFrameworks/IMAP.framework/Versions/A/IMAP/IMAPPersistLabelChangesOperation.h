@class NSDictionary;
@protocol IMAPPersistLabelChangesOperationDelegate;

@interface IMAPPersistLabelChangesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPPersistLabelChangesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *labelChangesByServerMessages;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0;
- (id)initWithDataSource:(id)a0 labelChangesByServerMessages:(id)a1 delegate:(id)a2;

@end
