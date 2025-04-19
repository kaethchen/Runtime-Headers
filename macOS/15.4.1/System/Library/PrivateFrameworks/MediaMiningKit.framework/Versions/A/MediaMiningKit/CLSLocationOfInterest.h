@class NSUUID, CLCircularRegion, CLLocation, NSMutableArray, CLSLitePlacemark;

@interface CLSLocationOfInterest : NSObject <NSSecureCoding> {
    CLSLitePlacemark *_placemark;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) CLCircularRegion *placemarkRegion;
@property (readonly, nonatomic) unsigned long long businessItemMuid;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) NSMutableArray *visits;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addVisit:(id)a0;
- (void)removeVisit:(id)a0;
- (id)initWithIdentifier:(id)a0 locationOfInterestType:(long long)a1 location:(id)a2 placemarkRegion:(id)a3 businessItemMuid:(unsigned long long)a4 radius:(double)a5;
- (double)placemarkLocationDistanceFromLocation:(id)a0 locationCache:(id)a1;
- (id)placemarkWithLocationCache:(id)a0;

@end
