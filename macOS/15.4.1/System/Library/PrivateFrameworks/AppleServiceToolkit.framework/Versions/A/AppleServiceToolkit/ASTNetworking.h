@class NSString, NSMutableDictionary, NSURLSession;

@interface ASTNetworking : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (retain, nonatomic) NSURLSession *session;
@property (retain) NSMutableDictionary *networkStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)addConnection:(id)a0;
- (BOOL)_verifyResultOfTask:(id)a0 connection:(id)a1;
- (void)updateConnectionState:(id)a0 newState:(long long)a1;
- (BOOL)_didRefetchProxyServer;
- (id)_downloadTaskWithDownloadConnection:(id)a0 error:(id *)a1;
- (BOOL)_isValidEasyRider;
- (int)_requestTimeInterval;
- (void)_resetSessionToNewProxyServer;
- (id)_sessionConfigurationWithSOCKSProxyServer:(id)a0 port:(id)a1;
- (id)_taskWithConnection:(id)a0 error:(id *)a1;
- (BOOL)_verifyMD5ForFileHandle:(id)a0 task:(id)a1;
- (void)cancelConnectionsOfClass:(Class)a0;
- (id)initWithSOCKSProxyServer:(id)a0 port:(id)a1;
- (int)networkDisconnectRetryCount;

@end
