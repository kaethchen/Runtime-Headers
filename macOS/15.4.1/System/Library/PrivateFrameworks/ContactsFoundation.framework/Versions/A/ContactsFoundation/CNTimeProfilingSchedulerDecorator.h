@class NSString;
@protocol CNScheduler;

@interface CNTimeProfilingSchedulerDecorator : NSObject <CNScheduler>

@property (readonly, nonatomic) unsigned long long blockCounter;
@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (unsigned long long)nextBlockNumber;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)initWithScheduler:(id)a0;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;

@end
