@class NSMutableDictionary, NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface LUIClockTimer : NSObject {
    NSMapTable *_clients;
    NSMutableDictionary *_deadlines;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}

@property (class, readonly) LUIClockTimer *sharedClockTimer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_timerFired;
- (void)_scheduleClient:(id)a0;
- (void)_unscheduleClient:(id)a0;
- (void)_updateTimer;
- (id)scheduleWithInterval:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)unscheduleClient:(id)a0;

@end
