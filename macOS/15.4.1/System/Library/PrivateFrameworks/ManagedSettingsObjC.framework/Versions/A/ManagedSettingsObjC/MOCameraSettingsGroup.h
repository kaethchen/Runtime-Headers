@class NSNumber, MOBoolSettingMetadata;

@interface MOCameraSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyCameraMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyScreenRecordingMetadata;

@property (retain, nonatomic) NSNumber *denyCamera;
@property (retain, nonatomic) NSNumber *denyScreenRecording;

+ (id)groupName;

@end
