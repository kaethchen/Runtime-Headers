@class NSURLSession, NSData, NSURL, NSMutableSet, NSObject, NSLock;
@protocol OS_dispatch_semaphore;

@interface AAS3DownloadSession : NSObject

@property (readonly) NSURLSession *urlSession;
@property (readonly) NSURL *url;
@property (readonly) struct { unsigned long long x0; char *x1; struct AAS3Context_impl *x2; } *streamBase;
@property (readonly) NSMutableSet *requests;
@property (readonly) NSObject<OS_dispatch_semaphore> *requestsSem;
@property (readonly) unsigned int maxRequests;
@property (readonly) NSLock *requestsLock;
@property (readonly) unsigned int maxAttempts;
@property (readonly) float pauseInterval;
@property _Atomic unsigned long long bytesDownloaded;
@property _Atomic int cancelled;
@property (readonly) NSLock *cacheLock;
@property (retain) NSData *cache;

+ (void)completeRequest:(id)a0 data:(id)a1 response:(id)a2 error:(id)a3;

- (void).cxx_destruct;
- (int)isCancelled;
- (void)invalidateAndCancel;
- (int)addRequest:(id)a0;
- (void)removeRequest:(id)a0;
- (void)addBytesDownloaded:(unsigned long long)a0;
- (void)cacheDocument:(id)a0;
- (id)enqueueRequestWithSize:(unsigned long long)a0 atOffset:(long long)a1 destinationBuffer:(char *)a2 destinationStream:(struct AAAsyncByteStream_impl { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void *x6; } *)a3 completionSemaphore:(id)a4;
- (id)initWithURL:(id)a0 streamBase:(struct { unsigned long long x0; char *x1; struct AAS3Context_impl *x2; } *)a1 maxAttempts:(unsigned int)a2 pauseInterval:(float)a3 maxRequestsInFlight:(unsigned int)a4;
- (int)readToAsyncByteStream:(struct AAAsyncByteStream_impl { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void *x6; } *)a0 size:(unsigned long long)a1 atOffset:(long long)a2;
- (long long)readToBuffer:(void *)a0 size:(unsigned long long)a1 atOffset:(long long)a2;
- (int)syncRequests;

@end
