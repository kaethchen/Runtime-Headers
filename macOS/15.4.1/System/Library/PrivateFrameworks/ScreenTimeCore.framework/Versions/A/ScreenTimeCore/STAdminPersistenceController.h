@class STXPCStoreServerEndpointFactory;

@interface STAdminPersistenceController : STPersistenceController

@property (class, readonly, nonatomic) STAdminPersistenceController *sharedController;

@property (retain) STXPCStoreServerEndpointFactory *storeServerEndpointFactory;

+ (BOOL)isUnitTestRunning;

- (id)init;
- (void).cxx_destruct;
- (id)newBackgroundContext;
- (void)performBackgroundTask:(id /* block */)a0;
- (id)viewContext;
- (void)performBackgroundTaskAndWait:(id /* block */)a0;
- (BOOL)saveContext:(id)a0 error:(id *)a1;

@end
