@class NSMeasurement;

@interface GEOComposedStringArgument_Distance : GEOComposedStringArgument {
    NSMeasurement *_defaultValue;
    BOOL _allowUnitConversion;
}

@property (retain, nonatomic) NSMeasurement *overrideValue;
@property (nonatomic) unsigned long long formatOptions;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)distanceFormat;

@end
