@class NSMutableDictionary, NSHashTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface DAReachability : NSObject {
    NSHashTable *_networkReachableDelegates;
    NSMutableDictionary *_hostReachableDelegates;
    BOOL _monitoringNetworkReachability;
    NSMutableSet *_hostsMonitoredForReachability;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedReachability;
+ (BOOL)hostLikelyUnreachable:(id)a0;
+ (void)recordError:(id)a0 forHost:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)_networkReachabilityChanged:(id)a0;
- (BOOL)_monitoringReachabilityForHost:(id)a0;
- (void)_hostReachabilityChanged:(id)a0;
- (BOOL)_monitoringNetworkReachability;
- (void)_notifyDelegatesHostReachable:(id)a0;
- (void)_notifyDelegatesNetworkReachable;
- (void)_startMonitoringNetworkReachability;
- (void)_startMonitoringReachabilityForHost:(id)a0;
- (void)_startOrStopObservingHostReachabilityAfterUpdatingDelegates;
- (void)_startOrStopObservingNetworkReachabilityAfterUpdatingDelegates;
- (void)_stopMonitoringNetworkReachability;
- (void)_stopMonitoringReachabilityForHost:(id)a0;
- (void)muckWithDelegates:(id /* block */)a0;

@end
