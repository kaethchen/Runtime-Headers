@class NSObject, AAS3DownloadSession, NSMutableURLRequest;
@protocol OS_dispatch_semaphore;

@interface AAS3DownloadRequest : NSObject

@property (weak) AAS3DownloadSession *downloadSession;
@property (retain) NSMutableURLRequest *urlRequest;
@property unsigned long long nbyte;
@property long long offset;
@property char *buf;
@property struct AAAsyncByteStream_impl { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void *x6; } *stream;
@property (weak) NSObject<OS_dispatch_semaphore> *sem;
@property unsigned int remainingAttempts;
@property float pauseInterval;
@property int status;

- (void).cxx_destruct;
- (int)createAndResumeTask;
- (id)initWithSession:(id)a0 size:(unsigned long long)a1 atOffset:(long long)a2 destinationBuffer:(char *)a3 destinationStream:(struct AAAsyncByteStream_impl { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void *x6; } *)a4 completionSemaphore:(id)a5;

@end
