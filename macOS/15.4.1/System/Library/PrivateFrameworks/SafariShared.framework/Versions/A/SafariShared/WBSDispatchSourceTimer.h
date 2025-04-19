@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBSDispatchSourceTimer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_source> *_timer;
}

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double startDelay;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)scheduledRepeatingTimerWithStartDelay:(double)a0 interval:(double)a1 handler:(id /* block */)a2;
+ (id)scheduledTimerWithInterval:(double)a0 repeats:(BOOL)a1 handler:(id /* block */)a2;
+ (id)scheduledTimerWithInterval:(double)a0 repeats:(BOOL)a1 queue:(id)a2 handler:(id /* block */)a3;
+ (id)timerWithInterval:(double)a0 repeats:(BOOL)a1 queue:(id)a2 handler:(id /* block */)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_scheduleTimer;
- (void)schedule;
- (id)initWithStartDelay:(double)a0 interval:(double)a1 repeats:(BOOL)a2 queue:(id)a3 handler:(id /* block */)a4;
- (void)resetFireDate;

@end
