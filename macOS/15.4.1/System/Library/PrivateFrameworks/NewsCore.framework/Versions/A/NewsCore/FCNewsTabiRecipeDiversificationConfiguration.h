@class FCNewsTabiRecipeDiversificationInputConfiguration, FCNewsTabiRecipeDiversificationOutputConfiguration, FCNewsTabiRecipeEventAggregationConfiguration;

@interface FCNewsTabiRecipeDiversificationConfiguration : NSObject

@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationOutputConfiguration *nonBundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConfiguration *eventAggregationConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationInputConfiguration *bundleInputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationInputConfiguration *nonBundleInputConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
