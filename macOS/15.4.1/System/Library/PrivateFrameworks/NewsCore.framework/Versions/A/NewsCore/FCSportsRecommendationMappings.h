@class FCSportsRecommendationsProvider;

@interface FCSportsRecommendationMappings : NSObject

@property (retain, nonatomic) FCSportsRecommendationsProvider *defaultRecommendations;
@property (retain, nonatomic) FCSportsRecommendationsProvider *alternativeRecommendations;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
