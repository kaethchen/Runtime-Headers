@interface FCNewsTabiEventAggregationBaseEventConditions : NSObject

@property (readonly, nonatomic) double probability;

- (id)description;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)initWithProbability:(double)a0;

@end
