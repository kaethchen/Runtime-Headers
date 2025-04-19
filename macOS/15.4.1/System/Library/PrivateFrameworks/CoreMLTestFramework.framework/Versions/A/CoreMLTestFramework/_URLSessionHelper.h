@class NSString, _MLTLogger, NSError, NSURLRequest, NSObject;
@protocol OS_dispatch_semaphore;

@interface _URLSessionHelper : NSObject <NSURLSessionDownloadDelegate>

@property (retain) _MLTLogger *logger;
@property (retain) NSURLRequest *request;
@property (retain) NSString *localPath;
@property (retain) NSError *downloadError;
@property (retain) NSObject<OS_dispatch_semaphore> *sem;
@property int percentCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (BOOL)downloadDataToLocalPath:(id)a0 error:(id *)a1;
- (id)initWithRequest:(id)a0 logger:(id)a1;

@end
