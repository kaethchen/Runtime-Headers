@interface VTUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isAlwaysOn;
+ (BOOL)supportRemoteDarwinVoiceTrigger;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (id)deviceProductType;
+ (id)deviceProductVersion;
+ (unsigned long long)horsemanDeviceType;
+ (BOOL)isExclaveHardware;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (BOOL)supportPremiumAssets;
+ (double)systemUpTime;
+ (void)forceReload;
+ (BOOL)VTIsHorseman;
+ (BOOL)isNonUI;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (id)deviceSoftwareVersion;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (BOOL)isIOS;
+ (BOOL)isNano;
+ (BOOL)isTorpedo;
+ (BOOL)supportBargeIn;
+ (BOOL)supportExternalPhraseSpotter;
+ (BOOL)supportTTS;

@end
