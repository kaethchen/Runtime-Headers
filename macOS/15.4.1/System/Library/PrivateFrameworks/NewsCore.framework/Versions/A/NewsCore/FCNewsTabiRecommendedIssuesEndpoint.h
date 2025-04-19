@class NSString, FCNewsTabiEventAggregationOutputsConfiguration, FCNewsTabiRecommendedIssuesConfiguration;

@interface FCNewsTabiRecommendedIssuesEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
