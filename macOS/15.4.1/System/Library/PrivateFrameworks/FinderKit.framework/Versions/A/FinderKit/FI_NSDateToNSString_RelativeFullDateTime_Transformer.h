@interface FI_NSDateToNSString_RelativeFullDateTime_Transformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;

@end
