@interface BKUIUtils : NSObject

+ (BOOL)isInClamshellMode;
+ (id)nameForMessage:(unsigned int)a0;
+ (id)identitiesForUID:(unsigned int)a0;
+ (void)resetScreenDimming;
+ (void)vibrateForBiometricEvent:(BOOL)a0;
+ (void)vibrateWithIntensity:(float)a0 withPattern:(id)a1;

@end
