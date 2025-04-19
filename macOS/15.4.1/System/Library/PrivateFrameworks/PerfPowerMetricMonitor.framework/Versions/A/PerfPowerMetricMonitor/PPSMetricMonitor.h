@class NSArray, PPSMetricMonitorConfiguration, NSXPCConnection, NSObject;
@protocol PPSMetricMonitorDelegate, PPSMetricMonitorServiceInterface, OS_dispatch_queue;

@interface PPSMetricMonitor : NSObject <PPSMetricMonitorClientInterface>

@property (weak, nonatomic) id<PPSMetricMonitorDelegate> delegate;
@property (retain) PPSMetricMonitorConfiguration *config;
@property (retain) NSXPCConnection *connection;
@property (retain) id<PPSMetricMonitorServiceInterface> remoteProxy;
@property long long monitoringState;
@property (retain) NSArray *currentProcessPIDs;
@property (retain) NSArray *currentProcessNames;
@property BOOL isInterrupted;
@property (retain) NSObject<OS_dispatch_queue> *xpcMessagingQueue;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;

- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)endWithError:(id)a0;
- (void)_handleXPCInterruption;
- (void)_resetMonitoringState;
- (void)_resumeMonitoring;
- (void)_setUpXPCConnectionWithConfig:(id)a0;
- (id)collectMetricsOnDemand;
- (id)collectMetricsOnSnapshot:(id *)a0;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 error:(id *)a2;
- (BOOL)setUpdateInterval:(double)a0 error:(id *)a1;
- (BOOL)startMonitoringProcessWithName:(id)a0 error:(id *)a1;
- (BOOL)startMonitoringProcessWithPID:(int)a0 error:(id *)a1;
- (BOOL)startMonitoringProcessesWithName:(id)a0 error:(id *)a1;
- (BOOL)startMonitoringProcessesWithNames:(id)a0 PIDs:(id)a1 error:(id *)a2;
- (BOOL)startMonitoringProcessesWithPID:(id)a0 error:(id *)a1;
- (void)startMonitoringSystemMetricsOnly;
- (BOOL)startMonitoringSystemMetricsWithError:(id *)a0;
- (void)updateWithMetricCollection:(id)a0;

@end
