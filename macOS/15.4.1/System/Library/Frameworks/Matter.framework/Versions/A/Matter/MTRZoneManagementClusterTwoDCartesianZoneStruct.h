@class NSString, NSNumber, NSArray;

@interface MTRZoneManagementClusterTwoDCartesianZoneStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *use;
@property (copy, nonatomic) NSArray *vertices;
@property (copy, nonatomic) NSString *color;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
