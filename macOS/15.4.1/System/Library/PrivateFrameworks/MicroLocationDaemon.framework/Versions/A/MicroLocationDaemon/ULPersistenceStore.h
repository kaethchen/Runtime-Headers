@class NSPersistentStoreDescription;

@interface ULPersistenceStore : NSObject

@property (retain, nonatomic) NSPersistentStoreDescription *storeDescription;

- (void).cxx_destruct;
- (id)persistentStoreDescription;
- (id)initWithURL:(id)a0 useWal:(BOOL)a1;
- (BOOL)loadWithCoordinator:(id)a0 error:(id *)a1;

@end
