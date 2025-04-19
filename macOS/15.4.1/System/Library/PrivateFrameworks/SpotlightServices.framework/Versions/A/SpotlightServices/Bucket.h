@class NSMutableArray;

@interface Bucket : NSObject

@property (nonatomic) double threshold;
@property (nonatomic) double upperBound;
@property (nonatomic) double lowerBound;
@property (nonatomic) BOOL isPerfectScoreEmailBucket;
@property (retain) NSMutableArray *items;

- (void).cxx_destruct;
- (BOOL)addOne:(id)a0;
- (void)calculateLikelihood:(id)a0;
- (id)initWithItem:(id)a0 isPerfectScoreEmailBucket:(BOOL)a1;

@end
