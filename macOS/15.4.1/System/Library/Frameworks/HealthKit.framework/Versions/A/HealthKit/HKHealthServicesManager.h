@class HKProxyProvider, NSString, NSMutableDictionary, NSMutableSet, _HKCBCentralManagerLoader;

@interface HKHealthServicesManager : NSObject <_HKXPCExportable, HKHealthServicesManagerClientInterface> {
    HKProxyProvider *_proxyProvider;
    _HKCBCentralManagerLoader *_bluetoothManagerLoader;
}

@property (retain, nonatomic) NSMutableDictionary *discoveries;
@property (retain, nonatomic) NSMutableSet *discoveriesEnded;
@property (retain, nonatomic) NSMutableDictionary *sessions;
@property (retain, nonatomic) NSMutableSet *sessionsEnded;
@property (copy, nonatomic) id /* block */ bluetoothStatusHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)_addEndedDiscovery:(id)a0;
- (void)_addEndedSession:(id)a0;
- (void)_fetchHealthServicesServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_fetchSupportedServiceIDsWithCompletion:(id /* block */)a0;
- (void)_getCBPeripheralforIdentifer:(id)a0 withCompletion:(id /* block */)a1;
- (void)_getHealthPeripheralsStatus:(id)a0 withCompletion:(id /* block */)a1;
- (void)_setHealthPeripheralsStatus:(id)a0 status:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_startHealthServiceExtendedDiscovery:(id)a0 withHandler:(id /* block */)a1;
- (id)activeHealthServiceDiscoveries;
- (id)activeHealthServiceSessions;
- (void)addHealthServicePairing:(id)a0 withCompletion:(id /* block */)a1;
- (void)clientRemote_deliverBluetoothStatus:(long long)a0 withError:(id)a1;
- (void)clientRemote_deliverDiscoveryHealthService:(id)a0 toClient:(unsigned long long)a1 finished:(BOOL)a2 withError:(id)a3;
- (void)clientRemote_deliverSessionCharacteristics:(id)a0 forService:(id)a1 toClient:(unsigned long long)a2 withError:(id)a3;
- (void)clientRemote_deliverSessionHealthServiceStatus:(long long)a0 toClient:(unsigned long long)a1 finished:(BOOL)a2 withError:(id)a3;
- (void)endBluetoothStatusUpdates;
- (void)endHealthServiceDiscovery:(id)a0;
- (void)endHealthServiceSession:(id)a0;
- (void)getEnabledStatusForPeripheral:(id)a0 withCompletion:(id /* block */)a1;
- (void)getHealthServiceProperty:(id)a0 forSession:(id)a1 withHandler:(id /* block */)a2;
- (void)getHealthServicePropertyNamesWithHandler:(id /* block */)a0;
- (void)healthPeripheralsWithCustomProperties:(id)a0 withCompletion:(id /* block */)a1;
- (void)healthPeripheralsWithFilter:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)healthServicePairingsWithHandler:(id /* block */)a0;
- (id)initWithWeakHealthStore:(id)a0;
- (void)performHealthServiceOperation:(id)a0 onSession:(id)a1 withParameters:(id)a2 completion:(id /* block */)a3;
- (void)registerPeripheralIdentifier:(id)a0 name:(id)a1 services:(id)a2 withCompletion:(id /* block */)a3;
- (void)removeHealthServicePairing:(id)a0 withCompletion:(id /* block */)a1;
- (void)setEnabledStatus:(BOOL)a0 forPeripheral:(id)a1 withCompletion:(id /* block */)a2;
- (id)startAllHealthServicesDiscoveryWithHandler:(id /* block */)a0;
- (void)startBluetoothStatusUpdates:(id /* block */)a0;
- (void)startHealthServiceDiscovery:(id)a0 withHandler:(id /* block */)a1;
- (void)startHealthServiceSession:(id)a0 withHandler:(id /* block */)a1;
- (void)unregisterPeripheralIdentifier:(id)a0 withCompletion:(id /* block */)a1;

@end
