@class NSString, FCNewsTabiTagCohortMembershipConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiTagCohortMembershipEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
