@class NSURLSession, HPDAuthChallengeHandler, NSMapTable, HPDReachability, NSString;

@interface DDMObjectManager : NSObject <HPDAuthClientProtocol, NSURLSessionDelegate>

@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSMapTable *ddmObjectCache;
@property (retain, nonatomic) NSMapTable *ddmBookCache;
@property (retain, nonatomic) NSMapTable *topicPreloadsByBook;
@property (retain, nonatomic) HPDAuthChallengeHandler *authHandler;
@property (retain, nonatomic) HPDReachability *reachability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isOnline;
+ (id)sharedObjectManager;

- (void).cxx_destruct;
- (id)_init;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)_resetSession;
- (id)_errorFromHTTPURLResponse:(id)a0 data:(id)a1;
- (void)_authenticateWithCompletionHandler:(id /* block */)a0;
- (id)_configuredSession;
- (void)_executeURLRequest:(id)a0 retryCount:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)_queueLoadsForTocItems:(id)a0 ofBook:(id)a1;
- (void)_requestBookWithHelpBook:(id)a0 completionHandler:(id /* block */)a1;
- (id)cachedBookWithDDMID:(id)a0;
- (id)cachedBookWithHelpBookID:(id)a0;
- (id)cachedTopicWithID:(id)a0 fromBook:(id)a1;
- (void)executeDDMRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)platformInfoForBook:(id)a0;
- (void)processEventNotification:(id)a0;
- (void)requestBookWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestTopicWithID:(id)a0 fromBook:(id)a1 completionHandler:(id /* block */)a2;

@end
