@class NSError, NSString, NSURL, URLConnectionOptions, NSData, NSURLSession, NSURLResponse, NSMutableArray, NSURLRequest, NSMutableData, NSURLSessionTask;

@interface URLConnectionLoader : NSObject <NSURLSessionDelegate>

@property (retain) URLConnectionOptions *opts;
@property (retain) NSURLResponse *response;
@property (retain) NSError *error;
@property (retain) NSURL *redirectURL;
@property (retain) NSData *responseData;
@property (retain) NSURL *downloadedFileURL;
@property (copy) id /* block */ completionBlock;
@property (retain) NSString *opDesc;
@property (retain) NSMutableArray *authMethodsTried;
@property (retain) NSURLSession *session;
@property (retain) NSURLSessionTask *currentTask;
@property struct StAsyncCallHelper { id x0; id x1; BOOL *x2; long long *x3; id x4; BOOL x5; } *asyncCallHelper;
@property (copy) NSURLRequest *request;
@property BOOL stopRequested;
@property (retain) NSMutableData *pendingData;
@property unsigned long long taskType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (long long)statusCode;
- (void)stop;
- (id)httpResponse;
- (void)prepRequest:(id)a0 taskType:(unsigned long long)a1 forOpDesc:(id)a2;
- (void)callCompletionBlock;
- (unsigned long long)recordAuthMethod:(id)a0;
- (BOOL)sendSynchronousRequest:(id)a0 forOpDesc:(id)a1 returningError:(id *)a2;
- (void)startDataRequest:(id)a0 opDesc:(id)a1 completion:(id /* block */)a2;
- (void)startDownloadRequest:(id)a0 opDesc:(id)a1 completion:(id /* block */)a2;

@end
