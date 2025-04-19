@class NSLock, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKRecursiveCopier : NSObject {
    BOOL _asyncFileCopier;
    BOOL _asyncCopyFailure;
    NSObject<OS_dispatch_queue> *_copierQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentLimitSema;
    NSLock *_stateLock;
    NSMutableArray *_asyncCopyErrors;
}

+ (id)asyncCopier;
+ (id)copier;

- (void)dealloc;
- (id)init;
- (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)waitUntilQuiescentWithCopyErrors:(id *)a0;

@end
