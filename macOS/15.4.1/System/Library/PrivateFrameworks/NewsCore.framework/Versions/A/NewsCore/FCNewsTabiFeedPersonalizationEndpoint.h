@class NSString, FCNewsTabiEventAggregationOutputsConfiguration, FCNewsTabiFeedPersonalizationConfiguration;

@interface FCNewsTabiFeedPersonalizationEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
