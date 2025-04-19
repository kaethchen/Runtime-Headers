@class NSNumber, MTRCameraAVStreamManagementClusterVideoResolutionStruct;

@interface MTRCameraAVStreamManagementClusterSnapshotStreamChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *snapshotStreamID;
@property (copy, nonatomic) NSNumber *imageCodec;
@property (copy, nonatomic) NSNumber *frameRate;
@property (copy, nonatomic) NSNumber *bitRate;
@property (copy, nonatomic) MTRCameraAVStreamManagementClusterVideoResolutionStruct *minResolution;
@property (copy, nonatomic) MTRCameraAVStreamManagementClusterVideoResolutionStruct *maxResolution;
@property (copy, nonatomic) NSNumber *quality;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
