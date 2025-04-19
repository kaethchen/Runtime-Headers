@class NSMutableArray, NSArray, NSMutableDictionary, AXDispatchTimer, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface HUNearbyController : NSObject <IDSServiceDelegate, AXSSInterDeviceHearingAidsMessagesObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nearbyUpdatesQueue;
@property (copy, nonatomic) NSArray *availableDevices;
@property (readonly, nonatomic) NSArray *availableWatches;
@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSMutableDictionary *domainQueues;
@property (retain, nonatomic) NSMutableArray *registeredDomains;
@property (retain, nonatomic) NSMutableDictionary *loggingUpdates;
@property (retain, nonatomic) NSMutableDictionary *messageUpdates;
@property (retain, nonatomic) NSMutableDictionary *discoveryUpdates;
@property (retain, nonatomic) AXDispatchTimer *nearbyHysteresisTimer;
@property (nonatomic) BOOL shouldPublishNearbyUpdates;
@property (nonatomic) BOOL hasPendingNearbyUpdates;
@property (retain, nonatomic) AXDispatchTimer *startTimer;
@property (retain, nonatomic) id interDeviceCommunicator;
@property (copy, nonatomic) id /* block */ scIDSServiceMessageBlock;
@property (copy, nonatomic) id /* block */ scIDSServiceDevicesUpdatesBlock;
@property (copy, nonatomic) NSMutableArray *scIDSDevices;
@property BOOL scIDSServiceHasPeers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)logMessage:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (id)nearbyDevices;
- (void)didReceiveHearingAidsMessage:(id)a0 fromDevice:(id)a1;
- (void)didUpdateDevices:(id)a0;
- (id)descriptionForIDSDevice:(id)a0;
- (id)descriptionForPriority:(unsigned long long)a0;
- (void)discoverNearbyDevicesWithDomain:(id)a0;
- (void)discoverSCIDSServiceWithDevicesUpdates:(id /* block */)a0 messageBlock:(id /* block */)a1;
- (void)logIDSDevices:(id)a0 withTitle:(id)a1;
- (void)logMessageWithDomain:(id)a0 message:(id)a1;
- (void)logNearbyDevices:(id)a0 withTitle:(id)a1;
- (void)logSCIDSDeviceFromDevices:(id)a0;
- (id)nearbyDeviceWithIdentifier:(id)a0 justCreated:(BOOL *)a1;
- (void)nearbyDevicesDidUpdateWithNewDevices:(id)a0 forDomain:(id)a1;
- (void)processIDSDevices:(id)a0;
- (void)registerBlock:(id)a0 forKey:(id)a1 withUpdateGroup:(id)a2 forDomain:(id)a3 withListener:(id)a4;
- (void)registerDiscoveryBlock:(id /* block */)a0 forDomain:(id)a1 withListener:(id)a2;
- (void)registerLoggingBlock:(id /* block */)a0 forDomain:(id)a1 withListener:(id)a2;
- (void)registerMessageBlock:(id /* block */)a0 forDomain:(id)a1 withListener:(id)a2;
- (void)registerQueue:(id)a0 forDomain:(id)a1;
- (BOOL)scIDSHasPeers;
- (void)sendMessage:(id)a0 toDevicesWithDomain:(id)a1 excludingState:(id)a2 withPriority:(unsigned long long)a3;
- (void)sendMessage:(id)a0 toDevicesWithDomain:(id)a1 withPriority:(unsigned long long)a2;
- (void)sendMessage:(id)a0 toWatchDevicesWithDomain:(id)a1 excludingState:(id)a2 withPriority:(unsigned long long)a3;
- (void)sendMessage:(id)a0 toWatchDevicesWithDomain:(id)a1 withPriority:(unsigned long long)a2;
- (void)sendMessage:(id)a0 withDomain:(id)a1 toDevices:(id)a2 withPriority:(unsigned long long)a3;
- (void)sendSCIDSMessage:(id)a0 toDevice:(id)a1;
- (void)stopDiscoveringDevicesWithDomain:(id)a0;
- (void)stopDiscoveringSCIDSService;

@end
