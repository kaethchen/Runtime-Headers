@class FCNewsTabiRecommendedIssuesUserContextConfiguration, FCNewsTabiRecommendedIssuesInputOutputConfiguration;

@interface FCNewsTabiRecommendedIssuesConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiRecommendedIssuesInputOutputConfiguration *bundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesUserContextConfiguration *userContextConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
