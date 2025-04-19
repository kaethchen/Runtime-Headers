@class PPSMetricMonitorConfiguration, NSXPCConnection, NSMutableSet, PPSMetricCollection;
@protocol PPSMetricMonitorClientInterface;

@interface PPSClient : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) id<PPSMetricMonitorClientInterface> remoteProxy;
@property (retain) PPSMetricMonitorConfiguration *config;
@property (retain) NSMutableSet *monitoredPIDs;
@property (retain) NSMutableSet *requestedProcessNames;
@property (retain) PPSMetricCollection *metricCollection;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 remoteProxy:(id)a1;

@end
