@interface GKBluetoothSupport : NSObject

+ (void)cleanup;
+ (int)bluetoothStatus;
+ (int)_directBTStatus;
+ (void)turnBluetoothOn;
+ (int)_determineBluetoothStatus;

@end
