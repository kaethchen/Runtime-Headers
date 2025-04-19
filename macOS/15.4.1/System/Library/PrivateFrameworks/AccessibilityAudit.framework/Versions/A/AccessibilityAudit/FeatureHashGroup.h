@class FeatureHash, NSMutableArray;

@interface FeatureHashGroup : NSObject

@property (retain) FeatureHash *aggregateHash;
@property (retain) NSMutableArray *issues;
@property double count;

- (void).cxx_destruct;
- (void)addHash:(id)a0;
- (double)computeMeanHashDistance:(id)a0;
- (id)initWithHash:(id)a0 andIssues:(id)a1;
- (void)setScreenGroupID:(id)a0;

@end
