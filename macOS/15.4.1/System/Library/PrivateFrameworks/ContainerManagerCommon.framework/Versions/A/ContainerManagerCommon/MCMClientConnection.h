@protocol MCMCommandContext;

@interface MCMClientConnection : NSObject

@property (readonly, nonatomic) id<MCMCommandContext> context;

+ (id)privilegedClientConnectionWithUserIdentity:(id)a0;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0 kernel:(BOOL)a1;
+ (id)sharedClientConnection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)clientBundleIdentifier;
- (void)_cleanTransientContainersWithContainerConfig:(id)a0;
- (void)_cleanTransientUserContainersWithContainerConfig:(id)a0;
- (void)_cleanupOrphanedDataForDirectories:(id)a0 containerClass:(unsigned long long)a1 forUserIdentity:(id)a2;
- (BOOL)_containerURL:(id)a0 isValidForContainerClass:(unsigned long long)a1;
- (void)_regenerateContainerPaths;
- (void)containerManagerCleanupWithCompletion:(id /* block */)a0;
- (void)containerManagerSetup;
- (void)rebootContainerManagerCleanupWithCompletion:(id /* block */)a0;
- (void)rebootContainerManagerSetup;

@end
