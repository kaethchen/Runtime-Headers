@class NSObject, NetworkQualityConfiguration;
@protocol OS_dispatch_queue;

@interface RemoteNetworkQualityAssessment : NSObject {
    NetworkQualityConfiguration *config;
    NSObject<OS_dispatch_queue> *dispatchQueue;
    id /* block */ completionHandler;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)getAvailableServersForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)rapportDiscoveryCompletionWithClient:(id)a0 deviceName:(id)a1;
- (void)rapportDiscoveryCompletionWithClient:(id)a0 deviceName:(id)a1 completionHandler:(id /* block */)a2;
- (void)rapportInvokeCompletionWithClient:(id)a0 deviceIdentifier:(id)a1;
- (void)rapportQueryCompletionWithClient:(id)a0 deviceIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)runAgainst:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
