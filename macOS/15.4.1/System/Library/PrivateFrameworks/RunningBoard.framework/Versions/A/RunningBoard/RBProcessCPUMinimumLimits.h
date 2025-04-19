@interface RBProcessCPUMinimumLimits : NSObject

@property (readonly, nonatomic) unsigned long long percentage;
@property (readonly, nonatomic) unsigned long long duration;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPercentage:(unsigned long long)a0 duration:(unsigned long long)a1;
- (id)unionLimit:(id)a0;

@end
