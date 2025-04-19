@interface BRCSyncBudgetThrottle : NSObject <NSSecureCoding> {
    double _t0;
    float _values[8];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float lastMinute;
@property (readonly, nonatomic) float lastHour;
@property (readonly, nonatomic) float lastDay;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clear;
- (void)updateForTime:(double)a0;
- (double)nextDateWithBudgetWithDefaults:(id)a0;
- (double)_timeToLoseAmount:(float)a0 count:(int)a1;
- (float)availableBudgetWithDefaults:(id)a0;
- (void)consume:(float)a0;
- (id)debugDescriptionWithDefaults:(id)a0;

@end
