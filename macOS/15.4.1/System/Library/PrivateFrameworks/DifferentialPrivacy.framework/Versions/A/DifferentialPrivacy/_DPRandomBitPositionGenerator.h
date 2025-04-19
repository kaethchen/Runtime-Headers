@interface _DPRandomBitPositionGenerator : NSObject

@property (readonly, nonatomic) unsigned long long m;

+ (id)generatorWithDimensionality:(unsigned long long)a0;

- (id)description;
- (id)init;
- (unsigned long long)sample;
- (id)initWithDimensionality:(unsigned long long)a0;

@end
