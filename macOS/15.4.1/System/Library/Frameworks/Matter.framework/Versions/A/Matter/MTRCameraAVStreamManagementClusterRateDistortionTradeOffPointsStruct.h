@class NSNumber, MTRCameraAVStreamManagementClusterVideoResolutionStruct;

@interface MTRCameraAVStreamManagementClusterRateDistortionTradeOffPointsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *codec;
@property (copy, nonatomic) MTRCameraAVStreamManagementClusterVideoResolutionStruct *resolution;
@property (copy, nonatomic) NSNumber *minBitRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
