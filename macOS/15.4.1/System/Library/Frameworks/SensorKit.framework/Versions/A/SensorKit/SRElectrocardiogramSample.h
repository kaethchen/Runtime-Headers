@class NSArray, NSMeasurement, SRElectrocardiogramSession, NSDate;

@interface SRElectrocardiogramSample : NSObject <NSCopying, NSSecureCoding> {
    double _time;
    double _freq;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSMeasurement *frequency;
@property (readonly, nonatomic) SRElectrocardiogramSession *session;
@property (readonly, nonatomic) long long lead;
@property (readonly, copy, nonatomic) NSArray *data;

+ (id)new;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHAECGSample:(id)a0;
- (id)initWithTimestamp:(double)a0 frequency:(double)a1 session:(id)a2 lead:(long long)a3 data:(id)a4;
- (BOOL)isEqualToSample:(id)a0;

@end
