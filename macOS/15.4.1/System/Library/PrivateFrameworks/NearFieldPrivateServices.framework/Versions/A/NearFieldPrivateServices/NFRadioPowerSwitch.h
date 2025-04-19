@interface NFRadioPowerSwitch : NFPrivateService

- (id)serviceName;
- (BOOL)canRun;
- (void)requestUserSettingsNotificationWithCompletion:(id /* block */)a0 popupInterval:(double)a1;

@end
