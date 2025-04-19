@class NSString, NSNumber;

@interface MTRDataTypeLocationDescriptorStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSNumber *floorNumber;
@property (copy, nonatomic) NSNumber *areaType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
