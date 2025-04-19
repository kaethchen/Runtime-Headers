@class HKBaseUnit, HKUnit, NSString;

@interface _HKBaseDimension : _HKDimension <_HKFactor>

@property (retain, nonatomic) HKBaseUnit *reducibleBaseUnit;
@property (retain, nonatomic) HKUnit *reducedUnit;
@property (nonatomic) double reductionCoefficient;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)length;
+ (id)time;
+ (id)mass;
+ (id)pressure;
+ (id)volume;
+ (id)power;
+ (id)angle;
+ (id)temperature;
+ (id)frequency;
+ (id)illuminance;
+ (id)energy;
+ (id)diopter;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)changeInTemperature;
+ (id)conductance;
+ (id)electricPotentialDifference;
+ (id)equivalents;
+ (id)hearingSensitivity;
+ (id)nonConvertibleIU;
+ (id)nonConvertibleMole;
+ (id)nullDimension;
+ (id)prismDiopter;
+ (id)soundPressureLevel;
+ (id)titer;
+ (id)unitLess;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithName:(id)a0;
- (id)dimension;
- (id)unitString;
- (id)_baseDimensions;
- (BOOL)canBeReduced;

@end
