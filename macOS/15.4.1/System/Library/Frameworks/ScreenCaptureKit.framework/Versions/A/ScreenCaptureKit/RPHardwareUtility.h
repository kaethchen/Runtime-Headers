@interface RPHardwareUtility : NSObject

+ (BOOL)isIPad;
+ (unsigned long long)chipId;
+ (BOOL)isAppleSiliconMac;
+ (BOOL)isCompositionAvailable;
+ (BOOL)isNativeScreenOrientationPortrait;
+ (BOOL)isVoiceOverRunning;
+ (struct CGSize { double x0; double x1; })limitRecordingWindowSizeFromSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)supportsShutterSound;

@end
