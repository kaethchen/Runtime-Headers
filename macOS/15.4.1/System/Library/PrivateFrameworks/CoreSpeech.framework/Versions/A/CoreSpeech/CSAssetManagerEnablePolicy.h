@interface CSAssetManagerEnablePolicy : CSPolicy

- (id)init;
- (BOOL)_shouldCheckNetworkAvailability;
- (void)_addAssetManagerEnabledConditions;
- (void)_subscribeEventMonitors;

@end
