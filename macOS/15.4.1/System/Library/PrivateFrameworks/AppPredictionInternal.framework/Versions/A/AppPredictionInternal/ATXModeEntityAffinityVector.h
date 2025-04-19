@class NSArray;

@interface ATXModeEntityAffinityVector : NSObject

@property (readonly, nonatomic) NSArray *affinityVector;

+ (id)centroid:(id)a0;
+ (id)weightedCentroid:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)prettyDescription;
- (double)magnitude;
- (id)_initWithAffinityVector:(id)a0;
- (id)initWithAffinities:(id)a0;
- (id)initWithAffinities:(id)a0 shouldResize:(BOOL)a1;
- (BOOL)isZeroVector;
- (void)resizeToUnit;
- (double)scoreForMode:(unsigned long long)a0;
- (id)sortedAffinities;

@end
