@class IOBluetoothDevicePairViewControllerExpansion, NSString, IOBluetoothPasskeyDisplay, IOBluetoothDevicePair, IOBluetoothDevice;
@protocol IOBluetoothDevicePairDelegate;

@interface IOBluetoothDevicePairViewController : NSViewController {
    BOOL _useCustomPINCode;
    IOBluetoothDevicePairViewControllerExpansion *_expansion;
}

@property (retain) IOBluetoothDevicePair *devicePair;
@property (retain) IOBluetoothPasskeyDisplay *passkeyDisplay;
@property NSString *PINCode;
@property (retain) IOBluetoothDevice *device;
@property (weak) id<IOBluetoothDevicePairDelegate> delegate;

- (void).cxx_destruct;
- (void)stop;
- (void)loadView;
- (int)pairWithDevice:(id)a0;
- (void)devicePairingConnecting:(id)a0;
- (void)devicePairingFinished:(id)a0 error:(int)a1;
- (void)devicePairingKeypressNotification:(id)a0 type:(unsigned char)a1;
- (void)devicePairingPINCodeRequest:(id)a0;
- (void)devicePairingStarted:(id)a0;
- (void)devicePairingUserConfirmationRequest:(id)a0 numericValue:(unsigned int)a1;
- (void)devicePairingUserPasskeyNotification:(id)a0 passkey:(unsigned int)a1;
- (void)deviceSimplePairingComplete:(id)a0 status:(unsigned char)a1;
- (int)pairWithDevice:(id)a0 usingPincode:(id)a1;

@end
