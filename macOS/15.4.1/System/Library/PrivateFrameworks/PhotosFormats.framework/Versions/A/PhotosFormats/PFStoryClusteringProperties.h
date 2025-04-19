@class NSString, NSDictionary;

@interface PFStoryClusteringProperties : NSObject

@property (readonly, nonatomic) NSString *algorithm;
@property (readonly, nonatomic) NSDictionary *algorithmProperties;
@property (readonly, nonatomic) NSDictionary *distanceWeights;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlgorithmName:(id)a0 algorithmProperties:(id)a1 distanceWeights:(id)a2;
- (BOOL)isEqualToPFStoryClusteringProperties:(id)a0;

@end
