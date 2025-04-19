@class NSNumber, MOBoolSettingMetadata;

@interface MOAirDropSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyAirDropMetadata;

@property (retain, nonatomic) NSNumber *denyAirDrop;

+ (id)groupName;

@end
