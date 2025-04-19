@interface CSMacHostStudioDisplaySelfTriggerEnabledPolicy : CSPolicy

- (id)init;
- (void)_addSelfTriggerEnabledConditions;
- (void)_subscribeEventMonitors;

@end
