@class NSNumber, MTRServiceAreaClusterAreaInfoStruct;

@interface MTRServiceAreaClusterAreaStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *areaID;
@property (copy, nonatomic) NSNumber *mapID;
@property (copy, nonatomic) MTRServiceAreaClusterAreaInfoStruct *areaInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
