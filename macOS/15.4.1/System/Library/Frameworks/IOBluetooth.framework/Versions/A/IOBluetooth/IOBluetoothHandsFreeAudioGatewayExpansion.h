@interface IOBluetoothHandsFreeAudioGatewayExpansion : NSObject

@property unsigned int vendorID;
@property unsigned int productID;
@property unsigned int version;
@property int batteryLevel;
@property BOOL dockState;
@property BOOL isSiriActive;

@end
