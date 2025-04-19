@class NSArray;

@interface UNMutableNotificationSystemSettings : UNNotificationSystemSettings

@property long long showPreviewsSetting;
@property long long announcementSetting;
@property long long announcementHeadphonesSetting;
@property long long announcementCarPlaySetting;
@property long long scheduledDeliverySetting;
@property (copy) NSArray *scheduledDeliveryTimes;
@property long long scheduledDeliveryShowNextSummarySetting;
@property long long notificationListDisplayStyleSetting;
@property long long remoteNotificationsSetting;
@property long long summarizationSetting;
@property long long prioritizationSetting;
@property long long spokenNotificationSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAnnouncementSetting:(long long)a0;
- (void)setRemoteNotificationsSetting:(long long)a0;
- (void)setScheduledDeliverySetting:(long long)a0;
- (void)setShowPreviewsSetting:(long long)a0;
- (void)setSummarizationSetting:(long long)a0;
- (void)setSpokenNotificationSetting:(long long)a0;
- (void)setScheduledDeliveryTimes:(id)a0;
- (void)setAnnouncementCarPlaySetting:(long long)a0;
- (void)setAnnouncementHeadphonesSetting:(long long)a0;
- (void)setNotificationListDisplayStyleSetting:(long long)a0;
- (void)setScheduledDeliveryShowNextSummarySetting:(long long)a0;

@end
