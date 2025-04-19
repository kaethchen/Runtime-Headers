@class NSDate, NSTimer, NSObject;
@protocol OS_dispatch_queue, RWINotifier;

@interface RWINotificationWaiter : NSObject {
    NSDate *_startTime;
    unsigned long long _notificationHandlerID;
    NSTimer *_watchdogTimer;
}

@property (nonatomic) double timeout;
@property (retain, nonatomic) id<RWINotifier> notifier;
@property (copy, nonatomic) id /* block */ predicate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) double elapsedTime;

+ (id)waitForNotification:(id)a0 matchingPredicate:(id /* block */)a1 withTimeout:(double)a2 completionQueue:(id)a3 completionBlock:(id /* block */)a4;

- (void).cxx_destruct;
- (void)start;
- (void)_watchdogTimerFired:(id)a0;
- (void)_teardownAndDispatchResult:(long long)a0 notification:(id)a1;
- (id)initWithNotifier:(id)a0 predicate:(id /* block */)a1 timeout:(double)a2 completionQueue:(id)a3 completionBlock:(id /* block */)a4;

@end
