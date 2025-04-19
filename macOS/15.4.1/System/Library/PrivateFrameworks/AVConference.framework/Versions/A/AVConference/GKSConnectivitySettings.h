@interface GKSConnectivitySettings : NSObject

+ (void)setClientOptions:(id)a0;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (unsigned char)getAbTestingState;
+ (double)getAdaptiveLearningA;
+ (double)getAdaptiveLearningB;
+ (int)getAdaptiveLearningState;
+ (id)getAddressForService:(id)a0;
+ (double)getAdjustmentFactorA;
+ (double)getAdjustmentFactorB;
+ (double)getAdjustmentFactorC;
+ (id)getAllSettings;
+ (id)getClientOption:(id)a0;
+ (int)getDecryptionMKMRecoveryInterval;
+ (int)getDecryptionTimeoutInterval;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (int)getLongTermHistoryLength;
+ (double)getLongTermValueWeightA;
+ (double)getLongTermValueWeightB;
+ (double)getLongTermValueWeightC;
+ (int)getNATTypeFromCarrierBundle;
+ (int)getNewSessionJoiningInterval;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (int)getRateControllerType;
+ (double)getRemoteMediaStallTimeout;
+ (int)getShortTermHistoryLength;
+ (double)getShortTermValueWeightA;
+ (double)getShortTermValueWeightB;
+ (double)getShortTermValueWeightC;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (BOOL)isFeatureDisabledByExceptionKey:(id)a0;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 exceptionKey:(id)a1 userDefaultKey:(struct __CFString { } *)a2 featureFlagDomain:(char *)a3 featureFlagName:(char *)a4;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3 normalizedRandom:(double)a4;
+ (id)readStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (void)setServerAddresses:(id)a0;
+ (BOOL)supportiRATRecommendation;
+ (BOOL)supportsEVSCodec;
+ (BOOL)supportsHEVCEncoding;
+ (BOOL)supportsRedAudio;

- (void)dealloc;
- (id)init;

@end
