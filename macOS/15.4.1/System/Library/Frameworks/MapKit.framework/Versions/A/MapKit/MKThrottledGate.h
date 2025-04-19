@class VKTimer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MKThrottledGate : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _maxAvailableTickets;
    double _availableTickets;
    double _refreshRate;
    NSMutableArray *_waitingJobs;
    VKTimer *_timer;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_dispatchWaitingJobsIfNecessary;
- (void)_ensureTimer;
- (BOOL)_replenishAvailableJobsIfNecessary;
- (void)_timerFired:(id)a0;
- (void)dispatch:(id /* block */)a0;
- (id)initWithMax:(int)a0 refreshRate:(double)a1 queue:(id)a2;

@end
