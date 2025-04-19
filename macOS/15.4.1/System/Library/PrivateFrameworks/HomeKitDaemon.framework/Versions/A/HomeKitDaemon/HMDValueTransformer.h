@interface HMDValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (id)valueTransformerForName:(id)a0;
+ (Class)valueClass;
+ (id)sharedTransformer;
+ (id)decodeValue:(id)a0 withTransformerNamed:(id)a1 error:(id *)a2;
+ (id)encodeValue:(id)a0 withTransformerNamed:(id)a1 error:(id *)a2;
+ (id)reverseTransformedValue:(id)a0 error:(id *)a1;
+ (id)transformedValue:(id)a0 error:(id *)a1;

- (id)description;
- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (BOOL)isKindOfTransformer:(Class)a0;
- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (id)transformedValue:(id)a0 error:(id *)a1;

@end
