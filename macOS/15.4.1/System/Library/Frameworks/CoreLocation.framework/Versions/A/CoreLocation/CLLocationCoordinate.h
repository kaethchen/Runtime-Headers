@interface CLLocationCoordinate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)distanceFrom:(id)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (BOOL)isEqualCoordinate:(id)a0;

@end
