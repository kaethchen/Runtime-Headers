@class NSDate, NSArray, NSXPCConnection, NSString, MRAVDistantEndpoint, NSObject, MRAVLocalEndpoint;
@protocol OS_dispatch_queue;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    NSDate *_discoveryModeDate;
    NSArray *_distantEndpoints;
    NSArray *_distantOutputDevices;
    NSString *_routingContextUID;
    int _serviceResetNotifyToken;
    BOOL _hostedRoutingConnectionDidInitialize;
    NSDate *_hostedRoutingConnectionDate;
    NSArray *_notificationTokens;
}

@property (retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection;
@property (readonly, nonatomic) NSArray *distantEndpoints;
@property (readonly, nonatomic) NSArray *distantOutputDevices;
@property (retain, nonatomic) MRAVLocalEndpoint *localEndpoint;
@property (retain, nonatomic) MRAVDistantEndpoint *distantLocalEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serviceInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)configurationWithCompletion:(id /* block */)a0;
- (id)routingContextUID;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)availableOutputDevices;
- (BOOL)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (id)_hostedRoutingConnection;
- (void)_initializeHostedRoutingConnectionWithCompletion:(id /* block */)a0;
- (void)_notifyEndpointsChanged;
- (void)_registerForPerRoutingContextNotifications;
- (void)_reloadAvailableDistantEndpoints;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)a0;
- (void)_reloadAvailableDistantOutputDevices;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)a0;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (id)_resolveDistantEndpoints:(id)a0;
- (id)_resolveEndpoints:(id)a0;
- (BOOL)_shouldAddLocalEndpoint;
- (id)availableEndpoints;
- (void)availableEndpointsDidChange:(id)a0;
- (void)availableOutputDevicesDidChange:(id)a0;
- (unsigned int)endpointFeatures;
- (void)setRoutingContextUID:(id)a0;

@end
