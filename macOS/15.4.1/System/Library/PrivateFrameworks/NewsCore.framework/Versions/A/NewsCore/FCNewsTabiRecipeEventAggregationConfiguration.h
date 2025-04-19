@class FCNewsTabiRecipeEventAggregationConditions, NSArray;

@interface FCNewsTabiRecipeEventAggregationConfiguration : NSObject

@property (readonly, nonatomic) long long maxSessionEvents;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConditions *eventConditions;
@property (readonly, nonatomic) NSArray *inputNames;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
