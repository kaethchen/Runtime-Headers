@interface _DPLaplaceNoiseGenerator : NSObject

@property (readonly, nonatomic) double b;

+ (id)zeroMeanLaplaceNoiseGenerator:(double)a0;

- (id)description;
- (id)init;
- (double)sample;
- (id)initWithScale:(double)a0;

@end
