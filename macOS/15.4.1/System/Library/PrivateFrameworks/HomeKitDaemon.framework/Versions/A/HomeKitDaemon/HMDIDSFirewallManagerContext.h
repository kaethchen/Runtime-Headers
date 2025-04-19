@class HMDHomeManager, NSString, IDSFirewall, HMDIDSFirewallManager, NSObject, NSNotificationCenter;
@protocol OS_dispatch_queue;

@interface HMDIDSFirewallManagerContext : HMFObject <HMFLogging>

@property (weak) HMDIDSFirewallManager *firewallManager;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) IDSFirewall *firewall;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (void)addFirewallEntries:(id)a0;
- (void)addFirewallEntries:(id)a0 completion:(id /* block */)a1;
- (void)handleHomeAddedNotification:(id)a0;
- (void)handleHomeRemovedNotification:(id)a0;
- (void)handleHomeUserAddedNotification:(id)a0;
- (void)handleHomeUserRemovedNotification:(id)a0;
- (id)initWithHomeManager:(id)a0 IDSFirewall:(id)a1 notificationCenter:(id)a2 workQueue:(id)a3;
- (void)registerForHomeUserNotifications;
- (void)replaceFireWallEntries:(id)a0;

@end
