@interface CSVoiceTriggerHearstAPEnabledPolicy : CSPolicy

+ (id)sharedInstance;

- (id)init;
- (void)_addVoiceTriggerHearstAPEnabledPolicy;
- (BOOL)_isOtherStreamsActiveOnDoAPRoute;
- (void)_subscribeEventMonitors;

@end
