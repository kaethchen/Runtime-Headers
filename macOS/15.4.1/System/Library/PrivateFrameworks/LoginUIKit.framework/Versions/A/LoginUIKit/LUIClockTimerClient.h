@class NSMutableDictionary, LUIClockTimer;

@interface LUIClockTimerClient : NSObject <LUIClockTimerHandle> {
    LUIClockTimer *_clockTimer;
    unsigned long long _interval;
    id /* block */ _handler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct __CFRunLoopSource { } *_rls;
    NSMutableDictionary *_modes;
}

@property (readonly) unsigned long long interval;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)signal;
- (void)_perform;
- (void)_invalidateRunLoopSource;
- (void)_scheduleWithRunLoop:(struct __CFRunLoop { } *)a0 inMode:(struct __CFString { } *)a1;
- (void)_unscheduleFromRunLoop:(struct __CFRunLoop { } *)a0 inMode:(struct __CFString { } *)a1;
- (id)initWithClockTimer:(id)a0 interval:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)scheduleWithRunLoop:(id)a0 inMode:(id)a1;
- (void)unscheduleFromRunLoop:(id)a0 inMode:(id)a1;

@end
