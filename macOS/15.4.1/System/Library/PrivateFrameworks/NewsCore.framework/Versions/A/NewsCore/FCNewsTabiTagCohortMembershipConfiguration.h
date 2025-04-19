@class FCNewsTabiTagCohortMembershipOutputConfiguration;

@interface FCNewsTabiTagCohortMembershipConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiTagCohortMembershipOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipOutputConfiguration *nonBundleOutputConfiguration;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
