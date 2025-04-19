@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest

@property (readonly) NSFetchRequest *fetchRequest;
@property (readonly) id completionBlock;
@property (nonatomic) long long estimatedResultCount;

- (void)dealloc;
- (id)description;
- (id)initWithFetchRequest:(id)a0 completionBlock:(id /* block */)a1;
- (unsigned long long)requestType;

@end
