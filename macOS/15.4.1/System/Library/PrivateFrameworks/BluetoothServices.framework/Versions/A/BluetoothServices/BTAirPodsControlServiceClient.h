@class CBUUID, CBCharacteristic, NSString, NSUUID, BTAirPodsControlRequest, CBService, NSObject, CBCentralManager, CBDevice, CBPeripheral, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BTAirPodsControlServiceClient : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBCharacteristic *_airpodsCaseControlCharacteristicObj;
    CBUUID *_airpodsCaseControlCharacteristicUUID;
    CBService *_airpodsCaseControlServiceObj;
    CBUUID *_airpodsCaseControlServiceUUID;
    CBCentralManager *_centralManager;
    BOOL _connected;
    BOOL _invalidateCalled;
    NSUUID *_peerUUID;
    CBPeripheral *_peripheral;
    NSMutableArray *_requestArray;
    BTAirPodsControlRequest *_requestCurrent;
    int _state;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) CBDevice *peerDevice;
@property (retain, nonatomic) NSString *deviceSN;
@property (retain, nonatomic) NSString *deviceUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)_abortRequestsWithError:(id)a0;
- (void)_completeRequest:(id)a0 error:(id)a1;
- (void)_reportError:(id)a0;
- (void)_run;
- (BOOL)_runConnectStart;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didUpdateFindMyPeripherals:(id)a1;
- (BOOL)isFindmyManaged;
- (BOOL)_runDiscoverCharacteristicsStart;
- (BOOL)_runDiscoverServicesStart;
- (BOOL)_runInit;
- (void)_runProcessRequest:(id)a0;
- (void)_runProcessRequests;
- (void)_setupTimeoutForRequest:(id)a0;
- (void)getSilentModeWithCompletionHandler:(id /* block */)a0;
- (void)setSilentMode:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
