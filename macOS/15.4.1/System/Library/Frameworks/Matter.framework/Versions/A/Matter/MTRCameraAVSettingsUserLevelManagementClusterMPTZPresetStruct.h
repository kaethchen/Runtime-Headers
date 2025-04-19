@class NSNumber, NSString, MTRCameraAVSettingsUserLevelManagementClusterMPTZStruct;

@interface MTRCameraAVSettingsUserLevelManagementClusterMPTZPresetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *presetID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) MTRCameraAVSettingsUserLevelManagementClusterMPTZStruct *settings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
