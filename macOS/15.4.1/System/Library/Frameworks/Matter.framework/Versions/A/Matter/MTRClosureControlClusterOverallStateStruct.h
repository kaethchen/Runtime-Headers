@class NSNumber;

@interface MTRClosureControlClusterOverallStateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *positioning;
@property (copy, nonatomic) NSNumber *latching;
@property (copy, nonatomic) NSNumber *speed;
@property (copy, nonatomic) NSNumber *extraInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
