@class geo_isolater, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface GEOCoalescingTimer : NSObject {
    geo_isolater *_isolater;
    double _coalescingInterval;
    double _deadlineInterval;
    BOOL _isScheduled;
    double _deadline;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _callback;
}

@property (readonly, nonatomic, getter=isScheduledToRun) BOOL scheduledToRun;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoalescingInterval:(double)a0 deadlineInterval:(double)a1 queue:(id)a2 callback:(id /* block */)a3;
- (void)scheduleRun;

@end
