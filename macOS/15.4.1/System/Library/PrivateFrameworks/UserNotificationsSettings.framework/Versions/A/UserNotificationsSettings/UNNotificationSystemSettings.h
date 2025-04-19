@class NSArray;

@interface UNNotificationSystemSettings : NSObject <NSCopying, NSSecureCoding, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long modifiedSettings;
@property (readonly) long long showPreviewsSetting;
@property (readonly) long long announcementSetting;
@property (readonly) long long announcementHeadphonesSetting;
@property (readonly) long long announcementCarPlaySetting;
@property (readonly) long long scheduledDeliverySetting;
@property (readonly, copy) NSArray *scheduledDeliveryTimes;
@property (readonly) long long scheduledDeliveryShowNextSummarySetting;
@property (readonly) long long notificationListDisplayStyleSetting;
@property (readonly) long long remoteNotificationsSetting;
@property (readonly) long long summarizationSetting;
@property (readonly) long long prioritizationSetting;
@property (readonly) long long spokenNotificationSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_stringForNotificationListDisplayStyleSetting:(long long)a0;
- (id)_stringForScheduledDeliveryTimes:(id)a0;
- (id)_stringforAnnouncementCarPlaySetting:(long long)a0;
- (id)initWithShowPreviewsSetting:(long long)a0 announcementSetting:(long long)a1 announcementHeadphonesSetting:(long long)a2 announcementCarPlaySetting:(long long)a3 scheduledDeliverySetting:(long long)a4 scheduledDeliveryTimes:(id)a5 scheduledDeliveryShowNextSummarySetting:(long long)a6 notificationListDisplayStyleSetting:(long long)a7;
- (id)initWithShowPreviewsSetting:(long long)a0 announcementSetting:(long long)a1 announcementHeadphonesSetting:(long long)a2 announcementCarPlaySetting:(long long)a3 scheduledDeliverySetting:(long long)a4 scheduledDeliveryTimes:(id)a5 scheduledDeliveryShowNextSummarySetting:(long long)a6 notificationListDisplayStyleSetting:(long long)a7 remoteNotificationsSetting:(long long)a8 summarizationSetting:(long long)a9 prioritizationSetting:(long long)a10 modifiedSettings:(unsigned long long)a11;
- (id)initWithShowPreviewsSetting:(long long)a0 announcementSetting:(long long)a1 announcementHeadphonesSetting:(long long)a2 announcementCarPlaySetting:(long long)a3 scheduledDeliverySetting:(long long)a4 scheduledDeliveryTimes:(id)a5 scheduledDeliveryShowNextSummarySetting:(long long)a6 notificationListDisplayStyleSetting:(long long)a7 summarizationSetting:(long long)a8 prioritizationSetting:(long long)a9;
- (id)initWithShowPreviewsSetting:(long long)a0 announcementSetting:(long long)a1 announcementHeadphonesSetting:(long long)a2 announcementCarPlaySetting:(long long)a3 scheduledDeliverySetting:(long long)a4 scheduledDeliveryTimes:(id)a5 scheduledDeliveryShowNextSummarySetting:(long long)a6 notificationListDisplayStyleSetting:(long long)a7 summarizationSetting:(long long)a8 prioritizationSetting:(long long)a9 modifiedSettings:(unsigned long long)a10;

@end
