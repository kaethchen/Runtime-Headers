@class NSString, FCNewsTabiChannelPickerSuggestionsConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiChannelPickerSuggestionsEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
