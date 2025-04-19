@interface SCNBoundingBox : NSObject

@property (nonatomic) struct SCNVector3 { double x; double y; double z; } min;
@property (nonatomic) struct SCNVector3 { double x; double y; double z; } max;

- (id)description;

@end
