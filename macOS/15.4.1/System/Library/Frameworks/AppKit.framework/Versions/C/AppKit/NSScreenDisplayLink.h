@interface NSScreenDisplayLink : NSDisplayLink1 {
    long long _screenNumber;
    id /* block */ _handler;
    struct __CFRunLoopTimer { } *_timer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _scheduleCount;
    unsigned long long _targetTime;
    double _desiredInterval;
    unsigned char _paused : 1;
    unsigned char _firing : 1;
}

- (void)dealloc;
- (id)init;
- (BOOL)isValid;
- (void)invalidate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (double)timestamp;
- (double)duration;
- (BOOL)isPaused;
- (double)desiredInterval;
- (id)_displayTiming;
- (void)_fire;
- (void)_schedule;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (id)initWithScreen:(id)a0 handler:(id /* block */)a1;
- (void)setDesiredInterval:(double)a0;
- (void)setPaused:(BOOL)a0;

@end
