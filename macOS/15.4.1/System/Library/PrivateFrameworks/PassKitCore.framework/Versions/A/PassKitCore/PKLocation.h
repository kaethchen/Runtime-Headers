@class NSString;

@interface PKLocation : NSObject <NSSecureCoding> {
    _Atomic BOOL _hashComputed;
    _Atomic unsigned long long _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *relevantText;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (readonly, nonatomic) BOOL hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) double maxDistance;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)CLLocation;
- (BOOL)hasEqualCoordinatesToLocation:(id)a0;

@end
