@class HKQuantity;

@interface HKElectrocardiogramVoltageMeasurement : NSObject <NSCopying> {
    HKQuantity *_leadIVoltage;
}

@property (readonly, nonatomic) double timeSinceSampleStart;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLeadIVoltage:(id)a0 timeSinceSampleStart:(double)a1;
- (id)quantityForLead:(long long)a0;

@end
