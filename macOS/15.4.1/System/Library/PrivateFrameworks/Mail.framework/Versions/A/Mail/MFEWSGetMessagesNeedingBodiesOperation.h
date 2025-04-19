@class NSArray;
@protocol MFEWSGetMessagesNeedingBodiesOperationDelegate;

@interface MFEWSGetMessagesNeedingBodiesOperation : MFEWSPersistenceTaskOperation

@property (readonly, copy, nonatomic) NSArray *mailboxes;
@property (weak, nonatomic) id<MFEWSGetMessagesNeedingBodiesOperationDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithMailboxes:(id)a0;

@end
