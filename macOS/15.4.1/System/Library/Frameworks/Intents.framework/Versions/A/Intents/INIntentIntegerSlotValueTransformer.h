@interface INIntentIntegerSlotValueTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (Class)_intents_resolutionResultClass;
+ (long long)_intents_valueType;
+ (Class)reverseTransformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
