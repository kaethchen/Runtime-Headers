@class MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct;

@interface MTRWaterHeaterManagementClusterBoostStartedEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct *boostInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
