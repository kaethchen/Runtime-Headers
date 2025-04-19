@class NSString, NSMutableDictionary, NSURLSession;

@interface MSUNSURLSessionDataDownloader : MSUDataDownloader <NSURLSessionDelegate>

@property (retain) NSURLSession *session;
@property (retain) NSMutableDictionary *challengeErrorsByHostname;
@property (retain) NSMutableDictionary *extendedValidationBooleansByHostname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_checkForServerTrust:(struct __SecTrust { } *)a0 error:(id *)a1;
+ (BOOL)_extendedValidationCheckForServerTrust:(struct __SecTrust { } *)a0 hostName:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithCatalogOptions:(unsigned long long)a0;
- (void)sendAsynchronousRequest:(id)a0 completion:(id /* block */)a1;
- (id)sendSynchronousRequest:(id)a0 response:(id *)a1 error:(id *)a2;

@end
