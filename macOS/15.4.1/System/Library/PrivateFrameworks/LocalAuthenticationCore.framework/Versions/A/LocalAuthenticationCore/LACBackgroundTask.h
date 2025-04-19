@class LACTimer, NSString, NSObject;
@protocol LACBackgroundTaskDelegate, OS_dispatch_queue;

@interface LACBackgroundTask : NSObject {
    NSObject<OS_dispatch_queue> *_innerQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id /* block */ _worker;
    id /* block */ _currentHandler;
    LACTimer *_watchdog;
    BOOL _isWorkerRunning;
    NSString *_identifier;
}

@property (weak, nonatomic) id<LACBackgroundTaskDelegate> delegate;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWorker:(id /* block */)a0;
- (void)runWithTimeout:(double)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_queuedCompleteTaskWithResult:(id)a0;
- (void)_queuedRunInReplyQueue:(id /* block */)a0;
- (void)_queuedRunWithTimeout:(double)a0 replyQueue:(id)a1 completion:(id /* block */)a2;
- (void)_queuedStartWorkerIfNeeded;
- (void)_queuedStartWorkerWatchdogWithTimeout:(double)a0;
- (void)_queuedStopWorkerWatchdog;
- (id)initWithIdentifier:(id)a0 worker:(id /* block */)a1;
- (id)runSynchronouslyWithTimeout:(double)a0;
- (void)runWithTimeout:(double)a0 completion:(id /* block */)a1;

@end
