@class NSNumber, MOBoolSettingMetadata;

@interface MOMessagesSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyiMessageMetadata;

@property (retain, nonatomic) NSNumber *denyiMessage;

+ (id)groupName;

@end
