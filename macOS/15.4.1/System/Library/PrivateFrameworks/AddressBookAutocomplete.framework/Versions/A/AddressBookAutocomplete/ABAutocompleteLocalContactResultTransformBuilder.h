@class CNAutocompleteResultFactory, NSMutableArray;

@interface ABAutocompleteLocalContactResultTransformBuilder : NSObject {
    NSMutableArray *_transforms;
    CNAutocompleteResultFactory *_factory;
}

@property unsigned long long builtContactType;

+ (id /* block */)valueTransformForProperty:(id)a0;
+ (id)localContactBuilderWithResultFactory:(id)a0;
+ (id)serverContactBuilderWithResultFactory:(id)a0;
+ (id)suggestedContactBuilderWithResultFactory:(id)a0;

- (void).cxx_destruct;
- (id /* block */)build;
- (void)addTransformForProperty:(id)a0;
- (id /* block */)buildAggregateTransform;
- (id)initWithResultFactory:(id)a0;
- (id /* block */)makeTransformForProperty:(id)a0;

@end
