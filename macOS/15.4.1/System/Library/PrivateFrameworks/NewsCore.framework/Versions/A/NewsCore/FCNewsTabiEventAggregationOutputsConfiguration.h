@class FCNewsTabiEventAggregationOutputConfiguration;

@interface FCNewsTabiEventAggregationOutputsConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *nonBundleOutputConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithOutputs:(id)a0;

@end
