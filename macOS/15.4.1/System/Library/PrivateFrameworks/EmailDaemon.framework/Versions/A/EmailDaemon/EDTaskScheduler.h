@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface EDTaskScheduler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic) double backOffInterval;
@property (nonatomic) BOOL isReachable;
@property (nonatomic) BOOL pendingWaitingForNetwork;
@property (copy, nonatomic) id /* block */ task;
@property (copy, nonatomic) id /* block */ canceledCallback;
@property (copy, nonatomic) id /* block */ work;
@property (nonatomic) double initialDelay;
@property (nonatomic) double maxBackOffInterval;
@property (nonatomic) double backoffMultiplier;
@property (nonatomic) BOOL observeForNetworkReachability;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_cancelTimer;
- (id)initWithExecutionQueue:(id)a0;
- (void)_doScheduleTask:(id /* block */)a0 canceledCallback:(id /* block */)a1;
- (void)_incrementBackoffInterval;
- (void)_reportReachabilityChange:(id)a0;
- (void)_startObservingNetworkReachability;
- (void)_stopObservingNetworkReachability;
- (void)rescheduleTask;
- (void)scheduleTask:(id /* block */)a0 canceledCallback:(id /* block */)a1;

@end
