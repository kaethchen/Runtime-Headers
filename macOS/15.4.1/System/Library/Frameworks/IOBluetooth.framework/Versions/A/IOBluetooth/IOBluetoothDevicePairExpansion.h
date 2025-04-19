@class CBCentralManager, NSXPCConnection, IOBluetoothL2CAPChannel, IOBluetoothHostController;

@interface IOBluetoothDevicePairExpansion : NSObject

@property unsigned short pageTimeout;
@property (retain) IOBluetoothHostController *hostController;
@property BOOL supportsAuthentication;
@property BOOL isNonSSPKeypressNotificationCapable;
@property (retain) IOBluetoothL2CAPChannel *channel;
@property BOOL Q6BDAddrRange;
@property BOOL isWiiRemote;
@property BOOL isNeuroSwitch;
@property BOOL isWiiUProController;
@property BOOL isPolyVision;
@property (retain) NSXPCConnection *xpcConnection;
@property (retain) CBCentralManager *central;
@property BOOL isStarted;

- (void).cxx_destruct;

@end
