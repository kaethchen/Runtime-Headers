@class EDMessagePersistence;

@interface _EDLazyWrappedMessage : _EDWrappedMessage

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;

- (void).cxx_destruct;
- (long long)databaseID;
- (id)initWithMessage:(id)a0 messagePersistence:(id)a1;

@end
