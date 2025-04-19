@class NSNumber, MOBoolSettingMetadata;

@interface MONewsSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyNewsMetadata;

@property (retain, nonatomic) NSNumber *denyNews;

+ (id)groupName;

@end
