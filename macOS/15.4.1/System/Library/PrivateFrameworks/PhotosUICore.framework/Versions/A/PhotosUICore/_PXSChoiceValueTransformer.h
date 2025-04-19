@class NSArray;

@interface _PXSChoiceValueTransformer : NSValueTransformer {
    NSArray *_possibleValues;
}

- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)initWithPossibleValues:(id)a0;

@end
