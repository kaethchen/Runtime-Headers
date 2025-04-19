@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface StreamingFileWriterQueue : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fileWriterQueue;
@property (readonly, nonatomic) long long maxPendingOperationSize;
@property (readonly, nonatomic) long long maxPendingItemSize;
@property (readonly, nonatomic) unsigned long long maxConcurrency;
@property (nonatomic) long long pendingOperationSize;
@property (nonatomic) unsigned long long runningOperationCount;
@property (readonly, nonatomic) NSMutableArray *pendingOperations;
@property (readonly, nonatomic) NSMutableDictionary *pendingOperationPathsByGroupPointer;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } pendingStateLock;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)insertAsyncFileOperation:(id)a0 error:(id *)a1;
- (void)_runOperation:(id)a0;
- (id)reserveAsyncOperationForFileSize:(long long)a0 path:(id)a1 group:(id)a2 operationPendingForPath:(BOOL *)a3;

@end
