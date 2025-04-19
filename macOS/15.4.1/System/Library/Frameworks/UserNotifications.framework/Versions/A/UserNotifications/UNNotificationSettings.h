@interface UNNotificationSettings : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long groupingSetting;
@property (readonly) long long remoteNotificationsSetting;
@property (readonly) long long summarizationSetting;
@property (readonly) long long prioritizationSetting;
@property (readonly) long long authorizationStatus;
@property (readonly) long long soundSetting;
@property (readonly) long long badgeSetting;
@property (readonly) long long alertSetting;
@property (readonly) long long notificationCenterSetting;
@property (readonly) long long lockScreenSetting;
@property (readonly) long long carPlaySetting;
@property (readonly) long long alertStyle;
@property (readonly) long long showPreviewsSetting;
@property (readonly) long long criticalAlertSetting;
@property (readonly) BOOL providesAppNotificationSettings;
@property (readonly) long long announcementSetting;
@property (readonly) long long timeSensitiveSetting;
@property (readonly) long long scheduledDeliverySetting;
@property (readonly) long long directMessagesSetting;

+ (id)emptySettings;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 alertStyle:(long long)a9 showPreviewsSetting:(long long)a10 groupingSetting:(long long)a11 providesAppNotificationSettings:(BOOL)a12;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 timeSensitiveSetting:(long long)a9 alertStyle:(long long)a10 showPreviewsSetting:(long long)a11 groupingSetting:(long long)a12 providesAppNotificationSettings:(BOOL)a13;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 timeSensitiveSetting:(long long)a9 scheduledDeliverySetting:(long long)a10 alertStyle:(long long)a11 showPreviewsSetting:(long long)a12 groupingSetting:(long long)a13 providesAppNotificationSettings:(BOOL)a14;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 timeSensitiveSetting:(long long)a9 scheduledDeliverySetting:(long long)a10 directMessagesSetting:(long long)a11 alertStyle:(long long)a12 showPreviewsSetting:(long long)a13 groupingSetting:(long long)a14 providesAppNotificationSettings:(BOOL)a15;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 remoteNotificationsSetting:(long long)a7 announcementSetting:(long long)a8 criticalAlertSetting:(long long)a9 timeSensitiveSetting:(long long)a10 scheduledDeliverySetting:(long long)a11 directMessagesSetting:(long long)a12 alertStyle:(long long)a13 showPreviewsSetting:(long long)a14 groupingSetting:(long long)a15 providesAppNotificationSettings:(BOOL)a16;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 remoteNotificationsSetting:(long long)a7 announcementSetting:(long long)a8 criticalAlertSetting:(long long)a9 timeSensitiveSetting:(long long)a10 scheduledDeliverySetting:(long long)a11 directMessagesSetting:(long long)a12 summarizationSetting:(long long)a13 alertStyle:(long long)a14 showPreviewsSetting:(long long)a15 groupingSetting:(long long)a16 providesAppNotificationSettings:(BOOL)a17;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 remoteNotificationsSetting:(long long)a7 announcementSetting:(long long)a8 criticalAlertSetting:(long long)a9 timeSensitiveSetting:(long long)a10 scheduledDeliverySetting:(long long)a11 directMessagesSetting:(long long)a12 summarizationSetting:(long long)a13 prioritizationSetting:(long long)a14 alertStyle:(long long)a15 showPreviewsSetting:(long long)a16 groupingSetting:(long long)a17 providesAppNotificationSettings:(BOOL)a18;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 spokenSetting:(long long)a7 criticalAlertSetting:(long long)a8 alertStyle:(long long)a9 showPreviewsSetting:(long long)a10 providesAppNotificationSettings:(BOOL)a11;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasEnabledAlertSettings;
- (BOOL)hasEnabledSettings;
- (id)initWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 remoteNotificationsSetting:(long long)a7 announcementSetting:(long long)a8 criticalAlertSetting:(long long)a9 timeSensitiveSetting:(long long)a10 scheduledDeliverySetting:(long long)a11 directMessagesSetting:(long long)a12 summarizationSetting:(long long)a13 prioritizationSetting:(long long)a14 alertStyle:(long long)a15 showPreviewsSetting:(long long)a16 groupingSetting:(long long)a17 providesAppNotificationSettings:(BOOL)a18;
- (BOOL)isEligibleForIndexing;

@end
