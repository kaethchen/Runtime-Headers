@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NUScheduledQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_items;
}

@property double timerLeeway;
@property double timerCoalesce;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_timerFired;
- (void)_startTimer;
- (void)_scheduleTimer:(unsigned long long)a0;
- (void)_stopTimer;
- (void)_dispatchItemsThrough:(unsigned long long)a0;
- (void)dispatchAfter:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)dispatchAt:(unsigned long long)a0 queue:(id)a1 block:(id /* block */)a2;

@end
