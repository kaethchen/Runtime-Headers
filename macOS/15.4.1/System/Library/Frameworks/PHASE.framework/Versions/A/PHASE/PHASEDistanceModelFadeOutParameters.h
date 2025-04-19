@interface PHASEDistanceModelFadeOutParameters : NSObject

@property (readonly, nonatomic) double maximumDistance;
@property (readonly, nonatomic) double cullDistance;

+ (id)new;

- (id)init;
- (double)maximumDistance;
- (void)setMaximumDistance:(double)a0;
- (id)initWithCullDistance:(double)a0;
- (id)initWithMaximumDistance:(double)a0 fadeOutLength:(double)a1 curveType:(long long)a2;

@end
