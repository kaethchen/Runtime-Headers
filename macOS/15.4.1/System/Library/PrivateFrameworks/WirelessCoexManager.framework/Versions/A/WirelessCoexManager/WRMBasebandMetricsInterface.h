@interface WRMBasebandMetricsInterface : WRMClientInterface {
    id /* block */ metricsHandler;
    id /* block */ dataMetricsHandler;
    id /* block */ wifiMetricsHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)registerClient:(int)a0 queue:(id)a1;
- (void)unregisterClient;
- (void)getCellularDataMetrics:(id /* block */)a0;
- (void)getNRPhyMetrics:(id /* block */)a0;
- (void)getQSHMetrics:(id /* block */)a0;
- (void)getWiFiBWEstimationMetrics:(id /* block */)a0;
- (void)handleNotification:(id)a0 :(BOOL)a1;
- (void)processWRMCellDataMetrics:(id)a0;
- (void)processWRMNrPhyMetrics:(id)a0;
- (void)processWRMWiFiBWEstMetrics:(id)a0;
- (void)reConnect;

@end
