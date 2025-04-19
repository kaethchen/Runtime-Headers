@class CLSLitePlacemark, CLCircularRegion, NSString;

@interface CLSPlace : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CLCircularRegion *region;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) CLSLitePlacemark *placemark;
@property (readonly, nonatomic) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlacemark:(id)a0;
- (id)initWithName:(id)a0 region:(id)a1 placemark:(id)a2;

@end
