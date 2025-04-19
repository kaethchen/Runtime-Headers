@class NSString, NSNumber, NSTimeZone;

@interface SSTimeZoneLocation : NSObject

@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property BOOL isCapital;

+ (id)timeZoneWithLocation:(id)a0 timeZone:(id)a1;
+ (id)timeZoneWithLocation:(id)a0 timeZoneName:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 timeZone:(id)a1;

@end
