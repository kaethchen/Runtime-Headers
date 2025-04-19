@class NSString;

@interface FCNewsTabiRecommendedIssuesInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *recommendedIssuePublisherOutputName;
@property (retain, nonatomic) NSString *recommendedIssuePublisherScoreOutputName;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
