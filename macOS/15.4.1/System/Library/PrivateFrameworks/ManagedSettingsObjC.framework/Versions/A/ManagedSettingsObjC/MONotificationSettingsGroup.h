@class NSNumber, MOBoolSettingMetadata;

@interface MONotificationSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *lockDriverDoNotDisturbMetadata;

@property (retain, nonatomic) NSNumber *lockDriverDoNotDisturb;

+ (id)groupName;

@end
