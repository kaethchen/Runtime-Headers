@class NSMeasurement;

@interface SRPhotoplethysmogramAccelerometerSample : NSObject <NSCopying, NSSecureCoding> {
    double _rawFrequency;
    double _rawX;
    double _rawY;
    double _rawZ;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long nanosecondsSinceStart;
@property (readonly, nonatomic) NSMeasurement *samplingFrequency;
@property (readonly, nonatomic) NSMeasurement *x;
@property (readonly, nonatomic) NSMeasurement *y;
@property (readonly, nonatomic) NSMeasurement *z;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHAPPGAccelSample:(id)a0;
- (id)initWithTimestamp:(long long)a0 frequency:(double)a1 x:(double)a2 y:(double)a3 z:(double)a4;
- (BOOL)isEqualToAccelSample:(id)a0;

@end
