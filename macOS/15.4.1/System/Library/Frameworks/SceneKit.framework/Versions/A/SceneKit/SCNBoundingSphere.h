@interface SCNBoundingSphere : NSObject

@property (nonatomic) struct SCNVector3 { double x; double y; double z; } center;
@property (nonatomic) double radius;

- (id)description;

@end
