@interface AMPIsEmptyStringValueTransformer : NSValueTransformer

+ (BOOL)supportsReverseTransformation;
+ (Class)transformedValueClass;

- (id)description;
- (BOOL)_isBooleanTransformer;
- (id)transformedValue:(id)a0;

@end
