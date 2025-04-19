@class NSDate, BSAbsoluteMachTimer, NSObject;
@protocol BSWatchdogProviding, OS_dispatch_queue, BSWatchdogDelegate;

@interface BSWatchdog : NSObject {
    BSAbsoluteMachTimer *_timer;
    id /* block */ _completion;
    BOOL _invalidated;
    BOOL _completed;
}

@property (retain, nonatomic) id<BSWatchdogDelegate> delegate;
@property (readonly, nonatomic) id<BSWatchdogProviding> provider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic, getter=hasFired) BOOL fired;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)_watchdogInvalidated;
- (void)_watchdogTimerFired;
- (id)initWithProvider:(id)a0 queue:(id)a1;
- (id)initWithProvider:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithTimeout:(double)a0 queue:(id)a1;
- (id)initWithTimeout:(double)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
