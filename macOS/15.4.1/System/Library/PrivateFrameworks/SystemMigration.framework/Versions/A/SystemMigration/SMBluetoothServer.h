@class NSMutableArray, CBMutableService, CBMutableCharacteristic, NSMutableDictionary, NSString, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue, SMBluetoothServerDelegate;

@interface SMBluetoothServer : NSObject <CBPeripheralManagerDelegate>

@property (weak) id<SMBluetoothServerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain) NSObject<OS_dispatch_queue> *bluetoothQueue;
@property (retain) NSObject<OS_dispatch_queue> *writeQueue;
@property (retain) CBPeripheralManager *manager;
@property (retain) CBMutableService *service;
@property (retain) CBMutableCharacteristic *capabilitiesCharacteristic;
@property (retain) CBMutableCharacteristic *streamCharacteristic;
@property (retain) CBMutableCharacteristic *optionsCharacteristic;
@property (retain) NSMutableDictionary *inputPipesByCentral;
@property (retain) NSMutableArray *pendingWriteRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)errorWithCode:(unsigned long long)a0 description:(id)a1;
- (void)peripheralManager:(id)a0 central:(id)a1 didSubscribeToCharacteristic:(id)a2;
- (void)peripheralManager:(id)a0 central:(id)a1 didUnsubscribeFromCharacteristic:(id)a2;
- (void)peripheralManager:(id)a0 didAddService:(id)a1 error:(id)a2;
- (void)peripheralManager:(id)a0 didReceiveWriteRequests:(id)a1;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)a0;
- (void)notifyDelegate:(id /* block */)a0;
- (id)errorWithCode:(unsigned long long)a0 description:(id)a1 underlyingError:(id)a2;
- (void)_processWriteRequests;
- (void)addWriteRequest:(id)a0;
- (BOOL)createInputPipeForCentral:(id)a0;
- (id)encodedCapabilities:(id)a0;
- (id)getInputPipeForCentral:(id)a0;
- (id)getSubscribedCentralWithUUID:(id)a0;
- (long long)handleGATTWriteRequest:(id)a0;
- (long long)handleOptionsWriteRequest:(id)a0;
- (id)initWithCapabilities:(id)a0 delegate:(id)a1 queue:(id)a2;
- (id)mergedCapabilities:(id)a0;
- (void)processWriteRequests;
- (id)readDataOfLength:(unsigned long long)a0 fromCentralWithIdentifier:(id)a1 error:(id *)a2;
- (void)removeInputPipeForCentral:(id)a0;
- (void)removeWriteRequestsForCentral:(id)a0;
- (BOOL)writeData:(id)a0 toCentralWithIdentifier:(id)a1 error:(id *)a2;

@end
