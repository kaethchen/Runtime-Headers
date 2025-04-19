@interface SNNetworkManagerInternal : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ subscriptionSlotOneStatus;
    void /* unknown type, empty encoding */ subscriptionSlotTwoStatus;
    void /* unknown type, empty encoding */ lastSuccessfulSymptomsFetch;
    void /* unknown type, empty encoding */ lastFetchInProgress;
    void /* unknown type, empty encoding */ lastSignalStrength;
    void /* unknown type, empty encoding */ subscriptionCount;
    void /* unknown type, empty encoding */ carrierName;
    void /* unknown type, empty encoding */ pathEvaluator;
    void /* unknown type, empty encoding */ pathStatus;
    void /* unknown type, empty encoding */ pathUsesCellular;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ networkWiFiManager;
    void /* unknown type, empty encoding */ networkWirelessCoexManager;
    void /* unknown type, empty encoding */ lastTimeSymptomsFetch;
    void /* unknown type, empty encoding */ connectionQualityReport;
    void /* unknown type, empty encoding */ lockConnectionQuality;
}

@property (class, nonatomic, readonly) SNNetworkManagerInternal *shared;

+ (void)acquireDormancySuspendAssertion:(id *)a0;
+ (void)releaseDormancySuspendAssertion:(id *)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)registerClient;
- (void)forceFastDormancy;
- (void)releaseWiFiAssertion;
- (void)stopMonitoringNetwork;
- (void)unregisterClient;
- (void)getSNLinkRecommendationMetrics:(id /* block */)a0;
- (void)acquireWiFiAssertionWithWifiAssertionTypeRawValue:(long long)a0;
- (void)getSNProximityLinkRecommendationWithRetry:(BOOL)a0 completion:(id /* block */)a1;
- (long long)networkQualityWithNetworkType:(long long)a0;
- (void)resetLinkRecommendationInfo;
- (void)startMonitoringNetwork:(id)a0;
- (void)updateNetworkPerformanceFeed;

@end
