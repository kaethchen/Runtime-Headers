@interface QConvolutionIsNotNone : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;

@end
