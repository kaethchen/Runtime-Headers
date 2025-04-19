@interface VSAMSIdentityProviderResponseDictionaryValueTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (id)createProviderAppArtworkFromAttributes:(id)a0;

@end
