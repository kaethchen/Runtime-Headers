@class SCDAAssistantPreferences, AFSettingsConnection, AFInstanceContext, SCDAInstrumentation, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SCDAGoodnessScoreEvaluator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _scoreEvaluationLock;
    unsigned char _myriadPlatformBias;
    unsigned char _mediaPlaybackBoost;
    unsigned char _alarmTimerBoost;
    BOOL _isRecentSiriBoostTrialEnabled;
    BOOL _isDeviceAdjustTrialEnabled;
    BOOL _isExponentialBoostDefined;
    double _recentSiriSecondDegreeCoefficient;
    double _recentSiriFirstDegreeCoefficient;
    double _recentSiriIntercept;
    long long _deviceAdjust;
    AFInstanceContext *_deviceInstanceContext;
    unsigned long long _platformBiasAcquisitionState;
    SCDAAssistantPreferences *_pref;
    AFSettingsConnection *_settingsConnection;
    SCDAInstrumentation *_myriadInstrumentation;
    BOOL _isSpeakerEndpoint;
    NSString *_endpointModelName;
}

@property (readonly, nonatomic) BOOL evaluateForAudioAccessory;
@property (nonatomic) double lastActivationTime;
@property (readonly, nonatomic) BOOL deviceAdjustTrialEnabled;
@property (readonly, nonatomic) long long deviceAdjustTrialValue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)preheat;
- (unsigned char)getPlatformBias;
- (unsigned char)_bumpGoodnessScore:(id)a0 lastActivationTime:(double)a1 mediaPlaybackInterruptedTime:(double)a2 ignoreAdjustedBoost:(BOOL)a3 recentlyWonBySmallAmount:(BOOL)a4;
- (id)_createSettingsConnectionIfRequired;
- (void)_fetchDevicePlatformBiasIfRequired;
- (unsigned long long)_findSidekickBoost:(id)a0 isSpeaker:(BOOL)a1 model:(id)a2;
- (unsigned char)_getRecentBump:(double)a0 ignoreAdjustedBoost:(BOOL)a1 recentlyWonBySmallAmount:(BOOL)a2;
- (id)_readSidekickBoostsFile:(id)a0;
- (void)_reloadTrialConfiguredBoostValues;
- (void)_setSidekickPlatformBiasForSpeaker:(BOOL)a0 model:(id)a1;
- (void)_updateMediaPlaybackBoost:(unsigned char)a0;
- (void)_updatePlatformBias:(unsigned char)a0;
- (void)_updateRecentSiriBoostTrialEnabled:(BOOL)a0;
- (void)_updateRecentSiriExponentialBoostDefined:(BOOL)a0 withSecondDegree:(double)a1 andFirstDegree:(double)a2 andIntercept:(double)a3;
- (void)_updateSidekickBoosts:(id)a0;
- (unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)a0;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1 queue:(id)a2;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1 queue:(id)a2 instrumentation:(id)a3;
- (id)initWithDeviceInstanceContext:(id)a0 queue:(id)a1;
- (void)myriadTrialBoostsUpdated:(id)a0;
- (void)_updateDeviceAdjust:(long long)a0;
- (void)_updateDeviceAdjustTrialEnabled:(BOOL)a0;

@end
