@class NSNumber, MOBoolSettingMetadata;

@interface MOFaceTimeSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyFaceTimeMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySharePlayMetadata;

@property (retain, nonatomic) NSNumber *denyFaceTime;
@property (retain, nonatomic) NSNumber *denySharePlay;

+ (id)groupName;

@end
