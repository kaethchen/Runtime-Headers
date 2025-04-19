@class NSString, FCNewsTabiMyMagazinesConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiMyMagazinesEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiMyMagazinesConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
