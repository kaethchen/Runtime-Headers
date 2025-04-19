@class NSData, NSString, NSError, NSURLSession, NSArray, NSObject, NSURLSessionDataTask, NSMutableData, MSDBAAInterface;
@protocol OS_dispatch_semaphore;

@interface MSDCDemoUnitConnection : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>

@property (retain) NSString *server;
@property (retain) NSString *port;
@property (retain) NSURLSession *session;
@property (retain) NSString *deviceUniqueID;
@property long long httpResponseCode;
@property (retain) NSString *file;
@property (retain) NSData *toPost;
@property (retain) NSURLSessionDataTask *task;
@property (retain) NSMutableData *data;
@property int state;
@property (retain) NSError *error;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain) NSArray *userCredentials;
@property (retain) MSDBAAInterface *BAAClientObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)invalidate;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)cancelDownloading;
- (id)createDeKOTACraftedUDID;
- (id)initConnectionToDU;
- (id)postData:(id)a0 to:(id)a1 error:(id *)a2;
- (void)runRunLoopUntilDone;
- (BOOL)startDownloadingFile;
- (BOOL)trustDAServer:(struct __SecTrust { } *)a0;
- (BOOL)validateAccountsArrayFromDU:(id)a0;
- (BOOL)validateUserEnteredPassword:(id)a0 getRetryCount:(unsigned long long *)a1 forDeviceID:(id)a2;

@end
