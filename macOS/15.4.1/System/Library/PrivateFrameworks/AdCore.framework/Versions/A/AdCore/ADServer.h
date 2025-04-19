@class NSURLSession, NSString, NSDictionary, NSOperationQueue;

@interface ADServer : ADSingleton <NSURLSessionDelegate>

@property (class, readonly, nonatomic) NSOperationQueue *workQueue;

@property (retain) NSURLSession *session;
@property (retain) NSDictionary *configurations;
@property int configurationExpirationTime;
@property (retain) NSString *resourceConnectProxyURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)buildConfigurationDictionary:(id)a0;
- (void)handleRequest:(id)a0 serverURL:(id)a1 responseHandler:(id /* block */)a2;
- (void)saveConfig;
- (void)saveProxyURL;
- (id)deserializeMessage:(id)a0 error:(id *)a1;
- (void)restoreConfiguration;
- (id)serializeMessage:(id)a0;
- (id)serverURLForMessageClass:(Class)a0 serverURL:(id)a1;
- (BOOL)shouldRestoreConfiguration;

@end
