@protocol IMAPMessageDataSource;

@interface IMAPPersistenceTaskOperation : MCTaskHandlerOperation

@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;

@end
