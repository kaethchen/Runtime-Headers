@class NSString;

@interface NSControlStateValueTransformer : NSValueTransformer

@property (retain) NSString *trueValue;
@property (retain) NSString *falseValue;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (BOOL)_allowCustomTrueFalseValues;

- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
