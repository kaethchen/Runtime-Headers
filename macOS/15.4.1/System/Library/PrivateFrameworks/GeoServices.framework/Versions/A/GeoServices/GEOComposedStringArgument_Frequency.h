@class NSMeasurement;

@interface GEOComposedStringArgument_Frequency : GEOComposedStringArgument {
    NSMeasurement *_defaultValue;
    NSMeasurement *_overrideValue;
    NSMeasurement *_defaultMinValue;
    NSMeasurement *_overrideMinValue;
    NSMeasurement *_defaultMaxValue;
    NSMeasurement *_overrideMaxValue;
}

@property (nonatomic) double overrideValue;
@property (nonatomic) double overrideMinValue;
@property (nonatomic) double overrideMaxValue;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)frequencyFormat;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_replacementValueForFrequencyRange;
- (id)_replacementValueForFrequencyValue;
- (id)_stringReplacementWithOptions:(id)a0;

@end
