@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isLowPowerModeEnabled;
+ (id)deviceUUID;
+ (BOOL)isInternalBuild;
+ (BOOL)isiPad;
+ (id)internalDeviceCode;
+ (BOOL)isAudioAccessory;
+ (BOOL)isBetaBuild;
+ (BOOL)isDNUEnabled;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isFaceTimeSupported;
+ (BOOL)isLowEndHardware;
+ (BOOL)shouldIncludePredictionLogs;

- (void)dealloc;
- (id)init;

@end
