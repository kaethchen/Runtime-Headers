@class AMSThreadSafeSet, AMSMutablePromise, NSObject, AMSMetricsActivity;
@protocol OS_dispatch_queue;

@interface AMSTask : NSObject

@property (class, readonly) AMSThreadSafeSet *taskCache;

@property (retain) NSObject<OS_dispatch_queue> *performTaskQueue;
@property (retain) AMSMutablePromise *promise;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } promiseAccessLock;
@property (retain) AMSMetricsActivity *activity;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isRunning) BOOL running;
@property long long runMode;

- (id)init;
- (void).cxx_destruct;
- (BOOL)cancel;
- (id)performBinaryTaskWithBlock:(id /* block */)a0;
- (id)performTaskWithBlock:(id /* block */)a0;
- (id)performTaskWithPromiseBlock:(id /* block */)a0;

@end
