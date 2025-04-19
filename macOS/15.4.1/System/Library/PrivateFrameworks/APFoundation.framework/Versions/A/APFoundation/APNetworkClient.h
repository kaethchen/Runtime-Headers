@protocol APHTTPSessionManagerProtocol;

@interface APNetworkClient : NSObject

@property (retain, nonatomic) id<APHTTPSessionManagerProtocol> serviceManager;

+ (id)sharedAPNetworkClient;
+ (void)createSharedNetworkClientForUnitTest;
+ (void)createSharedNetworkClientWithConfig:(id)a0;
+ (void)setSharedAPNetworkClient:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)sendRequest:(id)a0;
- (id)GET:(id)a0 headers:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)temporarySessionForDaemon;
- (id)HEAD:(id)a0 client:(id)a1 headers:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)HEAD:(id)a0 headers:(id)a1 withService:(id)a2 andCompletionHandler:(id /* block */)a3;
- (id)POST:(id)a0 client:(id)a1 headers:(id)a2 body:(id)a3 completionHandler:(id /* block */)a4;
- (id)POST:(id)a0 headers:(id)a1 body:(id)a2 withService:(id)a3 andCompletionHandler:(id /* block */)a4;
- (id)GET:(id)a0 client:(id)a1 headers:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)GET:(id)a0 headers:(id)a1 withService:(id)a2 andCompletionHandler:(id /* block */)a3;
- (id)HEAD:(id)a0 headers:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)POST:(id)a0 headers:(id)a1 body:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)_billedSessionForRequester:(id)a0;
- (id)_createSessionForRequester:(id)a0 httpMaximumConnectionsPerHost:(long long)a1;
- (id)_defaultSessionConfig;
- (void)_invalidateAllServicesAndCancelTasks:(BOOL)a0;
- (BOOL)cancelTasksForService:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)invalidateService:(id)a0 andCancelTasks:(BOOL)a1;
- (id)sessionForClient:(id)a0;
- (id)temporarySessionForClient:(id)a0;
- (id)urlSessionForService:(id)a0;

@end
