@class NSValueTransformer;

@interface VSReverseValueTransformer : NSValueTransformer

@property (retain, nonatomic) NSValueTransformer *valueTransformer;

+ (id)reverseValueTransformerWithValueTransformer:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)initWithValueTransformer:(id)a0;

@end
