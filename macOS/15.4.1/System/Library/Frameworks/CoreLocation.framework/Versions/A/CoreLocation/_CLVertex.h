@interface _CLVertex : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)getDistanceFrom:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initWithClientCoordinate:(struct { double x0; double x1; })a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
