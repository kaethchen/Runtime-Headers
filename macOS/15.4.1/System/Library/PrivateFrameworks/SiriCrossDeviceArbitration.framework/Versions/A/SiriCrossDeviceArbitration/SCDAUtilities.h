@interface SCDAUtilities : NSObject

+ (BOOL)isMac;
+ (BOOL)isPhone;
+ (BOOL)isDeviceUnlocked;
+ (BOOL)faceDetectionEnabled;
+ (BOOL)isIOS;
+ (BOOL)isNano;
+ (BOOL)isHorseman;
+ (BOOL)_hasPearlCameraCapability;
+ (BOOL)accessibilitySupportsAttentionAwareFeatures;
+ (BOOL)deviceCanMakeEmergencyCall;
+ (BOOL)isATV;
+ (BOOL)isCommunal;
+ (BOOL)isReality;

@end
