@class NSDictionary;

@interface BFConversionUtils : NSObject

@property (retain, nonatomic) NSDictionary *voiceDefaults;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (id)defaultPitchModulationForVoice:(id)a0;
- (float)_assymetricLinearlyScaledValueForNumber:(float)a0 sourceMin:(float)a1 sourceMiddle:(float)a2 sourceMax:(float)a3 destinationMin:(float)a4 destinationMiddle:(float)a5 destinationMax:(float)a6;
- (id)_defaultsForVoiceId:(id)a0;
- (id)_keyForVoiceDataRecord:(id)a0;
- (void)_rebuildVoiceDefaultsFromPrefs;
- (float)convertAbsolutePitch:(id)a0 forVoice:(id)a1;
- (float)convertPitchModulation:(id)a0 forVoice:(id)a1;
- (float)convertWPMRate:(id)a0 forVoice:(id)a1;
- (id)defaultPitchForVoice:(id)a0;
- (id)defaultRateForVoice:(id)a0;
- (id)defaultVolumeForVoice:(id)a0;

@end
