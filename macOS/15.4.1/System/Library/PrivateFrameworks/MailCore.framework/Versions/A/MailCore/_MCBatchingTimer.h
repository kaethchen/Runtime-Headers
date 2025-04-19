@class NSObject, NSLock, NSDate;
@protocol _MCBatchingTimerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface _MCBatchingTimer : NSObject {
    NSLock *_timerLock;
    NSObject<OS_dispatch_source> *_timer;
}

@property (readonly, nonatomic) NSDate *targetDate;
@property (readonly, nonatomic) double minimumTimeout;
@property (readonly, weak, nonatomic) id<_MCBatchingTimerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)update;
- (void)_scheduleTimerForTimeInterval:(double)a0;
- (id)initWithTimeInterval:(double)a0 delegate:(id)a1 queue:(id)a2;

@end
