@interface CSVoiceTriggerAPModeSuspendPolicyMac : CSPolicy

- (id)init;
- (void)_addMacBargeInConditions;
- (void)_addVoiceTriggerAPModeSuspendConditions;
- (void)_subscribeEventMonitors;

@end
