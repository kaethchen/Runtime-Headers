@class NSMutableDictionary, NSURLResponse, AMSURLRequestProperties, AMSURLSession, AMSContiguousActionPerformer, NSObject, NSMutableData, NSSet, AMSURLAction, NSMutableSet, NSData, NSURLSessionTask, NSError, NSURLSessionTaskMetrics;
@protocol OS_dispatch_queue;

@interface AMSURLTaskInfo : NSObject {
    NSMutableData *_data;
    NSMutableSet *_retryIdentifiers;
    BOOL _performingBlockWithDataAccess;
}

@property (class, readonly) NSMutableDictionary *sharedTaskStore;
@property (class, readonly) NSObject<OS_dispatch_queue> *sharedTaskQueue;

@property (readonly) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } taskLock;
@property (readonly) NSObject<OS_dispatch_queue> *taskQueue;
@property (readonly) AMSContiguousActionPerformer *contiguousActionPerformer;
@property (copy) id /* block */ completionBlock;
@property (readonly) NSData *data;
@property (retain) NSError *error;
@property (retain) NSURLSessionTaskMetrics *metrics;
@property unsigned long long previousAuthorizationCredentialSource;
@property (retain) AMSURLRequestProperties *properties;
@property (retain) AMSURLAction *receivedAction;
@property (retain) NSURLResponse *response;
@property (retain) NSURLResponse *originalResponse;
@property long long retryCount;
@property (readonly) NSSet *retryIdentifiers;
@property (retain) AMSURLSession *session;
@property unsigned long long signpostID;
@property (readonly) NSURLSessionTask *task;

+ (id)createTaskInfoForTask:(id)a0;
+ (void)removeTaskInfoForTask:(id)a0;
+ (id)taskInfoForTask:(id)a0;

- (void).cxx_destruct;
- (void)appendData:(id)a0;
- (void)setAccount:(id)a0;
- (void)performAsyncBlock:(id /* block */)a0;
- (void)performSyncBlock:(id /* block */)a0;
- (id)initWithTask:(id)a0;
- (void)_performDataAccessUsingBlock:(id /* block */)a0;
- (void)addRetryIdentifier:(id)a0;
- (void)assertHasExclusiveAccess;
- (void)assertIsOnPrivateQueue;
- (void)continueContiguousAsyncActionWithIdentifier:(unsigned long long)a0 block:(id /* block */)a1;
- (id)createMetricsContextForDecodedObject:(id)a0;
- (void)finishContiguousAsyncActionWithIdentifier:(unsigned long long)a0;
- (void)migrateFromTaskInfo:(id)a0;
- (void)performAsyncBlockWithData:(id /* block */)a0;
- (void)performSyncBlockWithExclusiveAccess:(id /* block */)a0;
- (unsigned long long)startContiguousAsyncActionWithInitialBlock:(id /* block */)a0;
- (unsigned long long)startContiguousAsyncActionWithInitialDataBlock:(id /* block */)a0;

@end
