@interface IMAVSlider : IMAVControl

+ (Class)_auxiliaryClass;
+ (id)timeSlider;

- (double)maxValue;
- (double)minValue;
- (void)setMaxValue:(double)a0;
- (void)setMinValue:(double)a0;

@end
