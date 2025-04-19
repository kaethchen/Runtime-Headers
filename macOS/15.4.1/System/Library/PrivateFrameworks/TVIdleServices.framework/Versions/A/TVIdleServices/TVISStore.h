@class TVISPersistentContainer;
@protocol TVISStoreDelegate;

@interface TVISStore : NSObject

@property (retain, nonatomic) TVISPersistentContainer *persistentContainer;
@property (weak, nonatomic) id<TVISStoreDelegate> delegate;

+ (id)errorForCode:(long long)a0 underlyingError:(id)a1;

- (void).cxx_destruct;
- (void)reset;
- (void)migrateIfNeeded;
- (void)saveContext;
- (id)initWithPersistentContainer:(id)a0;
- (BOOL)_reloadPersistentStoreIfNeededWithError:(id *)a0;
- (id)managedObjectContextWithError:(id *)a0;
- (void)releaseContext;

@end
