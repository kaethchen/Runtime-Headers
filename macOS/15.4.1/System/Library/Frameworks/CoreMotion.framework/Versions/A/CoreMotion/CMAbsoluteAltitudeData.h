@class NSNumber;

@interface CMAbsoluteAltitudeData : CMLogItem {
    double _altitudePrivate;
}

@property (readonly, nonatomic) NSNumber *absoluteAltitude;
@property (readonly, nonatomic) double absoluteAltitudeAccuracy;
@property (readonly, nonatomic) double absoluteAltitudePrecision;
@property (readonly, nonatomic) double filteredPressure;
@property (readonly, nonatomic) long long absoluteAltitudeStatusInfo;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) double precision;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAltitude:(double)a0 accuracy:(double)a1 precision:(double)a2 filteredPressure:(double)a3 status:(long long)a4 timestamp:(double)a5;
- (void)setAltitudeData:(double)a0 accuracy:(double)a1 precision:(double)a2 filteredPressure:(double)a3 status:(long long)a4;

@end
