@class NSDictionary, NSString;

@interface ABCardViewDictionaryTransformer : NSValueTransformer

@property (retain, nonatomic) NSDictionary *currentDictionary;
@property (retain, nonatomic) NSString *valueKey;

+ (BOOL)allowsReverseTransformation;

- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)initWithValueKey:(id)a0;

@end
