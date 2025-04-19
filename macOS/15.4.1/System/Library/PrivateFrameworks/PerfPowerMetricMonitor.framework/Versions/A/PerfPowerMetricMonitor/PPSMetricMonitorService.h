@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, PPSMetricMonitorServiceDelegate;

@interface PPSMetricMonitorService : NSObject <PPSMetricMonitorServiceInterface, NSXPCListenerDelegate>

@property (retain) NSMutableDictionary *clients;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *processPollingRepeatingTimer;
@property (weak, nonatomic) id<PPSMetricMonitorServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startXPCListener;
- (id)fullProcessNameForPid:(int)a0;
- (void)endWithError:(id)a0;
- (BOOL)_canStartMonitoringForClient:(id)a0;
- (void)_cancelProcessPollingTimer;
- (void)_handleConnectionEndedWithClient:(id)a0;
- (void)_pollForProcessNames:(id)a0;
- (void)_startProcessPollingTimer:(id)a0;
- (void)_updateMetricCollection:(id)a0 metricCollection:(id)a1;
- (void)collectMetricsOnDemand:(id /* block */)a0;
- (void)collectMetricsOnSnapshotWithError:(id *)a0 completion:(id /* block */)a1;
- (void)finishMonitoringAndSendMetrics;
- (void)setUpWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)setUpdateInterval:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringProcessWithName:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringProcessWithPID:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringProcessesWithName:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringProcessesWithNames:(id)a0 withPIDs:(id)a1 completion:(id /* block */)a2;
- (void)startMonitoringProcessesWithPID:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringSystemMetricsWithCompletion:(id /* block */)a0;
- (void)updateWithMetricCollection:(id)a0;

@end
