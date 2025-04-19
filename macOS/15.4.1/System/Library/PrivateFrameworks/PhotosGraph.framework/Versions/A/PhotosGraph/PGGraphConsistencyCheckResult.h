@class NSDictionary;

@interface PGGraphConsistencyCheckResult : NSObject

@property (nonatomic) double overallSimilarityScore;
@property (retain, nonatomic) NSDictionary *similarityScoreByDomain;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
