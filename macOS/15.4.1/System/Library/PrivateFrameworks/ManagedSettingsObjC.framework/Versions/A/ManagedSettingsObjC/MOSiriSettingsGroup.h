@class NSNumber, MOBoolSettingMetadata;

@interface MOSiriSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyFeature1Metadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySiriMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySiriUserGeneratedContentMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *forceSiriProfanityFilterMetadata;

@property (retain, nonatomic) NSNumber *denyFeature1;
@property (retain, nonatomic) NSNumber *denySiri;
@property (retain, nonatomic) NSNumber *denySiriUserGeneratedContent;
@property (retain, nonatomic) NSNumber *forceSiriProfanityFilter;

+ (id)groupName;

@end
