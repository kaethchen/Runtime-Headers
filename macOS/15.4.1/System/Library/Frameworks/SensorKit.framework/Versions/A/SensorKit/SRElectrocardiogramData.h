@class NSMeasurement;

@interface SRElectrocardiogramData : NSObject <NSCopying, NSSecureCoding> {
    double _val;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSMeasurement *value;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFlags:(unsigned long long)a0 value:(double)a1;
- (BOOL)isEqualToECGData:(id)a0;

@end
