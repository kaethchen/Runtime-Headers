@interface NISystemState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long uwbPreciseDistanceAvailability;
@property (nonatomic) unsigned long long uwbExtendedDistanceAvailability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithUWBPreciseDistanceAvailability:(unsigned long long)a0 uwbExtendedDistanceAvailability:(unsigned long long)a1;

@end
