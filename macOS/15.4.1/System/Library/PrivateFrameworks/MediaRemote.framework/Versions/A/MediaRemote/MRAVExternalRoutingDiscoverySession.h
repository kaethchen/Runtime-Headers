@class MRAVEndpoint, MRExternalDevice, MRAVRoutingDiscoverySessionConfiguration;

@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    unsigned int _discoveryMode;
    MRAVRoutingDiscoverySessionConfiguration *_configuration;
    id _externalDeviceDiscoveryToken;
}

@property (retain, nonatomic) MRAVEndpoint *destination;
@property (retain, nonatomic) MRExternalDevice *externalDevice;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)availableOutputDevices;
- (BOOL)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (id)availableEndpoints;
- (id)destinationOutputDeviceUID;
- (unsigned int)endpointFeatures;

@end
