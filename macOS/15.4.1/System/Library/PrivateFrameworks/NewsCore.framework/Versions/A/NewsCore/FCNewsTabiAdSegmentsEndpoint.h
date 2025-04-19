@class NSString, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiAdSegmentsEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, copy, nonatomic) NSString *adSegmentsOutputName;
@property (readonly, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
