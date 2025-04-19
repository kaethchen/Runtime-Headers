@interface NSValueTransformer : NSObject

+ (BOOL)allowsReverseTransformation;
+ (void)setValueTransformer:(id)a0 forName:(id)a1;
+ (Class)transformedValueClass;
+ (id)valueTransformerForName:(id)a0;
+ (id)valueTransformerNames;

- (id)init;
- (id)_initForFoundationOnly;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
