@interface RBSCPUMinimumUsageGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;
@property (readonly, nonatomic) unsigned long long percentage;
@property (readonly, nonatomic) double duration;

+ (id)grantForRole:(unsigned char)a0 withPercentage:(unsigned long long)a1 duration:(double)a2;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
