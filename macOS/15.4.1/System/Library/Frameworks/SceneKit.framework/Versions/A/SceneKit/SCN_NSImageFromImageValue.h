@interface SCN_NSImageFromImageValue : NSValueTransformer

+ (void)initialize;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
