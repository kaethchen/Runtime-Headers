@class AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface SCDAAssistantPreferences : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForInternalPrefs;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForLanguageCode;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForOutputVoice;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForNanoPrefs;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForAssistantEnablement;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForDictationEnablement;
    NSObject<OS_dispatch_queue> *_navTokenQueue;
    BOOL _navTokenIsValid;
    int _navToken;
    AFInstanceContext *_instanceContext;
}

+ (id)sharedPreferences;
+ (id)sharedPreferencesWithInstanceContext:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInstanceContext:(id)a0;
- (BOOL)myriadShouldIgnoreAdjustedBoost;
- (void)_preferencesDidChangeExternally;
- (BOOL)disableMyriadBLEActivity;
- (BOOL)ignoreMyriadPlatformBias;
- (int)myriadConstantGoodness;
- (BOOL)myriadCoordinationEnabled;
- (BOOL)myriadCoordinationEnabledForAccessoryLogging;
- (float)myriadDeviceAdjust;
- (unsigned char)myriadDeviceClass;
- (double)myriadDeviceDelay;
- (id)myriadDeviceGroup;
- (double)myriadDeviceSlowdown;
- (double)myriadDeviceTrumpDelay;
- (double)myriadDeviceVTEndTimeDistanceThreshold;
- (BOOL)myriadDuckingEnabled;
- (id)myriadLastWin;
- (double)myriadMaxNoOperationDelay;
- (id)myriadMonitorTimeOutInterval;
- (BOOL)myriadServerHasProvisioned;
- (BOOL)myriadServerProvisioning;
- (double)myriadTestDeviceDelay;
- (void)setIgnoreMyriadAdjustedBoost:(BOOL)a0;
- (void)setIgnoreMyriadPlatformBias:(BOOL)a0;
- (void)setMyriadConstantGoodness:(int)a0;
- (void)setMyriadCoordinationEnabled:(BOOL)a0;
- (void)setMyriadDeviceAdjust:(float)a0;
- (void)setMyriadDeviceClass:(unsigned char)a0;
- (void)setMyriadDeviceDelay:(double)a0;
- (void)setMyriadDeviceGroup:(id)a0;
- (void)setMyriadDeviceSlowdown:(double)a0;
- (void)setMyriadDeviceTrumpDelay:(double)a0;
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)a0;
- (void)setMyriadDuckingEnabled:(BOOL)a0;
- (void)setMyriadLastWin;
- (void)setMyriadMaxNoOperationDelay:(double)a0;
- (void)setMyriadServerHasProvisioned:(BOOL)a0;
- (void)setMyriadServerProvisioning:(BOOL)a0;
- (void)setMyriadTestDeviceDelay:(double)a0;

@end
