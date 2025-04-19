@interface ICScannerFeatureRangeProps : NSObject

@property double currentValue;
@property double defaultValue;
@property double minValue;
@property double maxValue;
@property double stepSize;

- (double)getValidatedValue:(double)a0;

@end
