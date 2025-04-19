@class MTRDataTypeLocationDescriptorStruct, MTRServiceAreaClusterLandmarkInfoStruct;

@interface MTRServiceAreaClusterAreaInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRDataTypeLocationDescriptorStruct *locationInfo;
@property (copy, nonatomic) MTRServiceAreaClusterLandmarkInfoStruct *landmarkInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
