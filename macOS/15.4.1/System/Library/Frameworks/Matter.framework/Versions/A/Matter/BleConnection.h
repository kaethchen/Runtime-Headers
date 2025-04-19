@class CBCentralManager, CBUUID, CBPeripheral, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BleConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>

@property (readonly, nonatomic) int totalDevicesAdded;
@property (readonly, nonatomic) int totalDevicesRemoved;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) CBPeripheral *peripheral;
@property (retain, nonatomic) CBUUID *shortServiceUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) unsigned char currentMode;
@property (retain, nonatomic) NSMutableDictionary *cachedPeripherals;
@property (nonatomic) BOOL found;
@property (nonatomic) struct SetupDiscriminator { unsigned short mDiscriminator; BOOL mIsShortDiscriminator; } deviceDiscriminator;
@property (nonatomic) void *appState;
@property (nonatomic) void /* function */ *onConnectionComplete;
@property (nonatomic) void /* function */ *onConnectionError;
@property (nonatomic) struct BleScannerDelegate { void /* function */ **x0; } *scannerDelegate;
@property (nonatomic) struct BleLayer { int x0; void *x1; struct BleLayerDelegate *x2; struct BleConnectionDelegate *x3; struct BlePlatformDelegate *x4; struct BleApplicationDelegate *x5; struct Layer *x6; } *mBleLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fillServiceWithCharacteristicUuids:(id)a0 svcId:(struct ChipBleUUID { unsigned char x0[16]; } *)a1 charId:(struct ChipBleUUID { unsigned char x0[16]; } *)a2;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)start;
- (void)stop;
- (void)clearTimer;
- (id)initWithQueue:(id)a0;
- (void)startScanning;
- (void)stopScanning;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (BOOL)isConnecting;
- (void)connect:(id)a0;
- (void)_resetCounters;
- (void)updateWithPeripheral:(id)a0;
- (id)initWithDelegate:(struct BleScannerDelegate { void /* function */ **x0; } *)a0 prewarm:(BOOL)a1 queue:(id)a2;
- (void)addPeripheralToCache:(id)a0 data:(id)a1;
- (BOOL)checkDiscriminator:(unsigned short)a0;
- (void)detachScannerDelegate;
- (void)dispatchConnectionComplete:(id)a0;
- (void)dispatchConnectionError:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; })a0;
- (id)initWithDiscriminator:(const struct SetupDiscriminator { unsigned short x0; BOOL x1; } *)a0 queue:(id)a1;
- (void)removePeripheralFromCache:(id)a0;
- (void)removePeripheralsFromCache;
- (void)setBleLayer:(struct BleLayer { int x0; void *x1; struct BleLayerDelegate *x2; struct BleConnectionDelegate *x3; struct BlePlatformDelegate *x4; struct BleApplicationDelegate *x5; struct Layer *x6; } *)a0;
- (void)setupTimer:(unsigned long long)a0;
- (void)updateWithDelegate:(struct BleScannerDelegate { void /* function */ **x0; } *)a0 prewarm:(BOOL)a1;
- (void)updateWithDiscriminator:(const struct SetupDiscriminator { unsigned short x0; BOOL x1; } *)a0;

@end
