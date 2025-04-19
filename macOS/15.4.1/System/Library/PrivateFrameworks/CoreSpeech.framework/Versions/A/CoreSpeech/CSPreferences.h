@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (BOOL)isFlexibleFollowupsUserDisabled;
- (BOOL)isGazeMandatory;
- (float)adaptiveSiriVolumePermanentOffset;
- (int)adaptiveSiriVolumeRecentIntent;
- (id)dateWhenVoiceTriggerRePrompted;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (BOOL)fileLoggingIsEnabled;
- (float)getAttendingTimeoutConfig;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (BOOL)isAttentiveSiriEnabled;
- (BOOL)isFlexibleFollowupsSupported;
- (BOOL)isGazeSignalEnabled;
- (BOOL)isGazeSimlModelEnabled;
- (BOOL)isPHSSupported;
- (void)setAudioInjectionFilePath:(id)a0;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (id)trialBaseAssetDirectory;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)useSiriActivationSPIForHomePod;
- (id)voiceTriggerAudioLogDirectory;
- (BOOL)voiceTriggerEnabled;

@end
