@class NSString, FCNewsTabiTagSuggestionsConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiTagSuggestionsEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiTagSuggestionsConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
