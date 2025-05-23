@class NSString, NSArray, MTRUnitTestingClusterSimpleStruct, NSNumber;

@interface MTRUnitTestingClusterTestFabricScoped : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *fabricSensitiveInt8u;
@property (copy, nonatomic) NSNumber *optionalFabricSensitiveInt8u;
@property (copy, nonatomic) NSNumber *nullableFabricSensitiveInt8u;
@property (copy, nonatomic) NSNumber *nullableOptionalFabricSensitiveInt8u;
@property (copy, nonatomic) NSString *fabricSensitiveCharString;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *fabricSensitiveStruct;
@property (copy, nonatomic) NSArray *fabricSensitiveInt8uList;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
