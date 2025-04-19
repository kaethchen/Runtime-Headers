@interface CSSiriBluetoothManager : NSObject

+ (id)sharedInstance;

- (id)_init;
- (id)deviceWithAddress:(id)a0;
- (id)deviceWithUID:(id)a0;
- (void)prewarmDeviceWithIdentifier:(id)a0;

@end
