@class NSDictionary;

@interface FBKQuestionValueToDisplayNameTransformer : NSValueTransformer

@property (copy) NSDictionary *dictionary;

+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)transformedValue:(id)a0;

@end
