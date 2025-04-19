@interface CSListeningEnabledPolicyWatch : CSPolicy

- (id)init;
- (void)_addListeningEnabledConditions;
- (void)_subscribeEventMonitors;

@end
