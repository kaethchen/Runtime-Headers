@class NSURL, NSURLResponse, NSMutableData, ICURLResponseHandler, NSDictionary, NSObject, ICURLAggregatedPerformanceMetrics, NSMutableDictionary, NSMutableArray, ICRequestContext, NSString, NSURLRequest, AVURLAsset, NSData, NSURLSessionTask, NSError, NSProgress;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICURLRequest : NSObject <NSProgressReporting> {
    NSMutableArray *_observers;
    NSMutableDictionary *_maxRetryCounts;
    NSMutableDictionary *_retryCounts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_observerQueue;
    unsigned long long _signpostIdentifier;
}

@property (readonly, nonatomic) NSURLRequest *urlRequest;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitSemaphore;
@property (retain, nonatomic) NSURLRequest *currentURLRequest;
@property (retain, nonatomic) NSURLResponse *urlResponse;
@property (retain, nonatomic) NSMutableData *responseData;
@property (retain, nonatomic) NSURL *responseDataURL;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic, setter=setAVDownloadOptions:) NSDictionary *avDownloadOptions;
@property (retain, nonatomic, setter=setAVURLAsset:) AVURLAsset *avURLAsset;
@property (nonatomic) long long handlingType;
@property (retain, nonatomic) NSString *retryReason;
@property (readonly, nonatomic) unsigned long long retryCount;
@property (nonatomic) double startTime;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) double lastProgressUpdateTime;
@property (retain, nonatomic) ICURLAggregatedPerformanceMetrics *aggregatedPerformanceMetrics;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSString *requestName;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL prioritize;
@property (nonatomic) BOOL cancelOnHTTPErrors;
@property (nonatomic) unsigned long long maxRetryCount;
@property (readonly, copy, nonatomic) ICRequestContext *requestContext;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double retryDelay;
@property (nonatomic) long long requestState;
@property (readonly, copy, nonatomic) NSData *resumeData;
@property (retain, nonatomic) ICURLResponseHandler *responseHandler;
@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)a0;
+ (id)_nameForRequestType:(long long)a0;
+ (Class)_responseClass;
+ (Class)_responseHandlerClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)observers;
- (void)updateState:(long long)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0 requestContext:(id)a1;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1;
- (id)_analyticSignature;
- (void)_ensureValidRetryReason:(id)a0;
- (void)_incrementRetryCountForReason:(id)a0;
- (unsigned long long)_maxRetryCountForReason:(id)a0;
- (void)_requestWasEnqueuedAt:(id)a0;
- (unsigned long long)_retryCountForReason:(id)a0;
- (id)_sanitizedURLString;
- (void)_setMaxRetryCount:(unsigned long long)a0 forReason:(id)a1;
- (void)_task:(id)a0 didCompleteWithError:(id)a1 at:(id)a2;
- (void)_task:(id)a0 didReceiveInitialResponse:(id)a1 at:(id)a2;
- (void)_task:(id)a0 didResumeAt:(id)a1;
- (void)_updateSignpostsForNewState:(long long)a0;
- (id)initWithURL:(id)a0 requestContext:(id)a1 resumeData:(id)a2;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1 resumeData:(id)a2;

@end
