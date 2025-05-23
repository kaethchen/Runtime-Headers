@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface AVOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    long long _status;
    NSError *_error;
}

@property (readonly) long long status;
@property (readonly) NSError *error;

+ (void)initialize;
+ (long long)statusOfOperations:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (BOOL)isReady;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)markAsCancelled;
- (void)markAsCompleted;
- (BOOL)_setStatus:(long long)a0 error:(id)a1 resultingStatus:(long long *)a2 failureReason:(id *)a3;
- (void)didEnterTerminalState;
- (BOOL)evaluateDependenciesAndMarkAsExecuting;
- (void)markAsFailedWithError:(id)a0;

@end
