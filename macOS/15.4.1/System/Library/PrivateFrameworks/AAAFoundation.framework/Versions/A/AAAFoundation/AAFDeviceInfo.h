@interface AAFDeviceInfo : NSObject

+ (BOOL)deviceIsAudioAccessory;
+ (BOOL)isVirtualMachine;
+ (BOOL)isDeviceUnlockedSinceBoot;
+ (id)localSecretType;
+ (BOOL)deviceIsiPad;
+ (BOOL)_hasLocalSecret;

@end
