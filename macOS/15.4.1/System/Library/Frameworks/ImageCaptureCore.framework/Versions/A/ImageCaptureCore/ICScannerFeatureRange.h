@interface ICScannerFeatureRange : ICScannerFeature {
    id _rvProps;
}

@property double currentValue;
@property (readonly) double defaultValue;
@property (readonly) double minValue;
@property (readonly) double maxValue;
@property (readonly) double stepSize;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (double)getValidatedValue:(double)a0;
- (id)oldAndNewSettings:(id)a0;

@end
