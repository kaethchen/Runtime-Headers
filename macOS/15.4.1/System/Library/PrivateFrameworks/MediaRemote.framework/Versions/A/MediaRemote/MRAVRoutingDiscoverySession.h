@class MRAVRoutingDiscoverySessionConfiguration, NSMutableDictionary, NSMapTable, NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVRoutingDiscoverySession : NSObject {
    NSArray *_endpointsSnapshot;
    unsigned int _previousEndpointsDiscoveryMode;
    unsigned int _previousOutputDevicesDiscoveryMode;
}

@property (class, readonly, nonatomic) NSMutableArray *discoverySessionFactories;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue;

@property (retain, nonatomic) NSMutableDictionary *endpointsChangedCallbacks;
@property (retain, nonatomic) NSMutableDictionary *endpointsAddedCallbacks;
@property (retain, nonatomic) NSMutableDictionary *endpointsRemovedCallbacks;
@property (retain, nonatomic) NSMutableDictionary *endpointsModifiedCallbacks;
@property (retain, nonatomic) NSMutableDictionary *outputDevicesChangedCallbacks;
@property (retain, nonatomic) NSMutableDictionary *outputDevicesAddedCallbacks;
@property (retain, nonatomic) NSMutableDictionary *outputDevicesRemovedCallbacks;
@property (retain, nonatomic) NSMutableDictionary *outputDevicesModifiedCallbacks;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSMapTable *clientDiscoveryStates;
@property (copy, nonatomic) NSArray *endpointsSnapshot;
@property (copy, nonatomic) NSArray *outputDevicesSnapshot;
@property (copy, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;
@property (nonatomic) BOOL populatesExternalDevice;
@property (readonly, nonatomic) unsigned int endpointFeatures;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly, nonatomic) NSArray *availableEndpoints;
@property (readonly, nonatomic) NSArray *availableOutputDevices;
@property (nonatomic) unsigned int discoveryMode;
@property (nonatomic) BOOL alwaysAllowUpdates;
@property (nonatomic) unsigned int targetAudioSessionID;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL onlyDiscoversBluetoothDevices;
@property (nonatomic) BOOL alwaysLogUpdates;

+ (id)discoverySessionWithConfiguration:(id)a0;
+ (id)discoverySessionWithEndpointFeatures:(unsigned int)a0;
+ (id)discoverySessionWithEndpointFeatures:(unsigned int)a0 enableThrottling:(BOOL)a1;
+ (void)registerDiscoverySessionFactory:(id /* block */)a0;
+ (id)sharedDiscoverySessionForClass:(Class)a0 configuration:(id)a1;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)initWithFeatures:(unsigned int)a0;
- (void)removeEndpointsChangedCallback:(id)a0;
- (void)removeEndpointsRemovedCallback:(id)a0;
- (id)addEndpointsAddedCallback:(id /* block */)a0;
- (id)addEndpointsChangedCallback:(id /* block */)a0;
- (id)addEndpointsModifiedCallback:(id /* block */)a0;
- (id)addEndpointsRemovedCallback:(id /* block */)a0;
- (id)addOutputDevicesAddedCallback:(id /* block */)a0;
- (id)addOutputDevicesChangedCallback:(id /* block */)a0;
- (id)addOutputDevicesModifiedCallback:(id /* block */)a0;
- (id)addOutputDevicesRemovedCallback:(id /* block */)a0;
- (void)logEndpointsChanged:(id)a0 oldEndpoints:(id)a1;
- (void)logOutputDevicesChanged:(id)a0 oldOutputDevices:(id)a1;
- (void)notifyAvailableEndpointsChanged:(id)a0 discoveredEndpoints:(id)a1;
- (void)notifyEndpointsChanged:(id)a0;
- (void)notifyOutputDevicesChanged:(id)a0;
- (void)removeEndpointsAddedCallback:(id)a0;
- (void)removeEndpointsModifiedCallback:(id)a0;
- (void)removeOutputDevicesAddedCallback:(id)a0;
- (void)removeOutputDevicesChangedCallback:(id)a0;
- (void)removeOutputDevicesModifiedCallback:(id)a0;
- (void)removeOutputDevicesRemovedCallback:(id)a0;

@end
