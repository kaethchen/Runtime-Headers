@class NSObject;
@protocol OS_dispatch_queue;

@interface ULTimerFactory : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *primaryQueue;

+ (id)_instance;
+ (void)setPrimaryQueue:(id)a0;
+ (id)timerOnPrimaryQueueWithInterval:(double)a0 repeats:(BOOL)a1 block:(id /* block */)a2;
+ (id)timerWithQueue:(id)a0 Interval:(double)a1 repeats:(BOOL)a2 block:(id /* block */)a3;

- (void).cxx_destruct;

@end
