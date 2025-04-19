@class NSString;

@interface _UINSLifecycleWatchdogInternal : NSObject {
    id /* block */ _actionBlock;
    NSString *_name;
    unsigned long long _timeoutUptimeNsec;
    BOOL _canceled;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_watchdogThread;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _threadMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _wakeupCondition;
}

+ (id)scheduledWatchdogWithTimeout:(double)a0 name:(id)a1 action:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)_initWithTimeout:(double)a0 name:(id)a1 action:(id /* block */)a2;
- (void)_setupThread;
- (void)_teardownThreadData;

@end
