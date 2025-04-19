@class NWPathEvaluator, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface DMCNetworkMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSMutableArray *cachedCompletionHandlers;
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (nonatomic) BOOL isMonitoring;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoring;
- (BOOL)_deviceMightHaveNetwork;
- (void)_evaluateNetwork;
- (id)_interfaceType;
- (void)_notifyAllClients;
- (void)waitForNetworkWithCompletionHandler:(id /* block */)a0;

@end
