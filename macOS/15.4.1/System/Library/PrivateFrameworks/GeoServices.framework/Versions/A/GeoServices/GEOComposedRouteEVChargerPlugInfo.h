@class NSMeasurement;

@interface GEOComposedRouteEVChargerPlugInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSMeasurement *maximumPower;
@property (readonly, nonatomic) NSMeasurement *maximumVoltage;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGeoChargerPlug:(id)a0;

@end
