@interface IMAPPersistenceBlockOperation : IMAPPersistenceTaskOperation

@property (nonatomic) BOOL blockCompleted;
@property (readonly, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0;
- (id)initWithDataSource:(id)a0 block:(id /* block */)a1;

@end
