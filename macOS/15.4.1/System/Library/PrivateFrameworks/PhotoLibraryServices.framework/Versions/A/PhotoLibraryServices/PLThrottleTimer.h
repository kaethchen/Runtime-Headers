@class NSObject;
@protocol OS_dispatch_queue;

@interface PLThrottleTimer : NSObject {
    id _target;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_invocationQueue;
    unsigned long long _timeoutId;
    unsigned long long _maxTimeoutId;
    BOOL _isPingedSinceLastFire;
    BOOL _isPaused;
    BOOL _isInvalid;
}

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) double maxTimeout;

- (void).cxx_destruct;
- (void)invalidate;
- (void)setPaused:(BOOL)a0;
- (void)ping;
- (void)_inqScheduleTimeout:(BOOL)a0 maxTimeout:(BOOL)a1;
- (void)_inqFireWithTimeout:(BOOL)a0 timeoutId:(unsigned long long)a1 maxTimeout:(BOOL)a2 maxTimeoutId:(unsigned long long)a3;
- (id)initWithTarget:(id)a0 action:(SEL)a1 invocationQueue:(id)a2 timeout:(double)a3 maxTimeout:(double)a4;

@end
