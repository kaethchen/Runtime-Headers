@interface FI_TIconSizeSliderValueTransformer : NSValueTransformer {
    double _minSliderValue;
    double _maxSliderValue;
    double _minIconSize;
    double _maxIconSize;
    double _offset;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (void)setOffset:(double)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (double)decrease:(double)a0;
- (double)increase:(double)a0;
- (double)reverseTransformedFloatValue:(unsigned long long)a0;
- (void)setIconSizeMin:(double)a0 max:(double)a1;
- (void)setSliderValueMin:(double)a0 max:(double)a1;
- (double)transformedFloatValue:(unsigned long long)a0;

@end
