@class NSNumber, MOBoolSettingMetadata;

@interface MOPrivacySettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *forceLimitAdTrackingMetadata;

@property (retain, nonatomic) NSNumber *forceLimitAdTracking;

+ (id)groupName;

@end
