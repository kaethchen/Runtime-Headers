@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AFWatchdogTimer : NSObject <NSCopying> {
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _timeoutHandler;
    BOOL _isStopped;
    double _remainingInterval;
    double _startTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (void)cancel;
- (BOOL)isStopped;
- (void)stop;
- (double)timeRemaining;
- (BOOL)cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;

@end
