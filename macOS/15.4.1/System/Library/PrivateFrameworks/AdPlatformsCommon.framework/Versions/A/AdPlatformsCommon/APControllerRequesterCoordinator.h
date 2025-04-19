@class NSMutableDictionary, APUnfairRecursiveLock;

@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface>

@property (retain, nonatomic) NSMutableDictionary *requestDelegates;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;

+ (id)machService;
+ (BOOL)canShareConnection;
+ (id)requestCoordinator;

- (id)init;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (id)exportedObject;
- (id)remoteObjectInterface;
- (void)connectionInvalidated;
- (void)_addDelegate:(id)a0 withID:(id)a1;
- (void)contentResponses:(id)a0 requester:(id)a1;
- (void)extendCollectionClassesForExportedInterface:(id)a0;
- (void)extendCollectionClassesForRemoteInterface:(id)a0;
- (void)finishedWithRequestsForID:(id)a0;
- (void)preWarm:(id)a0 forRequester:(id)a1 completion:(id /* block */)a2;
- (id)proxyURLForRequester:(id)a0;
- (void)proxyURLForRequester:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestPromotedContentOfTypes:(id)a0 forRequester:(id)a1 forContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendAndRankContent:(id)a0 forContext:(id)a1 placement:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
