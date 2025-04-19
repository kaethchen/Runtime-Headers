@interface HMDIdentityTransformer : HMDValueTransformer

+ (Class)transformedValueClass;
+ (Class)valueClass;
+ (id)reverseTransformedValue:(id)a0 error:(id *)a1;
+ (id)transformedValue:(id)a0 error:(id *)a1;

- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (id)transformedValue:(id)a0 error:(id *)a1;

@end
