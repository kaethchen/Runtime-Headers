@interface PreviewsInjection.UVBSEndpointMonitor : NSObject <BSServiceConnectionEndpointMonitorDelegate> {
    void /* unknown type, empty encoding */ controlAgentMonitor;
    void /* unknown type, empty encoding */ controlAgent;
    void /* unknown type, empty encoding */ jitBootstrapAgentMonitor;
    void /* unknown type, empty encoding */ jitBootstrapAgent;
}

+ (void)activateMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)monitor:(id)a0 didReceiveEndpoint:(id)a1;
- (void)monitor:(id)a0 willLoseEndpoint:(id)a1;

@end
