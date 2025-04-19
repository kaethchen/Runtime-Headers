@class MPAVEndpointRoute, MRAVOutputDevice, NSString, MRAVEndpoint, MRAVRoutingDiscoverySessionConfiguration, NSArray, NSObject, MRAVRoutingDiscoverySession, MPMRAVOutputContextWrapper;
@protocol OS_dispatch_queue;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_discoverySessionQueue;
    BOOL _attemptedToInitializeAppOutputContext;
    id _companionCallbackToken;
    BOOL _didFindCompanion;
    id _callbackToken;
    BOOL _devicePresenceDetected;
    NSArray *_outputDeviceRoutes;
    BOOL _shouldSourceOutputDevicesFromAVODDS;
    BOOL _didReceiveDiscoveryResults;
    unsigned int _targetSessionID;
    long long _discoveryMode;
}

@property (retain, nonatomic) MPMRAVOutputContextWrapper *applicationOutputContext;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *companionDiscoverySession;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic) BOOL didReceiveDiscoveryResults;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (readonly, nonatomic) MRAVEndpoint *endpoint;
@property (retain, nonatomic) MRAVOutputDevice *predictedDevice;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL supportsMultipleSelection;
@property (nonatomic) BOOL detachesRoutesToGroup;
@property (nonatomic) BOOL supportsQueueHandoff;
@property (copy, nonatomic) NSString *presentingAppBundleID;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute;
@property (retain, nonatomic) NSString *initiator;

+ (id)_globalAudioSessionLock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)setDiscoveryMode:(long long)a0;
- (BOOL)devicePresenceDetected;
- (long long)discoveryMode;
- (unsigned int)targetSessionID;
- (void)setTargetSessionID:(unsigned int)a0;
- (id)_stateDumpObject;
- (id)_detachableDevicesInOutputDevices:(id)a0;
- (void)_endpointsDidChangeNotification:(id)a0;
- (void)_generateDiscoverySession;
- (id)_initWithEndpointRoute:(id)a0;
- (BOOL)_isRemovingPredictedDevice:(id)a0;
- (void)_onDiscoverySessionQueue_generateCompanionDiscoverySession;
- (void)_onDiscoverySessionQueue_generateDiscoverySession;
- (id)_outputDeviceRouteWithUID:(id)a0;
- (void)_outputDevicesDidChange:(id)a0;
- (void)_outputDevicesDidChangeNotification:(id)a0;
- (void)_personalRoutesDidChange;
- (void)_resetPredictedOutputDevice;
- (void)_routeStatusDidChangeNotification:(id)a0;
- (void)_setShouldSourceOutputDevicesFromAVODDS:(BOOL)a0;
- (BOOL)_shouldAddPredictedDeviceToOuputDevices:(id)a0;
- (BOOL)_shouldDetachOutputDevicesToGroup:(id)a0;
- (void)addRouteToGroup:(id)a0 completion:(id /* block */)a1;
- (void)addRoutesToGroup:(id)a0 completion:(id /* block */)a1;
- (void)createGroupFromOutputDevices:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)getRoutesForCategory:(id)a0;
- (id)initWithEndpointRoute:(id)a0;
- (id)outputDevicesForRoutes:(id)a0;
- (void)removeRouteFromGroup:(id)a0 completion:(id /* block */)a1;
- (void)removeRoutesFromGroup:(id)a0 completion:(id /* block */)a1;
- (BOOL)routeIsLeaderOfEndpoint:(id)a0;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;

@end
