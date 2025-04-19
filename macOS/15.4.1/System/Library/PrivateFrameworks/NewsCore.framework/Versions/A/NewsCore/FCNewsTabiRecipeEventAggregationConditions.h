@class FCNewsTabiEventAggregationDurationEventConditions, FCNewsTabiEventAggregationBaseEventConditions;

@interface FCNewsTabiRecipeEventAggregationConditions : NSObject

@property (readonly, nonatomic) FCNewsTabiEventAggregationDurationEventConditions *cookModeViewed;
@property (readonly, nonatomic) FCNewsTabiEventAggregationBaseEventConditions *recipeSaved;
@property (readonly, nonatomic) FCNewsTabiEventAggregationDurationEventConditions *recipeViewed;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
