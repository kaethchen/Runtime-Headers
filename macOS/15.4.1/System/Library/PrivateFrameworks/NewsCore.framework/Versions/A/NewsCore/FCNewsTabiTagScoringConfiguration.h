@class FCNewsTabiTagScoringOutputConfiguration;

@interface FCNewsTabiTagScoringConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiTagScoringOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagScoringOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) double minimumChannelScoreForGrouping;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
