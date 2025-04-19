@class NSMutableDictionary, NSArray, RPRemoteDisplayDevice, RPRemoteDisplayDiscovery;

@interface DDUIRapportPeopleDiscovery : NSObject

@property (retain, nonatomic) RPRemoteDisplayDiscovery *discovery;
@property (retain, nonatomic) NSMutableDictionary *discoveredDevicesMap;
@property (retain, nonatomic) NSArray *previousAvailablePeople;
@property (copy, nonatomic) id /* block */ availablePeopleChangedHandler;
@property (copy, nonatomic) id /* block */ discoverySessionChangedHandler;
@property (readonly, nonatomic) unsigned char discoverySessionState;
@property (copy, nonatomic) id /* block */ personDeclinedHandler;
@property (retain, nonatomic) RPRemoteDisplayDevice *dedicatedDevice;
@property (copy, nonatomic) id /* block */ dedicatedDeviceChangedHandler;

- (void).cxx_destruct;
- (void)invalidate;
- (id)availablePeople;
- (void)activateDiscoveryWithCompletion:(id /* block */)a0;
- (void)attemptDedicatedDeviceConnection;
- (void)cancelPerson:(id)a0;
- (id)getDiscoveredDevicesMap;
- (id)initWithRemoteDisplayDiscovery:(id)a0 deviceSelectedHandler:(id /* block */)a1;
- (void)selectPerson:(id)a0 forDedicatedPairing:(BOOL)a1;

@end
