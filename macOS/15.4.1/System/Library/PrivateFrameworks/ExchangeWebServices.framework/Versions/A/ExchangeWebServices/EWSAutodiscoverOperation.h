@class NSURL, NSHTTPURLResponse, NSMutableData, NSMutableDictionary, EWSAutodiscoverRequest, NSURLSession, NSMutableArray, NSString, EWSAutodiscoverBinding, NSURLSessionDataTask, NSError, EWSAutodiscoverResponse;

@interface EWSAutodiscoverOperation : NSObject <NSURLAuthenticationChallengeSender, NSURLSessionDataDelegate> {
    NSMutableData *_buffer;
    NSMutableArray *_activeDirectoryRecords;
    NSMutableArray *_srvRecords;
    NSMutableDictionary *_sentKerberosCredentials;
}

@property (retain, nonatomic) EWSAutodiscoverOperation *me;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) NSURL *autodiscoverURLUsed;
@property (retain, nonatomic) NSError *serverCertificateError;
@property (retain, nonatomic) NSError *authenticationError;
@property (readonly, nonatomic) EWSAutodiscoverRequest *request;
@property (retain, nonatomic) EWSAutodiscoverResponse *response;
@property (retain, nonatomic) EWSAutodiscoverBinding *binding;
@property (copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionDataTask *dataTask;
@property (retain, nonatomic) NSHTTPURLResponse *rawResponse;
@property (nonatomic) char autodiscoverState;
@property (nonatomic) BOOL inProgress;
@property BOOL logsActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)cancelAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (id)_nextURL;
- (id)_URLRequestWithURL:(id)a0 isPost:(BOOL)a1;
- (id)_XMLRequest;
- (id)_autodiscoverURLWithScheme:(id)a0 user:(id)a1 host:(id)a2 port:(id)a3 path:(id)a4;
- (void)_clearInProgress;
- (void)_didFailWithError:(id)a0;
- (id)_nextRequest;
- (id)_responseFromXML:(id)a0 isRedirect:(BOOL *)a1 error:(id *)a2;
- (BOOL)_retryDataTaskWithURLRequest:(id)a0;
- (void)_taskDidCompleteSuccessfully;
- (void)_taskDidFailWithError:(id)a0;
- (id)initWithRequest:(id)a0 binding:(id)a1;

@end
