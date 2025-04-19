@class CBController, NSString, NSArray, NSMutableDictionary, CBCentralManager, NSObject, CBDiscovery, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HUAccessoryManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    BOOL _centralIsOn;
    BOOL _bluetoothAvailable;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
    NSArray *_peripherals;
}

@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bluetoothCentralQueue;
@property (retain, nonatomic) CBController *bluetoothController;
@property (retain, nonatomic) CBDiscovery *bluetoothDiscovery;
@property (retain) NSArray *peripherals;
@property (retain) NSMutableArray *registeredCharacteristics;
@property (retain) NSMutableDictionary *loggingUpdates;
@property (retain) NSMutableDictionary *updateUpdates;
@property (retain) NSMutableDictionary *discoveryUpdates;
@property (retain) NSMutableDictionary *bluetoothStateUpdates;
@property (retain) NSMutableDictionary *audioOwnershipByAddress;
@property (retain, nonatomic) NSString *localBluetoothAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (id)sharedQueue;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)centralManager:(id)a0 connectionEventDidOccur:(long long)a1 forPeripheral:(id)a2;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)discoverAccessories;
- (id)identifierFromBluetoothAddress:(id)a0;
- (void)readValueForCharacteristicUUID:(id)a0;
- (id)availableAddresses;
- (id)availableAddressesWithCharacteristicSupport:(id)a0;
- (id)characteristicWithUUID:(id)a0 forPeripheral:(id)a1;
- (void)getAddressesFromIdentifiers:(id)a0 withCompletion:(id /* block */)a1;
- (void)getAudioOwnershipForAddress:(id)a0 withCompletion:(id /* block */)a1;
- (void)getAvailableAddressesSupportingCharacteristic:(id)a0 withCompletion:(id /* block */)a1;
- (void)getBluetoothState:(id /* block */)a0;
- (void)getIdentifiersFromAddresses:(id)a0 withCompletion:(id /* block */)a1;
- (void)registerBluetoothStateBlock:(id /* block */)a0 withListener:(id)a1;
- (void)registerDiscoveryBlock:(id /* block */)a0 withListener:(id)a1;
- (void)registerLoggingBlock:(id /* block */)a0 withListener:(id)a1;
- (void)registerUpdateBlock:(id /* block */)a0 forCharacteristicUUIDs:(id)a1 withListener:(id)a2;
- (void)removeDiscoveredAccessories;
- (void)setNotify:(BOOL)a0 forCharacteristicUUIDs:(id)a1;
- (void)setupBluetoothController;
- (void)updateBluetoothAvailability;
- (void)updateNotify:(BOOL)a0 forPeripheral:(id)a1 withCharacteristicUUIDs:(id)a2;
- (void)writeValue:(id)a0 forCharacteristicUUID:(id)a1 andAddress:(id)a2;

@end
