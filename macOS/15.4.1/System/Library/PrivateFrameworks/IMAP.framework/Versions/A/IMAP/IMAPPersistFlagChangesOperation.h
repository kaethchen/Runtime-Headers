@class NSDictionary;
@protocol IMAPPersistFlagChangesOperationDelegate;

@interface IMAPPersistFlagChangesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPPersistFlagChangesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *flagChangesByServerMessage;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0;
- (id)initWithDataSource:(id)a0 flagChangesByServerMessage:(id)a1 delegate:(id)a2;

@end
