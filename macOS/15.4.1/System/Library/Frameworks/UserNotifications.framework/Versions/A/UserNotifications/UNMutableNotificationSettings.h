@interface UNMutableNotificationSettings : UNNotificationSettings

@property long long authorizationStatus;
@property long long soundSetting;
@property long long badgeSetting;
@property long long alertSetting;
@property long long notificationCenterSetting;
@property long long lockScreenSetting;
@property long long carPlaySetting;
@property long long alertStyle;
@property long long showPreviewsSetting;
@property long long criticalAlertSetting;
@property BOOL providesAppNotificationSettings;
@property long long announcementSetting;
@property long long groupingSetting;
@property long long remoteNotificationsSetting;
@property long long timeSensitiveSetting;
@property long long scheduledDeliverySetting;
@property long long directMessagesSetting;
@property long long summarizationSetting;
@property long long prioritizationSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAlertStyle:(long long)a0;
- (void)setAlertSetting:(long long)a0;
- (void)setAnnouncementSetting:(long long)a0;
- (void)setAuthorizationStatus:(long long)a0;
- (void)setBadgeSetting:(long long)a0;
- (void)setCarPlaySetting:(long long)a0;
- (void)setCriticalAlertSetting:(long long)a0;
- (void)setDirectMessagesSetting:(long long)a0;
- (void)setGroupingSetting:(long long)a0;
- (void)setLockScreenSetting:(long long)a0;
- (void)setNotificationCenterSetting:(long long)a0;
- (void)setPrioritizationSetting:(long long)a0;
- (void)setProvidesAppNotificationSettings:(BOOL)a0;
- (void)setRemoteNotificationsSetting:(long long)a0;
- (void)setScheduledDeliverySetting:(long long)a0;
- (void)setShowPreviewsSetting:(long long)a0;
- (void)setSoundSetting:(long long)a0;
- (void)setSummarizationSetting:(long long)a0;
- (void)setTimeSensitiveSetting:(long long)a0;

@end
