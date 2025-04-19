@class NSString, NSHashTable, NFStateMachine, FCNetworkReachability;
@protocol FCOperationCanceling, FCNetworkTransitionMonitor;

@interface FCOfflineModeMonitor : NSObject <FCNetworkReachabilityObserving, FCNetworkReachabilityType>

@property (retain, nonatomic) NFStateMachine *stateMachine;
@property (nonatomic) long long offlineReason;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) FCNetworkReachability *networkReachability;
@property (readonly, nonatomic) id<FCNetworkTransitionMonitor> onlineTransitionMonitor;
@property (readonly, nonatomic) id<FCNetworkTransitionMonitor> offlineTransitionMonitor;
@property (retain, nonatomic) id<FCOperationCanceling> offlineTransitionOperation;
@property (retain, nonatomic) id<FCOperationCanceling> onlineTransitionOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isCloudKitReachable;
@property (readonly, nonatomic) BOOL isNetworkReachableViaWiFi;
@property (readonly, nonatomic) BOOL isLowDataModeEnabled;
@property (readonly, nonatomic) BOOL isNetworkUsageInexpensive;
@property (readonly, nonatomic) long long cellularRadioAccessTechnology;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_notifyNetworkReachabilityConnectivityDidChange;
- (void)_notifyNetworkReachabilityDidChange;
- (void)_transitionToOfflineReason:(long long)a0;
- (id)initWithAppActivationMonitor:(id)a0 configurationManager:(id)a1 networkBehaviorMonitor:(id)a2;
- (id)initWithNetworkReachability:(id)a0 onlineTransitionMonitor:(id)a1 offlineTransitionMonitor:(id)a2;
- (void)networkReachabilityDidChange:(id)a0;
- (void)wifiReachabilityDidChange:(id)a0;

@end
