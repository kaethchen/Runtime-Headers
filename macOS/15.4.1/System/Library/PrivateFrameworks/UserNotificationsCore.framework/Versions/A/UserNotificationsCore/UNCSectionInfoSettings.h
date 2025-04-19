@class NSDictionary, UNCMuteAssertion, NSDate;

@interface UNCSectionInfoSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL showsInLockScreen;
@property (nonatomic) BOOL showsInNotificationCenter;
@property (nonatomic) BOOL showsMessagePreview;
@property (nonatomic) long long spokenNotificationSetting;
@property (readonly, copy, nonatomic) NSDictionary *stateCapture;
@property (nonatomic) long long authorizationStatus;
@property (retain, nonatomic) NSDate *authorizationExpirationDate;
@property (nonatomic) BOOL allowsNotifications;
@property (retain, nonatomic) NSDate *lastUserGrantedAuthorizationDate;
@property (readonly, nonatomic) BOOL isAuthorizedTemporarily;
@property (retain, nonatomic) UNCMuteAssertion *muteAssertion;
@property (nonatomic) long long notificationCenterSetting;
@property (nonatomic) long long lockScreenSetting;
@property (nonatomic) BOOL showsOnExternalDevices;
@property (nonatomic) BOOL showsCustomSettingsLink;
@property (nonatomic) long long contentPreviewSetting;
@property (nonatomic) unsigned long long alertType;
@property (nonatomic) unsigned long long pushSettings;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic) long long remoteNotificationsSetting;
@property (nonatomic) long long criticalAlertSetting;
@property (nonatomic) long long timeSensitiveSetting;
@property (nonatomic, getter=hasUserConfiguredTimeSensitiveSetting) BOOL userConfiguredTimeSensitiveSetting;
@property (nonatomic) long long scheduledDeliverySetting;
@property (nonatomic) long long directMessagesSetting;
@property (nonatomic, getter=hasUserConfiguredDirectMessagesSetting) BOOL userConfiguredDirectMessagesSetting;
@property (nonatomic) long long bulletinGroupingSetting;
@property (nonatomic) long long announceSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_authorizationStatusDescription;
- (id)initWithDefaultsForSectionType:(long long)a0;
- (void)muteThreadIdentifier:(id)a0 untilDate:(id)a1;
- (id)_alertTypeDescription;
- (id)_announceSettingDescription;
- (id)_bulletinGroupingSettingDescription;
- (id)_contentPreviewSettingDescription;
- (BOOL)isBulletinMutedForThreadIdentifier:(id)a0;
- (void)muteSectionUntilDate:(id)a0;
- (void)unmuteSection;
- (void)unmuteThreadIdentifier:(id)a0;

@end
