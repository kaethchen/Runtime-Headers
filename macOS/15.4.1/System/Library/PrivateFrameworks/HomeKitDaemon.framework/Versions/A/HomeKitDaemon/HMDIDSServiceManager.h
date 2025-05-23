@class NSString, HMDIDSActivityMonitorObserver, HMDIDSActivityMonitor, HMDIDSActivityMonitorBroadcaster, NSMutableSet, NSObject, _HMDIDSProxyLinkPreferenceAssertion;
@protocol HMDIDSService, OS_dispatch_queue, HMDIDSServiceManagerNotificationCenter;

@interface HMDIDSServiceManager : HMFObject <HMFLogging> {
    NSMutableSet *_applicationBundleIdentifiersThatNeedWakingMessages;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDIDSActivityMonitor *_activityMonitor;
    _HMDIDSProxyLinkPreferenceAssertion *_proxyLinkPreferenceAssertion;
    id<HMDIDSServiceManagerNotificationCenter> _notificationCenter;
}

@property (class, readonly) HMDIDSServiceManager *sharedManager;
@property (class, readonly, copy) NSString *sharedIDSServiceName;

@property (readonly) id<HMDIDSService> service;
@property (readonly) id<HMDIDSService> hmmmService;
@property (readonly) id<HMDIDSService> hmmmEnergyService;
@property (readonly) id<HMDIDSService> legacyService;
@property (readonly) id<HMDIDSService> proxyService;
@property (readonly) id<HMDIDSService> streamService;
@property (readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster;
@property (readonly) HMDIDSActivityMonitorObserver *activityObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (id)initWithDefaults;
- (void)retrieveFirewallWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)unconfigure;
- (void)addProxyServiceLinkPreferencesAssertionHolder:(id)a0;
- (void)handleProcessInfoStateChanged:(id)a0;
- (id)initWithMainService:(id)a0 legacyService:(id)a1 hmmmService:(id)a2 hmmmEnergyService:(id)a3 proxyService:(id)a4 streamService:(id)a5 notificationCenter:(id)a6;
- (void)setActivityMonitorDataSource:(id)a0;

@end
