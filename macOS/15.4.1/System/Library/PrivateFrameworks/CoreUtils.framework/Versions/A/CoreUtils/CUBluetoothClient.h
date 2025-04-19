@class CBCentralManager, NSString, NSMutableDictionary, NSData, NSMutableArray, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue;

@interface CUBluetoothClient : NSObject <IOBluetoothDaemonNSXPCDelegate, CBCentralManagerDelegate, CBPeripheralManagerDelegate> {
    NSData *_btAdvertisingAddress;
    CBCentralManager *_btCentralManager;
    BOOL _btCentralManagerNeeded;
    CBPeripheralManager *_btPeripheralManager;
    BOOL _btPeripheralManagerNeeded;
    BOOL _btConnectionEventsNeeded;
    BOOL _btConnectionDevicesInitialized;
    NSMutableDictionary *_btConnectedDevices;
    NSMutableDictionary *_btPairedDevices;
    BOOL _btPairedDevicesInitialized;
    NSMutableArray *_findDeviceRequests;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (nonatomic) int bluetoothState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int requiredServices;
@property (nonatomic) unsigned int statusFlags;
@property (copy, nonatomic) id /* block */ bluetoothAddressChangedHandler;
@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;
@property (copy, nonatomic) id /* block */ deviceConnectedHandler;
@property (copy, nonatomic) id /* block */ deviceDisconnectedHandler;
@property (copy, nonatomic) id /* block */ deviceEventHandler;
@property (copy, nonatomic) id /* block */ devicePairedHandler;
@property (copy, nonatomic) id /* block */ deviceUnpairedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_invalidated;
- (void)findDeviceByAddress:(struct { unsigned char x0[6]; })a0 completion:(id /* block */)a1;
- (void)_btEnsureStarted;
- (void)_btEnsureStopped;
- (void)_externalInvokeBlock:(id /* block */)a0;
- (void)_findDeviceByAddress:(struct { unsigned char x0[6]; })a0 completion:(id /* block */)a1;
- (void)_handleAACPConnected:(id)a0;
- (void)_handleBluetoothAddressChanged;
- (void)_handleDeviceConnected:(id)a0;
- (void)_handleDeviceDisconnected:(id)a0;
- (void)_handlePairingStatusChanged:(id)a0;
- (id)_internalDispatchQueue;
- (void)_ioBluetoothDeviceTearDown:(id)a0;
- (void)_setDeviceFlags:(unsigned int)a0 mask:(unsigned int)a1 deviceID:(id)a2 completion:(id /* block */)a3;
- (void)_setupIOBluetoothDevice:(id)a0 cuBluetoothDevice:(id)a1;
- (void)centralManagerDidUpdateState:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)setDeviceFlags:(unsigned int)a0 mask:(unsigned int)a1 deviceID:(id)a2 completion:(id /* block */)a3;
- (void)updateStatusFlags;

@end
