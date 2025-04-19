@class IOBluetoothHostController, NSDate;
@protocol IOBluetoothHandsFreeDelegate;

@interface IOBluetoothHandsFreeExpansion : NSObject

@property id<IOBluetoothHandsFreeDelegate> delegate;
@property (retain) NSDate *lastUpdatedInputVolume;
@property (retain) NSDate *lastUpdatedOutputVolume;
@property (retain) IOBluetoothHostController *hostController;
@property BOOL disconnectAfterDisconnectingSCO;
@property BOOL xaplSent;
@property unsigned short SCOConnectionHandle;
@property unsigned char codecID;

- (void).cxx_destruct;

@end
