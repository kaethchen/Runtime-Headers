@class NSDictionary;

@interface SCNUID_ConstantTransformer : NSValueTransformer

@property (retain, nonatomic) NSDictionary *constantToString;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
