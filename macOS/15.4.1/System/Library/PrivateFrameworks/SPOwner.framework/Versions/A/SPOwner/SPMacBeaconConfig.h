@class NSArray;

@interface SPMacBeaconConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double initialNoBeaconDuration;
@property (nonatomic) double fastRollAdvertisementDuration;
@property (nonatomic) double fastRollAdvertisementInterval;
@property (nonatomic) double slowRollAdvertisementDuration;
@property (nonatomic) double slowRollNoAdvertisementDuration;
@property (nonatomic) double noAdvertisementDurationDecayFactor;
@property (copy, nonatomic) NSArray *postInitialDayAdvertisementTimes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromPrefs;
- (id)initWithInitialNoBeaconDuration:(double)a0 fastRollAdvertisementDuration:(double)a1 fastRollAdvertisementInterval:(double)a2 slowRollAdvertisementDuration:(double)a3 slowRollNoAdvertisementDuration:(double)a4 noAdvertisementDurationDecayFactor:(double)a5 postInitialDayAdvertisementTimes:(id)a6;
- (void)persistToPrefs;

@end
