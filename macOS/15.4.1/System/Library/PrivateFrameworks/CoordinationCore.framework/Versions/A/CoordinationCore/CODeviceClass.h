@interface CODeviceClass : NSObject

+ (int)deviceClass;
+ (BOOL)isAppleTV;
+ (BOOL)isAudioAccessory;
+ (BOOL)isPhone;
+ (BOOL)isPad;

@end
