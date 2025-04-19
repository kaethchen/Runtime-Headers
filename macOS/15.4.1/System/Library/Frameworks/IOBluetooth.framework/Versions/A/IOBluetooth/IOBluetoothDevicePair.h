@class NSString, IOBluetoothDevice;

@interface IOBluetoothDevicePair : NSObject <IOBluetoothCoreBluetoothCoordinatorDelegate, CBCentralManagerDelegate> {
    BOOL _busy;
    BOOL _isHandlerSetup;
    BOOL _triedSpecNULLPIN;
    BOOL _SDPQueryComplete;
    int _connectionCompleteStatus;
    unsigned int _totalAttempts;
    id _expansion;
}

@property long long currentPairingType;
@property BOOL userDefinedPincode;
@property (retain) IOBluetoothDevice *device;
@property unsigned short connectionPageTimeout;
@property (weak) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pairWithDevice:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (int)start;
- (void)stop;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)connectionComplete:(id)a0 status:(int)a1;
- (void)pinCodeRequest:(struct BluetoothDeviceAddress { unsigned char x0[6]; } *)a0;
- (void)BluetoothHCIAuthenticationComplete:(id)a0 inStatus:(int)a1 inAuthenticationResults:(struct BluetoothHCIEventAuthenticationCompleteResults { unsigned short x0; } *)a2;
- (void)BluetoothHCIEventNotificationMessage:(id)a0 inNotificationMessage:(const struct IOBluetoothHCIEventNotificationMessage { struct BluetoothHCIUserClientNotificationDataInfo { unsigned long long x0; unsigned long long x1; struct BluetoothHCIRequestCallbackInfo { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; } x0; void *x1; } *)a1;
- (void)linkKeyRequest:(BOOL)a0;
- (void)peerPairingCompleted:(id)a0 withError:(id)a1;
- (void)_peerDidRequestPairing:(id)a0 type:(long long)a1 passkey:(id)a2;
- (void)_peerDiscovered:(id)a0 withResults:(id)a1;
- (void)connectionCompleteContinue:(id)a0;
- (void)connectionCompleteContinue:(id)a0 status:(int)a1;
- (int)handlePinCodeRequestForDevice:(id)a0 withAddress:(id)a1;
- (void)l2capChannelClosed:(id)a0;
- (void)l2capChannelData:(id)a0 data:(void *)a1 length:(unsigned long long)a2;
- (void)newBluetoothHIDDevice:(id)a0;
- (int)openPairingConnection;
- (void)pairingAgent:(id)a0 peerDidCompletePairing:(id)a1;
- (void)pairingAgent:(id)a0 peerDidFailToCompletePairing:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidRequestPairing:(id)a1 type:(long long)a2 passkey:(id)a3;
- (void)peerConnected:(id)a0 error:(long long)a1;
- (void)peerDidRequestPairing:(id)a0 type:(long long)a1 passkey:(id)a2;
- (void)peerDisconnected:(id)a0 withError:(long long)a1;
- (void)peerDiscovered:(id)a0 withResults:(id)a1;
- (int)removePINCodeHandler:(id)a0;
- (void)replyPINCode:(unsigned long long)a0 PINCode:(struct BluetoothPINCode { unsigned char x0[16]; } *)a1;
- (void)replyPINCodeWithNumber:(id)a0;
- (void)replyUserConfirmation:(BOOL)a0;
- (void)sdpQueryComplete:(id)a0 status:(int)a1;
- (void)setAppleDeviceName:(id)a0;
- (void)simplePairingComplete:(struct BluetoothDeviceAddress { unsigned char x0[6]; } *)a0 status:(unsigned char)a1;
- (void)userConfirmationRequest:(struct BluetoothDeviceAddress { unsigned char x0[6]; } *)a0 numericValue:(unsigned int)a1;
- (void)userPasskeyNotification:(struct BluetoothDeviceAddress { unsigned char x0[6]; } *)a0 passkey:(unsigned int)a1;

@end
