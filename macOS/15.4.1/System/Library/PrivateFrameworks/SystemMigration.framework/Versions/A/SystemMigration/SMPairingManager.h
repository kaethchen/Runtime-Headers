@class SMPairingCode, NSString, NSData, SMSystem_Daemon_Network, SMBluetoothServer, NSObject;
@protocol OS_dispatch_queue, SMPairingEventsListener, OS_dispatch_semaphore;

@interface SMPairingManager : NSObject <SMSystemScannerChangesProtocol, SMSystemScannerDaemonClient, SMBluetoothServerDelegate>

@property (weak) id<SMPairingEventsListener> delegate;
@property (retain) NSObject<OS_dispatch_semaphore> *bluetoothReadySemaphore;
@property BOOL bluetoothReady;
@property (retain) SMBluetoothServer *bluetoothServer;
@property (retain) NSData *remoteCertificateData;
@property unsigned long long requestedDaemonScannerState;
@property (retain) SMPairingCode *pairingCode;
@property BOOL started;
@property (retain) SMSystem_Daemon_Network *currentSystem;
@property (retain) NSObject<OS_dispatch_queue> *pairingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)capabilities;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startScanning;
- (void)stopScanning;
- (void)startPairing;
- (void)_beginHandshakeWithCentral:(id)a0;
- (void)_startPairing;
- (void)_stopPairing;
- (void)beginHandshakeWithCentral:(id)a0;
- (void)centralDidSubscribe:(id)a0;
- (void)centralDidUnsubscribe:(id)a0;
- (BOOL)isRetryableError:(id)a0;
- (id)pairingErrorWithCode:(unsigned long long)a0;
- (id)pairingErrorWithCode:(unsigned long long)a0 userInfo:(id)a1;
- (void)receivedOptions:(id)a0;
- (void)serverDidStart:(BOOL)a0 error:(id)a1;
- (void)serverIsReady:(BOOL)a0;
- (BOOL)startAccessPoint:(id *)a0;
- (void)stopAccessPointAndJoinPreviousNetwork:(BOOL)a0;
- (void)stopPairing;
- (void)systemScannerAddedSystem:(id)a0;
- (void)systemScannerRemovedSystem:(id)a0;
- (void)systemScannerSystemChanged:(id)a0 onSystem:(id)a1;

@end
