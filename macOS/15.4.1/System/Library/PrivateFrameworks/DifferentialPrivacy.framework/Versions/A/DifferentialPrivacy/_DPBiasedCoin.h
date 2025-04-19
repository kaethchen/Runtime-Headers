@interface _DPBiasedCoin : NSObject

@property (readonly, nonatomic) double bias;

+ (id)coinWithBias:(double)a0;
+ (double)sanitizedProbability:(double)a0;

- (id)description;
- (id)init;
- (BOOL)flip;
- (unsigned char)generateByte;
- (id)initWithBias:(double)a0;

@end
