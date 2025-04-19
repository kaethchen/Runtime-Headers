@class NSString, SNNetworkManagerInternal, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface SNNetworkManager : NSObject <SNNetworkManagerObserverInternal> {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) SNNetworkManagerInternal *underlyingNetworkManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)acquireDormancySuspendAssertion:(const void **)a0;
+ (void)releaseDormancySuspendAssertion:(const void **)a0;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)_init;
- (void)addObserver:(id)a0;
- (void)registerClient;
- (void)acquireWiFiAssertion:(long long)a0;
- (void)forceFastDormancy;
- (void)networkManagerLostNonWWANConnectivity:(id)a0;
- (void)networkManagerNonWWANDidBecomeAvailable:(id)a0;
- (void)releaseWiFiAssertion;
- (void)startMonitoringNetworkForHost:(id)a0;
- (void)stopMonitoringNetwork;
- (void)unregisterClient;
- (long long)networkQuality:(long long)a0;
- (void)getLinkRecommendation:(BOOL)a0 recommendation:(id /* block */)a1;
- (void)getLinkRecommendationMetrics:(id /* block */)a0;
- (void)networkManagerNetworkUnreachable:(id)a0;
- (void)resetLinkRecommendationInfo;
- (void)updateNetworkPerformanceFeed;

@end
