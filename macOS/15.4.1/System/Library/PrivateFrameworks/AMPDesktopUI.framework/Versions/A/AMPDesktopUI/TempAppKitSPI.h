@interface TempAppKitSPI : NSObject

+ (id)_imageByApplyingTintColor:(id)a0 for:(id)a1;
+ (id)avOutputContextPrivateSPIOutputDeviceDidChangeNotification;
+ (id)avOutputContextPrivateSPIOutputDevicesDidChangeNotification;
+ (void)setBackgroundStyle:(long long)a0 recursivelyOn:(id)a1;
+ (void)setCanHostLayersInWindowServer:(BOOL)a0 for:(id)a1;
+ (void)setTitlebarAlphaValue:(double)a0 for:(id)a1;
+ (void)setupAirPlayButtonStyleFor:(id)a0 toMatch:(id)a1;
+ (void)showAVRoutePicker:(id)a0 on:(id)a1;

@end
