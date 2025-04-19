@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, RTWatchdogManager;
@protocol OS_dispatch_queue;

@interface RTLifeCycleManager : NSObject

@property (retain, nonatomic) NSMutableArray *signals;
@property (retain, nonatomic) NSMutableDictionary *listeners;
@property (retain, nonatomic) NSMutableSet *services;
@property (retain, nonatomic) RTWatchdogManager *watchdogManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)exit;
- (void)_start;
- (void)_exit;
- (void)addListener:(id)a0 machPort:(id)a1;
- (void)addService:(id)a0;
- (id)createSourceForSignal:(int)a0 withBlock:(id /* block */)a1;
- (void)exitWithDelay:(double)a0;
- (id)serviceWithClass:(Class)a0;
- (void)submitUptimeMetricsWithDefaultsMananger:(id)a0;

@end
