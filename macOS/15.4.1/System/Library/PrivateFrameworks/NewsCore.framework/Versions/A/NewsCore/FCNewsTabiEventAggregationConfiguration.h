@class NSDictionary, FCNewsTabiEventAggregationConditions, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiEventAggregationConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *dictionary;
@property (nonatomic) long long maxTopicIds;
@property (nonatomic) long long maxSessionEvents;
@property (nonatomic) long long titleEmbeddingDimension;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *outputs;
@property (retain, nonatomic) FCNewsTabiEventAggregationConditions *eventConditions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 outputs:(id)a1;

@end
