@interface AVBMSRPFailureCodeTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (id)localizedNameForFailureCode:(unsigned char)a0;

@end
