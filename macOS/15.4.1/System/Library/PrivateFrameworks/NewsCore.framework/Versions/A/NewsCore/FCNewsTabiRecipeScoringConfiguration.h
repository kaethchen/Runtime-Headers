@class FCNewsTabiRecipeScoringOutputConfiguration, FCNewsTabiRecipeEventAggregationConfiguration, FCNewsTabiRecipeScoringInputConfiguration;

@interface FCNewsTabiRecipeScoringConfiguration : NSObject

@property (readonly, nonatomic) FCNewsTabiRecipeScoringOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeScoringOutputConfiguration *nonBundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConfiguration *eventAggregationConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeScoringInputConfiguration *bundleInputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeScoringInputConfiguration *nonBundleInputConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
