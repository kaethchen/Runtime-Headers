@class NSNumber, MOBoolSettingMetadata;

@interface MOIntelligenceSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyExternalIntelligenceIntegrationsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyGenmojiMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyImagePlaygroundMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyImageWandMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyWritingToolsMetadata;

@property (retain, nonatomic) NSNumber *denyExternalIntelligenceIntegrations;
@property (retain, nonatomic) NSNumber *denyGenmoji;
@property (retain, nonatomic) NSNumber *denyImagePlayground;
@property (retain, nonatomic) NSNumber *denyImageWand;
@property (retain, nonatomic) NSNumber *denyWritingTools;

+ (id)groupName;

@end
