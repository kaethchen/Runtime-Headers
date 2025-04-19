@class NSString, FCNewsTabiEventAggregationOutputsConfiguration, FCNewsTabiRecommendedTagsConfiguration;

@interface FCNewsTabiRecommendedTagsEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
