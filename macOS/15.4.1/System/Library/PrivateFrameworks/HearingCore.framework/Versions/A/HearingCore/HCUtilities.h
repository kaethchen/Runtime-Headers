@interface HCUtilities : NSObject

+ (BOOL)isProtectedDataAvailable;
+ (BOOL)isInternalInstall;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)deviceIsPhone;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)deviceIsPad;
+ (id)bluetoothManagerQueue;
+ (BOOL)currentProcessIsAXUIServer;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)currentProcessIsHealth;
+ (BOOL)currentProcessIsInCallService;
+ (BOOL)currentProcessIsRTTExternsion;
+ (BOOL)currentProcessIsSpringBoard;
+ (BOOL)currentProcessIsSystemApp;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)deviceIsWatch;
+ (double)roundToPercentageValue:(double)a0;
+ (BOOL)supportsLEA2;
+ (long long)systemBootTime;

@end
