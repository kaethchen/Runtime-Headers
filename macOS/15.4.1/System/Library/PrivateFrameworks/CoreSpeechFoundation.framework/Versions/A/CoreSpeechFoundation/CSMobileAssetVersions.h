@interface CSMobileAssetVersions : NSObject

+ (id)getVoiceTriggerAssetTypeString;
+ (unsigned long long)getVoiceTriggerCurrentCompatibilityVersion;
+ (id)getVoiceTriggerAssetTypeStringWithSupportMphAssets:(BOOL)a0 deviceIsIPad:(BOOL)a1 deviceIsWatch:(BOOL)a2 deviceIsHorseman:(BOOL)a3 deviceIsOSX:(BOOL)a4 deviceIsASMac:(BOOL)a5 deviceIsTV:(BOOL)a6 deviceIsIOS:(BOOL)a7;
+ (unsigned long long)getVoiceTriggerCurrentCompatibilityVersionWithSupportMphAssets:(BOOL)a0 deviceIsIPad:(BOOL)a1 deviceIsWatch:(BOOL)a2 deviceIsHorseman:(BOOL)a3 deviceIsOSX:(BOOL)a4 deviceIsASMac:(BOOL)a5 deviceIsTV:(BOOL)a6 deviceIsIOS:(BOOL)a7;

@end
