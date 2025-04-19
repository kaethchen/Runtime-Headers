@class NSNumber, MTRCameraAVStreamManagementClusterVideoResolutionStruct;

@interface MTRCameraAVStreamManagementClusterSnapshotParamsStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRCameraAVStreamManagementClusterVideoResolutionStruct *resolution;
@property (copy, nonatomic) NSNumber *maxFrameRate;
@property (copy, nonatomic) NSNumber *imageCodec;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
