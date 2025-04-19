@class NSDictionary;

@interface _PXIsAlteredValueTransformer : NSValueTransformer {
    id _defaultValue;
    NSDictionary *_defaultSettingsArchiveDictionary;
}

+ (BOOL)allowsReverseTransformation;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)initWithDefaultValue:(id)a0;

@end
