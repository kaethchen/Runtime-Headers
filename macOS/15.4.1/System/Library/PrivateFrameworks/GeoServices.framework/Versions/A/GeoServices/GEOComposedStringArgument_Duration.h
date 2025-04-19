@class NSMeasurement;

@interface GEOComposedStringArgument_Duration : GEOComposedStringArgument {
    NSMeasurement *_defaultValue;
    NSMeasurement *_overrideValue;
}

@property (nonatomic) double overrideValue;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)durationFormat;

@end
