@class NSNumber;

@interface MTRScenesManagementClusterAttributeValuePairStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *valueUnsigned8;
@property (copy, nonatomic) NSNumber *valueSigned8;
@property (copy, nonatomic) NSNumber *valueUnsigned16;
@property (copy, nonatomic) NSNumber *valueSigned16;
@property (copy, nonatomic) NSNumber *valueUnsigned32;
@property (copy, nonatomic) NSNumber *valueSigned32;
@property (copy, nonatomic) NSNumber *valueUnsigned64;
@property (copy, nonatomic) NSNumber *valueSigned64;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
