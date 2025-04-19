@class NSNumber, MOBoolSettingMetadata;

@interface MOCarPlaySettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyCarPlayMetadata;

@property (retain, nonatomic) NSNumber *denyCarPlay;

+ (id)groupName;

@end
